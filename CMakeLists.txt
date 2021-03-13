cmake_minimum_required(VERSION 3.10)

project(musefileformat)


find_program(PROTOC_C NAMES protoc-c DOC "Protocol Buffers C compiler")
find_library(PROTOC_C_LIBRARY NAMES protobuf-c) 
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_SOURCE_DIR}/Muse_v2.pb-c.h ${CMAKE_CURRENT_SOURCE_DIR}/Muse_v2.pb-c.c
    COMMAND ${PROTOC_C} ARGS --c_out=. Muse_v2.proto
    DEPENDS Muse_v2.proto ${PROTOC_C}
    COMMENT "Running protoc on Muse_v2.proto"
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(musefileformat musefileformat.c Muse_v2.pb-c.c musefileformat.h)
target_include_directories(musefileformat INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(musefileformat ${PROTOC_C_LIBRARY})
install(FILES musefileformat.h DESTINATION include)

include(CTest)
if(BUILD_TESTING)
    add_executable(musefileformat-test test.c)
    target_link_libraries(musefileformat-test musefileformat)
    add_test(NAME musefileformat COMMAND musefileformat-test)
endif()
