cmake_minimum_required(VERSION 3.10)

# Project
project(leet
    VERSION 0.0.1
    DESCRIPTION "Aim to provide efficient C++ tools and tricks"
    LANGUAGES CXX
)

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Specify if the tests target needs to be be built" ON)

add_compile_options(-Wall)

# Sources and Headers
file(GLOB_RECURSE sources src/*.cpp)
file(GLOB_RECURSE headers include/*.h)

# Declare library
add_library(${PROJECT_NAME} ${sources})

# Set header folder
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Manage symbol visibility
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_VISIBILITY_PRESET hidden)
target_compile_definitions(
    ${PROJECT_NAME}
    PUBLIC
    $<$<NOT:$<BOOL:${BUILD_SHARED_LIBS}>>:LEET_STATIC>
    PRIVATE
    $<$<BOOL:${BUILD_SHARED_LIBS}>:LEET_EXPORT>
)

if (NOT BUILD_SHARED_LIBS)
    set(PKG_EXTRA_C_FLAGS "-DLEET_STATIC")
endif()

set(INPUT_PKG_FILE ${CMAKE_CURRENT_SOURCE_DIR}/cmake/${PROJECT_NAME}.pc.in)
set(OUTPUT_PKG_FILE ${PROJECT_NAME}.pc)
configure_file(${INPUT_PKG_FILE} ${OUTPUT_PKG_FILE} @ONLY)

include(GNUInstallDirs)
install(TARGETS ${PROJECT_NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

install(FILES ${Headers} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}/)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_PKG_FILE} DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig)

if (BUILD_TESTS)
    add_subdirectory(tests)
endif()
