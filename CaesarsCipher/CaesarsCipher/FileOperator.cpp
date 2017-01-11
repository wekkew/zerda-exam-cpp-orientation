#include "FileOperator.h"


FileOperator::FileOperator(string inputPath, string outputPath) {
  this->inPath = inputPath;
  this->outPath = outputPath;
  readfromfile();
}

string FileOperator::readfromfile() {
  string inText;
  ifstream inputText;
  inputText.open(inPath.c_str());
  string currentLine;
  while (getline(inputText, currentLine)) {
    inText += currentLine + "\n";
  }
  inputText.close();
  return inText;
}

void FileOperator::writetoFile() {
  ofstream outputText;
  outputText.open(outPath.c_str());
  outputText << this->outText;
  outputText.close();
}

FileOperator::~FileOperator() {
  //writetoFile();
}
