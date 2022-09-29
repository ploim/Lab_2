// Лабораторная работа 2. Павлюченко Михаил 221-352

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void Task1() {
    int n, k;
    cout << " Введите число: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i <= n; i++) {
        for (k = 0; k <= i; k++) {
            cout << k;
        }
        cout << endl;
    }
}

void Task2() {
    int n, c;
    cout << " Введите целое неотрицательное число: ";
    cin >> n;
    if (n > 0) {
        c = n;
        for (int k = 1; k <= n; ++k) {
            cout << c << endl;
            c *= (n - k);
            c /= (k + 1);
        }
    }
}

void Task3() {
    double summ = 0, a;
    int k = 0;
    cout << " Вводите числа (ноль для запуска программы): " << endl;
    cin >> a;
    while (a != 0) {
        k++;
        summ += a;
        cin >> a;
    }
    cout << summ / k << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    while (true) {
        cout << endl
            << " Задания:" << endl
            << "  1. Числовой треугольник " << endl
            << "  2. Нахождение биномиальных коэффициентов " << endl
            << "  3. Вычисление среднего арифметического введенных точек " << endl
            << "  4. Выход ";

        cout << endl << " Введите номер задания: ";
        cin >> a;
        cout << endl;
        switch (a) {
        case 1: {
            Task1();
            break;
        }
        case 2: {
            Task2();
            break;
        }
        case 3: {
            Task3();
            break;
        }
        default:
            cout << " Выход произведен." << endl;
            return 0;

        }
    }
    return 0;
}