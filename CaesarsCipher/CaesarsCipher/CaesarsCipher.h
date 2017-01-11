#pragma once

#include "ArgumentHandler.h"
#include "FileOperator.h"
#include "Decrypter.h"

class CaesarsCipher {
public:
  ArgumentHandler* handler;
  FileOperator* manager;
  Decrypter* coder;
public:
  CaesarsCipher();
  ~CaesarsCipher();
};

