#include <iostream>
#include <cmath>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double x, y, z;
    cout << "Введите x y z: ";
    cin >> x >> y >> z;
    double b = pow(y, cbrt(fabs(x))) + pow(cos(y), 3) * (fabs(x - y) * (1 + pow(sin(z), 2) / sqrt(x + y))) / (exp(fabs(x - y)) + x / 2);
    cout << "b = " << b << endl;
    return 0;
}