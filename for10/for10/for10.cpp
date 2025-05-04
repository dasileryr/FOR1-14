//Дано целое число N (> 0). Найти сумму
//1 + 1 / 2 + 1 / 3 + … + 1 / N
//(вещественное число).
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
        for (int i = 1; i <= N; i++) {
            sum += 1.0 / i;
        }
        cout << "Сумма 1 + 1/2 + 1/3 + ... + 1/" << N << " = " << sum << endl;
    }
    else {
        cout << "Ошибка: N должно быть больше 0" << endl;
    }

    return 0;
}