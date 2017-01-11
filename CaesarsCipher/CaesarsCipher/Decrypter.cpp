#include "Decrypter.h"
#include <iostream>

using namespace std;

Decrypter::Decrypter(int getShift) {
  shift = getShift;
}

string Decrypter::justDoIt() {
  string changedtext = "";
  for (int i = 0; i < text.length()-1; i++) {
    changedtext += text[i] + shift;
  }
  return changedtext;
}


Decrypter::~Decrypter() {
}
