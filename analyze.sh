#jeprof --show_bytes --gif /apollo/env/JavaSE8/jdk1.8/bin/java jmem/jeprof.* > output.git
jeprof --show_bytes --dot /apollo/env/JavaSE8/jdk1.8/bin/java $1 > output.dot
