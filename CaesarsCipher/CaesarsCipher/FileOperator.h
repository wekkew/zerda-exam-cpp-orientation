#pragma once

#include <string>
#include <fstream>

using std::string;
using std::ifstream;
using std::ofstream;
using std::getline;

class FileOperator {
public:
  string inText;
  string outText;
  string inPath;
  string outPath;
public:
  FileOperator(string, string);
  ~FileOperator();
private:
  void readfromfile();
  void writetoFile();
};

