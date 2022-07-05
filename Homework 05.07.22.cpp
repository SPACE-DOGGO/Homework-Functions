#include <iostream>
#include <windows.h>
using namespace std;


// Задание № 1

//void SetCursor(int x, int y, int color)
//{
//    COORD pos = {x, y};
//    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleCursorPosition(output, pos);
//
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//
//    string type;
//    cin >> type;
//}
//
//int main()
//{
//    setlocale(0, "UKR");
//
//    cout << "Введите координату x: ";
//    int x;
//    cin >> x;
//
//    cout << "\nВведите координату y: ";
//    int y;
//    cin >> y;
//
//    cout << "\nУкажите номер цвета: ";
//    int color;
//    cin >> color;
//
//    SetCursor(x, y, color);
//}


// Задание № 2

//void Cube (int num)
//{
//    cout << "\n" << pow(num, 3) << endl;
//}
//
//int main()
//{
//    setlocale(0, "UKR");
//
//    cout << "Введите число: ";
//    int num;
//    cin >> num;
//
//    Cube(num);
//}


// Задание № 3

bool IsPrime (int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "\nЧисло не является простым.\n";
            return false;
        }
    }

    cout << "\nЧисло является простым.\n";
    return true;
}

int main()
{
    setlocale(0, "UKR");

    cout << "Введите число: ";
    int num;
    cin >> num;

    IsPrime(num);
}
