#include "file.h"

uint32_t readByte(char* path) {
  FILE *fp = fopen(path, "r");
  uint32_t byte = 0;
  int num = fread(&byte, sizeof(uint32_t), 1, fp);
  byte = htonl(byte);
  fclose(fp);
  return byte;
}
