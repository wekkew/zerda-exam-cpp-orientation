#include "CaesarsCipher.h"

CaesarsCipher::CaesarsCipher(int argc, char* argv[]) {
  if (argc == 1) {
    succes = false;
    throw "Arguments needed!";
  }
  else if (argc > 5) {
    throw "Too much arguments!";
  }
  handler = new ArgumentHandler(argc, argv);
  manager = new FileOperator();
  coder = new Decrypter();
  succes = true;
}

CaesarsCipher::~CaesarsCipher() {
  if (succes) {
    delete handler;
    delete manager;
    delete coder;
  }
}
