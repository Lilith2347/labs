#include <iostream>    
#include <cstdlib>
#include <ctime>       
#include <climits>  
#include <locale.h>
using namespace std;
int main() {
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива n: ";
    cin >> n;
    int* a = new int[n];
    int choice;
    cout << "Как вводить элементы массива?\n";
    cout << "1 - Вручную с клавиатуры\n";
    cout << "2 - Автоматически (случайные числа от -100 до 100)\n";
    cout << "Ваш выбор: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Введите " << n << " целых чисел:\n";
        for (int i = 0; i < n; i++) {
            cout << "a[" << i << "] = ";
            cin >> a[i];
        }
    }
    else 
        if (choice == 2) {
        cout << "Сгенерированный массив:\n";
        for (int i = 0; i < n; i++) {
            a[i] = rand() % 201 - 100;
            cout << "a[" << i << "] = " << a[i] << endl;
        }
    }
        else {
        cout << "Неверный выбор. Будут использованы случайные числа.\n";
        for (int i = 0; i < n; i++) {
            a[i] = rand() % 201 - 100;
            cout << "a[" << i << "] = " << a[i] << endl;
        }
    }
    int min_znach = a[0];   
    int min_poz = 0;        

    for (int i = 1; i < n; i++) { 
        if (a[i] < min_znach) {
            min_znach = a[i];    
            min_poz = i;         
        }
    }
    cout << "\nМинимальный элемент: " << min_znach << " на позиции " << min_poz << endl;
    int sum = 0;
    for (int i = min_poz + 1; i < n; i++) {
        sum += a[i];
    }
    cout << "Сумма элементов после минимального: " << sum << endl;
    delete[] a;
    return 0;
}