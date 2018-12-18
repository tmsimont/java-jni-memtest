**requirements**
 * tested only on linux
 * have jemalloc installed (see https://gist.github.com/thomasdarimont/79b3cef01e5786210309) or (https://gdstechnology.blog.gov.uk/2015/12/11/using-jemalloc-to-get-to-the-bottom-of-a-memory-leak/)
 

**usage**:
 1. edit the build.sh to set a valid `JAVA_HOME`
 2. edit the run.sh to point to your jemalloc lib, and to configure other jemalloc params
 3. `chmod +x build.sh` and `chmod +x run.sh`
 4. `./build.sh` and `./run.sh`
