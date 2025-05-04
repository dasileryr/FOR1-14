//Даны два целых числа A и B (A < B). Вывести в порядке убывания все целые числа, расположенные между A и B (не включая числа A и B), а также количество N этих чисел.
#include <iostream>
#include <windows.h> 
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);   

    int A, B, N = 0;
    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B: ";
    cin >> B;

    if (A < B) {
      
        for (int i = B - 1; i > A; i--) {
            cout << i << " ";
            N++;
        }
        cout << endl;
        cout << "Количество чисел: " << N << endl;
    }
    else {
        cout << "Ошибка: A должно быть меньше B" << endl;
    }

    return 0;
}