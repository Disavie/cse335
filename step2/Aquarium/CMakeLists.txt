cmake_minimum_required(VERSION 3.20)
project(Aquarium)
set(APPLICATION_LIBRARY AquariumLib)

set(CMAKE_CXX_STANDARD 17)

# Request the required wxWidgets libs
# Turn off wxWidgets own precompiled header system, since
# it doesn't seem to work. The CMake version works much better.
set(wxBUILD_PRECOMP OFF)
find_package(wxWidgets COMPONENTS core base xrc html xml REQUIRED)

# Include the wxWidgets use file to initialize various settings
include(${wxWidgets_USE_FILE})

add_subdirectory(${APPLICATION_LIBRARY})
include_directories(${APPLICATION_LIBRARY})

# Define a variable containing a list of source files for the project
set(SOURCE_FILES main.cpp AquariumApp.cpp AquariumApp.h
        pch.h)

add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${SOURCE_FILES})

# Link required libraries to the executable
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES} ${APPLICATION_LIBRARY})
target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/images/
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/images/)
message(STATUS "CMake version: ${CMAKE_VERSION}")


# Band-aid solution to fix the CMake compatibility version error..
# This is because the CMake version for the tests is "too old" for CMake 4.x.x to be compatible with
set(CMAKE_POLICY_VERSION_MINIMUM 3.5)
add_subdirectory(Tests)
