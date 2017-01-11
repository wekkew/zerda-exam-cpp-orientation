#include "FileOperator.h"


FileOperator::FileOperator(string inputPath, string outputPath) {
  this->inPath = inputPath;
  this->outPath = outputPath;
  readfromfile();
}

void FileOperator::readfromfile() {
  ifstream inputText;
  inputText.open(inPath.c_str());
  string currentLine;
  while (getline(inputText, currentLine)) {
    inText += currentLine + "\n";
  }
  inputText.close();
}

void FileOperator::writetoFile() {
  ofstream outputText;
  outputText.open(outPath.c_str());
  outputText << this->outText;
  outputText.close();
}

FileOperator::~FileOperator() {
  writetoFile();
}
