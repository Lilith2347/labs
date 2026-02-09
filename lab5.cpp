#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a = 0.1, b = 1.0, h = 0.1;
    int n = 10;

    cout << "x\t\tY(x)\t\tS(x)\t\t|Y-S|\n";
    cout << "------------------------------------------------\n";

    for (double x = a; x <= b + 1e-9; x += h) { 
        double y = (x * x / 4.0 + x / 2.0 + 1.0) * exp(x / 2.0);
        double s = 0.0;
        for (int k = 0; k <= n; k++) {
            double fact = 1.0;
            for (int i = 1; i <= k; i++) {
                fact *= i;
            }
            double pow_term = 1.0;
            for (int i = 0; i < k; i++) {
                pow_term *= (x / 2.0);
            }
            s += (k * k + 1.0) / fact * pow_term;
        }

        double diff = fabs(y - s);

        cout << x << "\t" << y << "\t" << s << "\t" << diff << "\n";
    }

    return 0;
}