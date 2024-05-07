#include <iostream>
using namespace std;

#ifndef FUNCTION_H
#define FUNCTION_H

//#define INTEGER
//#define DOUBLE
//#define CHAR

#ifdef INTEGER
#define fillArray FillArrayInt
#define show ShowInt
#define findMin FindMinInt
#define findMax FindMaxInt
#define sortArray SortArrayInt
#define editValue EditValueInt
#endif

#ifdef DOUBLE
#define fillArray FillArrayDouble
#define show ShowDouble
#define findMin FindMinDouble
#define findMax FindMaxDouble
#define sortArray SortArrayDouble
#define editValue EditValueDouble
#endif

#ifdef CHAR
#define fillArray FillArrayChar
#define show ShowChar
#define findMin FindMinChar
#define findMax FindMaxChar
#define sortArray SortArrayChar
#define editValue EditValueChar
#endif

#ifdef INTEGER
void FillArrayInt(int array[], int size);
void ShowInt(int array[], int size);
int FindMinInt(int array[], int size);
int FindMaxInt(int array[], int size);
void SortArrayInt(int array[], int size);
void EditValueInt(int array[], int size, int index, int newValue);
#endif

#ifdef DOUBLE
void FillArrayDouble(double array[], int size);
void ShowDouble(double array[], int size);
double FindMinDouble(double array[], int size);
double FindMaxDouble(double array[], int size);
void SortArrayDouble(double array[], int size);
void EditValueDouble(double array[], int size, int index, double newValue);
#endif

#ifdef CHAR
void FillArrayChar(char array[], int size);
void ShowChar(char array[], int size);
char FindMinChar(char array[], int size);
char FindMaxChar(char array[], int size);
void SortArrayChar(char array[], int size);
void EditValueChar(char array[], int size, int index, char newValue);
#endif

#endif