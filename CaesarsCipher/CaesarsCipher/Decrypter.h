#pragma once

#include <string>

using std::string;

class Decrypter {
public:
  string text;
  int shift;
public:
  Decrypter(int);
  string justDoIt();
  ~Decrypter();
};

