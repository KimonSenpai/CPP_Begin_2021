#include <iostream> //подключение библиотеки
using namespace std; //magic


int main()
{
    double v; //создание переменной
    const double g = 9.81; //создание константы

    cout << "Input v>>";
    cin >> v;
    double T = 2*v/g;
    double h = v*v/2/g;

    cout << "T = " << T << "\nh = " << h << '\n'; //\n - переход на следующую строку
    /*
    * "" - строка
    * '' - символ
    */
}

