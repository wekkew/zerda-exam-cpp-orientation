#include "CaesarsCipher.h"



CaesarsCipher::CaesarsCipher() {
  handler = new ArgumentHandler();
  manager = new FileOperator();
  coder = new Decrypter();
}


CaesarsCipher::~CaesarsCipher() {
  delete handler;
  delete manager;
  delete coder;
}
