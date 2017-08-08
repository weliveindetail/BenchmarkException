cmake_minimum_required(VERSION 3.2)

cmake_policy(SET CMP0022 NEW) # enable >2.8 behavior for INTERFACE_LINK_LIBRARIES
cmake_policy(SET CMP0048 NEW) # enable project versioning by CMake
cmake_policy(SET CMP0053 NEW) # simplify variable reference and escape sequence evaluation

project(BenchmarkException VERSION 1.0 LANGUAGES CXX)

if(WIN32)
    set(OS_NAME "Win")
elseif(APPLE)
    set(OS_NAME "OSX")
elseif(UNIX)
    set(OS_NAME "Linux")
else()
    message(FATAL_ERROR "Operating system not supported")
endif()
message(STATUS "System: ${OS_NAME}")

add_executable(BenchmarkException
    BenchmarkException.cpp

    int_bench.cpp
    int_bench.h
    int_utils.h
)

set_target_properties(BenchmarkException PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

message("")
message("Google Benchmark")
find_package(benchmark) # ?!?!

target_include_directories(BenchmarkException PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${LLVM_INCLUDE_DIRS}
    /usr/local/include
)

target_link_libraries(BenchmarkException PRIVATE
    /usr/local/lib/libbenchmark.a
)

message("")
message("BenchmarkException")

get_target_property(ALL_ID BenchmarkException INCLUDE_DIRECTORIES)
message(STATUS "Include directories: ${ALL_ID}")

get_target_property(ALL_LL BenchmarkException LINK_LIBRARIES)
message(STATUS "Link libraries: ${ALL_LL}")

get_target_property(ALL_CO BenchmarkException COMPILE_OPTIONS)
message(STATUS "Compile options: ${ALL_CO}")

get_target_property(ALL_CD BenchmarkException COMPILE_DEFINITIONS)
message(STATUS "Compile definitions: ${ALL_CD}")

message(STATUS "Other flags: ${CMAKE_CXX_FLAGS}")
message(STATUS "Other flags Debug: ${CMAKE_CXX_FLAGS_DEBUG}")
message(STATUS "Other flags Release: ${CMAKE_CXX_FLAGS_RELEASE}")
