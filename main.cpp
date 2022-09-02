#include "file.h"
#include "stream.h"

int main(int argc, char**argv) {
  uint32_t a = readByte(argv[1]);
  
  uint32_t b = readByte(argv[2]);
  uint32_t c = a + b;

  
  printUin32t(a);
  printf(" + ");
  printUin32t(b);
  printf(" = ");
  printUin32t(c);
  printf("\n");

  return 0;
}
