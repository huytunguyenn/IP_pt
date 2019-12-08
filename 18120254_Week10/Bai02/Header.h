#ifndef _HEADER_H_
#define _HEADER_H_
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int GiaiPTBac2(int a, int b, int c, float& x1, float& x2);
void ReadTextFile(string file, int& a, int& b, int& c);
void WriteTextFile(string file, int a, int b, int c);
#endif
