include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    const int size = 5;
    int array[size] = { 12, -432, 2, 543, -4 };
    int sum = 0;
    int otr = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += array[i];
    }
    cout << "Сумма значений массива: " << sum << endl;
    int srz = sum / size;
    cout << "Среднее значение массива: " << srz << endl;
    cout << "Положительные значения массива:" << endl;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] > 0)
        {
            cout << array[i] << endl;
        }
    }
    cout << "Отрицательные значения массива:" << endl;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] < 0)
        {
            cout << array[i] << endl;
        }
    }
    cout << "Чётные числа массива:" << endl;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << endl;
        }
    }
    cout << "Нечётные числа массива:" << endl;
    for (int i = 0; i < size; ++i)
    {
        if (array[i] % 2 != 0)
        {
            cout << array[i] << endl;
        }
    }
}
