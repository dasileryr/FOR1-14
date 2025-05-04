//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 1.2,
//1.4, …, 2 кг конфет.
#include <iostream>
#include <iomanip> 
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);      

    double price;
    cout << "Введите цену 1 кг конфет: ";
    cin >> price;

    for (double weight = 1.2; weight <= 2.0; weight += 0.2) {
        cout << fixed << setprecision(2); 
        cout << "Стоимость " << weight << " кг конфет: " << price * weight << " руб." << endl;
    }

    return 0;
}