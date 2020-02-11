cmake_minimum_required(VERSION 3.5)
project(ur_lsp)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES
    "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")

file(GLOB_RECURSE HEADERS
    "${CMAKE_CURRENT_LIST_DIR}/src/*.h")

add_library(mongoose external/mongoose/mongoose.c)

include_directories(
    externals/mongoose
    )

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_link_libraries(${PROJECT_NAME} mongoose)














