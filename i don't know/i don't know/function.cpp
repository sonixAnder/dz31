#include "function.h"
#include <iostream>
#include <cstdlib>

void FillArrayInt(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
    }
}

void ShowInt(int array[], int size)
{
    cout << "Элементы: |";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "|";
    }
    cout << endl;
}

int FindMinInt(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int FindMaxInt(int array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void SortArrayInt(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void EditValueInt(int array[], int size, int index, int newValue)
{
    if (index >= 0 && index < size)
    {
        array[index] = newValue;
    }
}


void FillArrayDouble(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
    }
}

void ShowDouble(double array[], int size)
{
    cout << "Элементы: |";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "|";
    }
    cout << endl;
}

double FindMinDouble(double array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

double FindMaxDouble(double array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void SortArrayDouble(double array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void EditValueDouble(double array[], int size, int index, double newValue)
{
    if (index >= 0 && index < size)
    {
        array[index] = newValue;
    }
}


void FillArrayChar(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
    }
}

void ShowChar(char array[], int size)
{
    cout << "Элементы: |";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "|";
    }
    cout << endl;
}

char FindMinChar(char array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

char FindMaxChar(char array[], int size)
{
    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void SortArrayChar(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void EditValueChar(char array[], int size, int index, char newValue)
{
    if (index >= 0 && index < size)
    {
        array[index] = newValue;
    }
}
