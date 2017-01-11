#include "ArgumentHandler.h"
#include <cmath>
#include <iostream>

ArgumentHandler::ArgumentHandler(int argc, char* argv[]) {
  this->argCount = argc;
  this->arguments = argv;
  argSorter();
}

void ArgumentHandler::argSorter() {
  firstArgHandler(arguments[1]);
  flagHandler(arguments[2], 2);
  flagHandler(arguments[4], 4);
}

void ArgumentHandler::firstArgHandler(string firstArg) {
  if (isPathValid(firstArg)) {
    inputPath = firstArg;
  }
  else {
    throw "Input path is invalid\nuse \".txt!\"";
  }
}

bool ArgumentHandler::isPathValid(string path) {
  if (path.substr(path.length() - 4) == ".txt") {
    return true;
  }
  return false;
}

void ArgumentHandler::flagHandler(string flag, int index) {
  if (flag[0] == '-') {
    switch (flag[1]) {
    case 'o':
      if (isPathValid(arguments[index+1])) {
        outputPath = arguments[index+1];
      }
      break;
    case 's':
      setShift(arguments[index+1]);
      break;
    }
  }
  else {
    throw "you should enter a \"-o/-s\" flag";
  }
}

void ArgumentHandler::setShift(string argShift) {
  int shiftValue = 0;
  int length = argShift.length();
  bool negative = false;
  if (argShift[0] == '-') {
    length--;
    negative = true;
  }
  if (negative) {
    for (int i = 0; i < length; i++) {
      shiftValue += (argShift[length - i] - '0') * pow(10, i);
    }
    shift = shiftValue * -1;
  }
  else {
    for (int i = 0; i < length; i++) {
      shiftValue += (argShift[length - i -1] - '0') * pow(10, i);
    }
    shift = shiftValue;
  }
}

ArgumentHandler::~ArgumentHandler() {
  /*
  for (int i = 0; i < argCount; i++) {
    delete arguments[i];
  }
  delete arguments;
  */
}
