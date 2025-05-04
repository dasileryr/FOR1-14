//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
//0.2, …, 1 кг конфет.
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);      

    double price;
    cout << "Введите цену 1 кг конфет: ";
    cin >> price;

    for (double weight = 0.1; weight <= 1.0; weight += 0.1) {
        cout << "Стоимость " << weight << " кг конфет: " << price * weight << " руб." << endl;
    }

    return 0;
}