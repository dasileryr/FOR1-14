//Дано целое число N (> 0). Найти квадрат данного числа, используя для
//его вычисления следующую формулу :
//N 2 = 1 + 3 + 5 + … + (2·N – 1).После добавления к сумме каждого слагаемого выводить текущее значение суммы(в результате будут выведены квадраты всех целых чисел от 1 до N).
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
        for (int i = 1; i <= N; i++) {
            sum += 2 * i - 1;
            cout << "Квадрат числа " << i << " = " << sum << endl;
        }
    }
    else {
        cout << "Ошибка: N должно быть больше 0" << endl;
    }

    return 0;
}