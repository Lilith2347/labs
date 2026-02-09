#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    double a, b, x, h, r, s, y, raz;
    int n, k, f = 1;
    setlocale(LC_ALL, "russian");
    cout << "Введите a,b,h,n";
    while (!(cin >> a >> b >> h >> n)) {           //проверка на дурака1 : пока данные переменные не являются числами, цикл работает
        cout << "\nвведите значения корректно!\n";
        cin.clear();
        cin.ignore(); //очистка неправильно введенных данных 
    }
    if (a >= b) {       //проверка на дурака2
        cout << "\nвведите значения корректно!\n";
        cin.clear();
        cin.ignore();
    }
    for (double x = a; x <= b; x += h) {
        r = s = y = 1;
        for (k = 1; k <= n; k++) {
            f = 1;
            for (int j = 2; j <= k; j++) {
                f = f * j;
            }
            r = (pow(k, 2) + 1) / f * pow((x / 2), k);
            s += r;
        }
        y = (pow(x, 2) / 4 + x / 2 + 1) * exp(x / 2);
        raz = fabs(y - s);
        cout << "\n x= " << x << "   S(x) = " << s << "   Y(x) = " << y << "    |S(x)-Y(x)| = " << raz;
    }
    cout << "\nНажмите любую клавишу ... ";
    return 0;
    //a = 0.1 b = 1.0 h = 0.1 n = 10
}