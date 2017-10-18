cmake_minimum_required(VERSION 3.4.1)

# Find OpenCV
set( OpenCV_DIR src/main/sdk/native/jni )
find_package(OpenCV REQUIRED)

# Add ORB_SLAM2
add_subdirectory( src/main/cpp/ORB_SLAM2 )
set( ORB_SLAM2_INCLUDE_DIR src/main/cpp/ORB_SLAM2/include )

# Find Eigen3
SET(EIGEN3_INCLUDE_DIR "src/main/cpp/ORB_SLAM2/Thirdparty/eigen3")

add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.cpp )

# Include libraries
include_directories(
             ${EIGEN3_INCLUDE_DIR}
             ${OpenCV_INCLUDE_DIRS}
             ${ORB_SLAM2_INCLUDE_DIR} )

target_link_libraries( # Specifies the target library.
                       native-lib

                       ${OpenCV_LIBS}
                       ORB_SLAM2
                       )