//Даны целые числа K и N (N > 0). Вывести N раз число K.
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251); 
    SetConsoleCP(1251);       

    int K, N;
    cout << "Введите число K: ";
    cin >> K;
    cout << "Введите число N: ";
    cin >> N;

    if (N > 0) {
        for (int i = 0; i < N; i++) {
            cout << K << endl;
        }
    }

    return 0;
}