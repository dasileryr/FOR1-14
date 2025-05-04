//Даны два целых числа A и B (A < B). Вывести в порядке возрастания все
//целые числа, расположенные между A и B(включая сами числа A и B), а также количество N этих чисел.
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

        for (int i = A; i <= B; i++) {
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