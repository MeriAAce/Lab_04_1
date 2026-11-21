// Lab_04_1.cpp
// Ацедонська Марія Зорянівна
// Лабораторна робота № 4.1
// Цикли.
// Варіант 15

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;         // верхня межа добутку
    long long k;   // лічильник циклу
    double N2;     // квадрат числа N
    double k2;     // квадрат числа k
    double P;      // добуток

    cout << "N = ";
    if (!(cin >> N) || N < 1)
    {
        cout << "Error: invalid N!" << endl;
        return 1;
    }

    N2 = 1.0 * N * N;

    // 1. Цикл з передумовою while
    P = 1;
    k = 1;
    while (k <= N)
    {
        k2 = 1.0 * k * k;
        P *= (k2 / N2) * cos(N2 / k2);
        k++;
    }
    cout << "while: P = " << P << endl;

    // 2. Цикл з післяумовою do...while
    P = 1;
    k = 1;
    do
    {
        k2 = 1.0 * k * k;
        P *= (k2 / N2) * cos(N2 / k2);
        k++;
    } while (k <= N);
    cout << "do...while: P = " << P << endl;

    // 3. Цикл for зі збільшенням лічильника
    P = 1;
    for (k = 1; k <= N; k++)
    {
        k2 = 1.0 * k * k;
        P *= (k2 / N2) * cos(N2 / k2);
    }
    cout << "for (k++): P = " << P << endl;

    // 4. Цикл for зі зменшенням лічильника
    P = 1;
    for (k = N; k >= 1; k--)
    {
        k2 = 1.0 * k * k;
        P *= (k2 / N2) * cos(N2 / k2);
    }
    cout << "for (k--): P = " << P << endl;

    cin.get();
    return 0;
}