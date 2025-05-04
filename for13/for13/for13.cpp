//Дано целое число N (> 0). Найти значение выражения
//1.1 – 1.2 + 1.3 – …
//(N слагаемых, знаки чередуются).Условный оператор не использовать.

#include <iostream>
#include <cmath> 
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);     

    int N;
    cout << "Введите целое число N (> 0): ";
    cin >> N;

    if (N > 0) {
        double sum = 0.0; 
        for (int i = 0; i < N; i++) {
            sum += (1.0 + (i + 1) * 0.1) * pow(-1, i); 
        }
        cout << "Сумма 1.1 - 1.2 + 1.3 - ... (" << N << " слагаемых) = " << sum << endl;
    }
    else {
        cout << "Ошибка: N должно быть больше 0" << endl;
    }

    return 0;
}