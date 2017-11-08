Android port of ORB_SLAM2 forked from original repository.

All example code is removed, and all references to graphical things, such as the pangolin map viewer are removed. This project compiles the core ORB_SLAM2 code into an android native library, and nothing else. I could not get it to compile properly with all android architecture types, so the native library is compiled to armeabi-v7a architecture only.

To use, clone the project, and open it with Android Studio (2.3.3). Copy/place your OpenCV for Android (3.3.0) sdk directory into ORB_SLAM2_Android/ORB_SLAM2_Android_App/app/src/main/, refresh linked c++ projects, and build.
