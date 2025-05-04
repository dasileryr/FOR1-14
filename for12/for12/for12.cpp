//Дано целое число N (> 0). Найти произведение
//1.1 · 1.2 · 1.3 · …
//(N сомножителей).
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
        double product = 1.0; 
        for (int i = 0; i < N; i++) {
            product *= (1.0 + i * 0.1); 
        }
        cout << "Произведение 1.0 * 1.1 * 1.2 * ... (" << N << " сомножителей) = " << product << endl;
    }
    else {
        cout << "Ошибка: N должно быть больше 0" << endl;
    }

    return 0;
}