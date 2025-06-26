cmake_minimum_required(VERSION 3.28)
project(2DPhysicsVisualizer LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.1
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

# Creating the executable and linking the SFML libraries
add_executable(2DPhysicsVisualizer src/main.cpp)
target_compile_features(2DPhysicsVisualizer PRIVATE cxx_std_17)
target_link_libraries(2DPhysicsVisualizer PRIVATE SFML::Graphics)
