#pragma once

#include "ArgumentHandler.h"
#include "FileOperator.h"
#include "Decrypter.h"

class CaesarsCipher {
private:
  ArgumentHandler* handler;
  FileOperator* manager;
  Decrypter* coder;
public:
  CaesarsCipher();
  ~CaesarsCipher();
};

