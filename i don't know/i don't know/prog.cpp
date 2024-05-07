#include "function.h"

//#define INTEGER

int main()
{
    setlocale(LC_ALL, "ru");
#ifdef INTEGER
    const int size = 5;
    int intArray[size];

    fillArray(intArray, size);
    show(intArray, size);

    int min = findMin(intArray, size);
    int max = findMax(intArray, size);
    cout << "Минимальное значение: " << min << endl;
    cout << "Максимальное значение: " << max << endl;

    sortArray(intArray, size);
    show(intArray, size);

    editValue(intArray, size, 2, 50);
    show(intArray, size);
#endif // INT

#ifdef DOUBLE
    const int size = 5;
    double doubleArray[size];

    fillArray(doubleArray, size);
    show(doubleArray, size);

    int min = findMin(doubleArray, size);
    int max = findMax(doubleArray, size);
    cout << "Минимальное значение: " << min << endl;
    cout << "Максимальное значение: " << max << endl;

    sortArray(doubleArray, size);
    show(doubleArray, size);

    editValue(doubleArray, size, 2, 50);
    show(doubleArray, size);
#endif // DOUBLE

#ifdef CHAR
    const int size = 5;
    char charArray[size];

    fillArray(charArray, size);
    show(charArray, size);

    int min = findMin(charArray, size);
    int max = findMax(charArray, size);
    cout << "Минимальное значение: " << min << endl;
    cout << "Максимальное значение: " << max << endl;

    sortArray(charArray, size);
    show(charArray, size);

    editValue(charArray, size, 2, 50);
    show(charArray, size);
#endif // CHAR
    return 0;
}