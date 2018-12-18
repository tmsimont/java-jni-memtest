export LD_PRELOAD=/path/to/libjemalloc.so
# set prof_prefix if you want to control where your jemalloc profiler output goes
export MALLOC_CONF=prof_active:true,prof:true,prof_final:true,prof_leak:true
java -XX:NativeMemoryTracking=summary -Djava.library.path=. CLI
