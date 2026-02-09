#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    double a, b, h;
    int n;
    setlocale(LC_ALL, "russian");
    cout << "Введите начальное значение a: ";
    while (!(cin >> a)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Введите конечное значение b: ";
    while (!(cin >> b)) {
        cout << "Ошибка! Введите число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while (a >= b) {
        cout << "Ошибка! a должно быть меньше b. Введите a и b снова.\n";
        cout << "Введите начальное значение a: ";
        while (!(cin >> a)) {
            cout << "Ошибка! Введите число: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cout << "Введите конечное значение b: ";
        while (!(cin >> b)) {
            cout << "Ошибка! Введите число: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    cout << "Введите шаг h: ";
    while (!(cin >> h) || h <= 0) {
        cout << "Ошибка! Шаг должен быть положительным числом: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Введите количество членов ряда n: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Ошибка! n должно быть положительным целым числом: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "\nТаблица значений:\n";
    cout << setw(10) << "x"
        << setw(15) << "Y(x)"
        << setw(15) << "S(x)"
        << setw(20) << "|Y(x)-S(x)|" << endl;
    cout << string(60, '-') << endl;

    cout << fixed << setprecision(6);

    for (double x = a; x <= b + 1e-9; x += h) {
        double Y = exp(x);
        double S = 0.0;
        double term = 1.0;

        for (int i = 0; i <= n; i++) {
            S += term;
            if (i < n) {
                term *= x / (i + 1);
            }
        }

        double diff = fabs(Y - S);

        cout << setw(10) << x
            << setw(15) << Y
            << setw(15) << S
            << setw(20) << diff << endl;
    }
    return 0;
}