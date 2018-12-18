# JAVA_HOME=/PATH/TO/JAVA/HOME
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libeat.so MemoryEater.cxx NativeMemoryEater.cxx -lstdc++
javac *.java
