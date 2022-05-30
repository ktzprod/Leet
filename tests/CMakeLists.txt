cmake_minimum_required(VERSION 3.10)

project(leet-tests
    VERSION
    1.0.0
    DESCRIPTION
    "Launch unit tests for libleet"
    LANGUAGES
    CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB test_files *.cpp)

add_executable(${PROJECT_NAME} ${test_files})

target_include_directories(${PROJECT_NAME} PRIVATE ../include)
target_link_libraries(${PROJECT_NAME} leet)
