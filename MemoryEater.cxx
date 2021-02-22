#include "MemoryEater.h"

#include <stdio.h>
#include <stdlib.h>

namespace memtest {
  /**
   * Allocate an array that can point to 64 gigs.
   */
  MemoryEater::MemoryEater() {
    this->ptrs = new int*[64];
    this->eaten = 0;
  }

  /**
   * Free memory on delete.
   */
  MemoryEater::~MemoryEater() {
    for (int i = 0; i < 64; ++i) {
      free(this->ptrs[i]);
    }
    delete[] this->ptrs;
  }

  /**
   * Consume a gig of memory.
   */
  void MemoryEater::eat() {
    unsigned long n = 268435456;
    this->ptrs[this->eaten] = (int*)malloc(n*sizeof(int));
    if (this->ptrs[this->eaten]==NULL){
      printf("ERROR!Memory not allocated!");
      exit(0);
    }
    //printf("Filling int into memory.....\n");
    /*
    for (unsigned long i = 0; i < n; i++){
      this->ptrs[this->eaten][i] = 1;
    }
    */
    this->eaten++;
  }

  /**
   * Free one of the gigs that have been eaten.
   */
  void MemoryEater::uneat() {
    if (this->eaten > 0) {
      free(this->ptrs[this->eaten]);
      this->eaten--;
    }
  }
}
