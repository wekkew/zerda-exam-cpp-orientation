#include <iostream>
#include <string>
#include "CaesarsCipher.h"

int main(int argc, char* argv[]) {
  try {
    CaesarsCipher cipher(argc, argv);
  }
  catch (const char* error) {
    std::cout << error << std::endl;
  }
  return 0;
}