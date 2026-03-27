
#include <iostream>
#include <windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int size{ 10 };
    int chislo[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < size; ++i)
    {
        std::cout << chislo[i] << ", ";
    }
}

