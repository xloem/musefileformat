cmake_minimum_required(VERSION 3.10)

project(musefileformat)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/nanopb/extra)
find_package(Nanopb REQUIRED)
include_directories(${NANOPB_INCLUDE_DIRS})

find_program(PROTO_GEN NAMES nanopb_generator.py PATHS ${NANOPB_GENERATOR_SOURCE_DIR} DOC "Nanopb compiler")

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Muse_v2.pb.h ${CMAKE_CURRENT_SOURCE_DIR}/Muse_v2.pb.c
    COMMAND ${PROTO_GEN} ARGS
    	--output-dir=${CMAKE_CURRENT_SOURCE_DIR}
	--options-path=${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/Muse_v2.proto
    DEPENDS Muse_v2.proto ${PROTO_GEN}
    COMMENT "Running ${PROTO_GEN} on Muse_v2.proto"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Muse_v1.pb.h ${CMAKE_CURRENT_SOURCE_DIR}/Muse_v1.pb.c
    COMMAND ${PROTO_GEN} ARGS
    	--output-dir=${CMAKE_CURRENT_SOURCE_DIR}
	--options-path=${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/Muse_v1.proto
    DEPENDS Muse_v1.proto ${PROTO_GEN}
    COMMENT "Running ${PROTO_GEN} on Muse_v1.proto"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
add_custom_target(generate_proto_sources DEPENDS
	${CMAKE_CURRENT_SOURCE_DIR}/Muse_v2.pb.c
	${CMAKE_CURRENT_SOURCE_DIR}/Muse_v1.pb.c
)
#set_source_files_properties(${PROTO_SRCS} ${PROTO_HDRS} PROPERTIES GENERATED TRUE)

add_library(musefileformat musefileformat.c musefileformat.h Muse_v2.pb.c Muse_v2.pb.h)
target_include_directories(musefileformat INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(musefileformat ${PROTOC_C_LIBRARY})
install(FILES musefileformat.h DESTINATION include)
install(TARGETS musefileformat)

include(CTest)
if(BUILD_TESTING)
    add_executable(musefileformat-test test.c)
    target_link_libraries(musefileformat-test musefileformat)
    add_test(NAME musefileformat COMMAND musefileformat-test)
endif()
