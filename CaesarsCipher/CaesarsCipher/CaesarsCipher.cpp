#include "CaesarsCipher.h"
#include <iostream>
using std::cout;
using std::endl;

CaesarsCipher::CaesarsCipher(int argc, char* argv[]) {
  if (argc == 1) {
    succes = false;
    throw "Arguments needed!";
  }
  else if (argc > 6) {
    throw "Too much arguments!";
  }
  handler = new ArgumentHandler(argc, argv);
  manager = new FileOperator(handler->inputPath, handler->outputPath);
  coder = new Decrypter(handler->shift);
  coder->text = manager->readfromfile();
  manager->outText = coder->justDoIt();
  manager->writetoFile();
  succes = true;
}

CaesarsCipher::~CaesarsCipher() {
  if (succes) {
    delete handler;
    delete manager;
    delete coder;
  }
}
