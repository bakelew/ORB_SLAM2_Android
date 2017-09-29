cmake_minimum_required(VERSION 3.4.1)
project(native-lib)

# Find OpenCV
set( OpenCV_DIR src/main/cpp/OpenCV/jni )
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

# Add ORB_SLAM2
add_subdirectory( src/main/cpp/ORB_SLAM2 )

add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.cpp )


target_link_libraries( # Specifies the target library.
                       native-lib

                       ${OpenCV_LIBS}
                       ORB_SLAM2
                       )