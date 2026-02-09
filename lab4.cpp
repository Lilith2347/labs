#include <stdio.h>
int main() {
    double x, y, z;
    printf("Введите x, y, z: ");
    if (scanf_s("%lf %lf %lf", &x, &y, &z) != 3) {
        printf("Ошибка ввода\n");
        return 1;
    }
    //без использования доп. переменных
    double m = (
        (
            (
                ((x + y / z) < (x + z / y)
                    ? ((x + y / z) < (y + z / x) ? (x + y / z) : (y + z / x))
                    : ((x + z / y) < (y + z / x) ? (x + z / y) : (y + z / x))
                    ) *
                ((x + y / z) < (x + z / y)
                    ? ((x + y / z) < (y + z / x) ? (x + y / z) : (y + z / x))
                    : ((x + z / y) < (y + z / x) ? (x + z / y) : (y + z / x))
                    )
                ) >
            (
                ((x + y * y) < (x + z * z) ? (x + y * y) : (x + z * z)) *
                ((x + y * y) < (x + z * z) ? (x + y * y) : (x + z * z))
                )
            )
        ?
        (
            ((x + y / z) < (x + z / y)
                ? ((x + y / z) < (y + z / x) ? (x + y / z) : (y + z / x))
                : ((x + z / y) < (y + z / x) ? (x + z / y) : (y + z / x))
                ) *
            ((x + y / z) < (x + z / y)
                ? ((x + y / z) < (y + z / x) ? (x + y / z) : (y + z / x))
                : ((x + z / y) < (y + z / x) ? (x + z / y) : (y + z / x))
                )
            )
        :
        (
            ((x + y * y) < (x + z * z) ? (x + y * y) : (x + z * z)) *
            ((x + y * y) < (x + z * z) ? (x + y * y) : (x + z * z))
            )
        ) /
        (
            ((x * y / z) < (x * z / y)
                ? ((x * y / z) < (z * y / x) ? (x * y / z) : (z * y / x))
                : ((x * z / y) < (z * y / x) ? (x * z / y) : (z * y / x))
                )
            );

    printf("m = %f\n", m);
    return 0;
}