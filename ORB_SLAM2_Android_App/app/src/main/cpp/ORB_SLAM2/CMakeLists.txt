cmake_minimum_required(VERSION 2.8)
project(ORB_SLAM2)

# Find OpenCV
set( OpenCV_DIR ../../sdk/native/jni )
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

# Locate Eigen3
set(EIGEN3_INCLUDE_DIR Thirdparty/eigen3)

add_subdirectory( Thirdparty/g2o )
add_subdirectory( Thirdparty/DBoW2 )

include_directories(
${PROJECT_SOURCE_DIR}
${PROJECT_SOURCE_DIR}/include
${EIGEN3_INCLUDE_DIR}
)

add_library(${PROJECT_NAME} SHARED
src/System.cc
src/Tracking.cc
src/LocalMapping.cc
src/LoopClosing.cc
src/ORBextractor.cc
src/ORBmatcher.cc
src/FrameDrawer.cc
src/Converter.cc
src/MapPoint.cc
src/KeyFrame.cc
src/Map.cc
# src/MapDrawer.cc
src/Optimizer.cc
src/PnPsolver.cc
src/Frame.cc
src/KeyFrameDatabase.cc
src/Sim3Solver.cc
src/Initializer.cc
# src/Viewer.cc
)

target_link_libraries(${PROJECT_NAME}

                    ${OpenCV_LIBS}
                    DBoW2
                    g2o
)

