# Summary
Android port of ORB_SLAM2 forked from original repository.

All example code is removed, and all references to graphical things, such as the pangolin map viewer are removed. This project compiles the core ORB_SLAM2 code into an android native library, and nothing else. I could not get it to compile properly with all android architecture types, so the native library is compiled to armeabi-v7a architecture only.

# Building
1. Install Android Studio (any version, probably, but tested only on 2.3.3)
2. Install the CMake and NDK addons through Android Studio SDK Manager
3. Clone project
4. Open Android Studio project "ORB_SLAM2_Android"
5. Download OpenCV Android SDK (https://opencv.org/releases.html, tested with 3.4.3)
6. Copy the "sdk" folder from Android SDK zip into ORB_SLAM2_Android/ORB_SLAM2_Android_App/app/src/main
7. In Android Studio, Build -> Refresh Linked C++ Projects
8. Then, Build -> Make Project
9. Running the app should just display "Hello from C++" on the screen
