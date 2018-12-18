export LD_PRELOAD=/usr/local/lib/libjemalloc.so
#export MALLOC_CONF=prof_active:true,prof:true,lg_prof_interval:29,lg_prof_sample:17,prof_prefix:/home/trevsim/working/jni/memtest/jmem/jeprof,prof_final:true,prof_leak:true
export MALLOC_CONF=prof_active:true,prof:true,prof_prefix:/home/trevsim/working/jni/memtest/jmem/jeprof,prof_final:true,prof_leak:true
java -XX:NativeMemoryTracking=summary -Djava.library.path=. CLI
