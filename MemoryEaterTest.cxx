#include "MemoryEater.h"

using namespace memtest;

int main() {
  MemoryEater* eater = new MemoryEater;
  eater->eat();
  eater->uneat();
  delete eater;

  MemoryEater* deleter = new MemoryEater;
  deleter->eat();
  delete deleter;
  return 0;
}
