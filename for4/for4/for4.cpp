//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1,
//2, …, 10 кг конфет.
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);      

    double price;
    cout << "Введите цену 1 кг конфет: ";
    cin >> price;

    for (int i = 1; i <= 10; i++) {
        cout << "Стоимость " << i << " кг конфет: " << price * i << " руб." << endl;
    }

    return 0;
}