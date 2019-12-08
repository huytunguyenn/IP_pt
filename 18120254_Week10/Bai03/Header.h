#ifndef _HEADER_H_
#define _HEADER_H_
#define MAX 100
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void ReadTextFile(string file, int a[], int &n);
void WriteTextFile(string file, int a[], int n);
void Sort(int a[], int n);
#endif
