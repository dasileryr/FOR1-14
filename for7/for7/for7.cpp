//Даны два целых числа A и B (A < B). Найти сумму всех целых чисел от A
//до B включительно.
#include <iostream>
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
        long long sum = 0; 
        for (int i = A; i <= B; i++) {
            sum += i;
        }
        cout << "Сумма чисел от " << A << " до " << B << ": " << sum << endl;
    }
    else {
        cout << "Ошибка: A должно быть меньше B" << endl;
    }

    return 8;
}