cmake_minimum_required(VERSION 3.5)
project(ur_lsp)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

find_package(Threads)
if (Threads_FOUND)
	message("-- OK.")
else ()
	message(FATAL_ERROR "Threads not found.")
endif ()

file(GLOB_RECURSE SOURCES
    "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")

file(GLOB_RECURSE HEADERS
    "${CMAKE_CURRENT_LIST_DIR}/src/*.h")

add_subdirectory(externals/json-rpc-cxx)

include_directories(
    externals/mongoose
    )

set(HTTP_INCLUDE_DIRS "externals/json-rpc-cxx/vendor")
#set(JSON_INCLUDE_DIRS "externals/json-rpc-cxx/vendor/")

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${HTTP_INCLUDE_DIRS} ${JSON_INCLUDE_DIRS})
#target_include_directories(json-rpc-cxx INTERFACE ${HTTP_INCLUDE_DIRS} ${JSON_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} json-rpc-cxx)














