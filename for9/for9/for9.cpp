#include <iostream>
#include <cmath> 
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);       

    int A, B;
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;

    if (A < B) {
        double sum = 0; 
        for (int i = A; i <= B; i++) {
            sum += pow(i, 2); 
        }
        cout << "Сумма квадратов чисел от " << A << " до " << B << ": " << sum << endl;
    }
    else {
        cout << "Ошибка: A должно быть меньше B" << endl;
    }

    return 0;
}