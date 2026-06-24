cmake_minimum_required(VERSION 3.15)
project("MusicAnalyzer" VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


include(FetchContent)

if(POLICY CMP0169)
    cmake_policy(SET CMP0169 OLD)
endif()

FetchContent_Declare(
    aubio
    GIT_REPOSITORY https://github.com/aubio/aubio.git
    GIT_TAG master
)

FetchContent_GetProperties(aubio)
if(NOT aubio_POPULATED)
    FetchContent_Populate(aubio)

    include_directories(${aubio_SOURCE_DIR})
    include_directories(${aubio_SOURCE_DIR}/src)
endif()

include_directories(include)

add_executable(MusicAnalyzer 
    src/main.cpp 
    src/analyzer.cpp
    ${aubio_SOURCE_DIR}/src/fvec.c
    ${aubio_SOURCE_DIR}/src/mathutils.c
    ${aubio_SOURCE_DIR}/src/pitch/pitch.c
    ${aubio_SOURCE_DIR}/src/pitch/pitchyinfft.c
    ${aubio_SOURCE_DIR}/src/pitch/pitchyin.c
    ${aubio_SOURCE_DIR}/src/spectral/fft.c
    ${aubio_SOURCE_DIR}/src/spectral/phasevoc.c)