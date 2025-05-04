//Дано целое число N(> 0).Найти сумму
//N 2 + (N + 1) 2 + (N + 2) 2 + … + (2·N) 2
//(целое число).
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
        long long sum = 0; 
        for (int i = N; i <= 2 * N; i++) {
            sum += (long long)i * i; 
        }
        cout << "Сумма квадратов от " << N << "^2 до (" << 2 * N << ")^2 = " << sum << endl;
    }
    else {
        cout << "Ошибка: N должно быть больше 0" << endl;
    }

    return 0;
}