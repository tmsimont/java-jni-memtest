#pragma once

namespace memtest {
  class MemoryEater {
    public: 
      MemoryEater();
      ~MemoryEater();
      void eat();
      void uneat();
    private:
      int eaten = 0;
      int **ptrs;
  };
}
