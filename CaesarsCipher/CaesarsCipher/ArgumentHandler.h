#pragma once

#include <string>

using std::string;

class ArgumentHandler {
public:
  int argCount;
  char** arguments;
  string inputPath;
  int shift;
  string outputPath;
public:
  ArgumentHandler(int argc, char* argv[]);
  void argSorter();
  ~ArgumentHandler();
private:
  bool isPathValid(string);
  void firstArgHandler(string);
  void flagHandler(string, int);
  void setShift(string);
};

