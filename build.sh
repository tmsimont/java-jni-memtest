JAVA_HOME=/System/Library/Frameworks/JavaVM.framework/Versions/Current/Headers/
gcc -fPIC -I"$JAVA_HOME" -I"$JAVA_HOME" -shared -o libeat.dylib MemoryEater.cxx NativeMemoryEater.cxx -lstdc++
javac *.java
