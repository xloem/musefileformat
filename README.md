# NOTE: code currently uses protobuf-c, which doesn't support muse's proto2 message extensions.
#       other protobuf libraries, like nanopb, likely do support this
# There is also a .muse 1 file reader patch for openvibe kicking around on the internet,
#  also started by me
apt-get install libprotobuf-c-dev
apt-get install protobuf-c-compiler # to build generated files with same library version
