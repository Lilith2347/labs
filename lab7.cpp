#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    char a[1000];
    cout << "введите строку: ";
    cin.getline(a, 1000);
    int co = 0, cc = 0, fo = 0, fc = 0, so = 0, sc = 0;
    int i = 0;
    while (a[i] != '\0') {
        switch (a[i]) {
        case '(':
            co++;
            break;
        case ')':
            cc++;
            break;
        case '{':
            fo++;
            break;
        case '}':
            fc++;
            break;
        case '[':
            so++;
            break;
        case ']':
            sc++;
            break;
        }
        i++;
    }
    cout << "кол-во круглых скобок:" << "\n открывающие - " << co << "\n закрывающие - " << cc << endl;
    cout << "кол-во фигурных скобок:" << "\n открывающие - " << fo << "\n закрывающие - " << fc << endl;
    cout << "кол-во квадратных скобок:" << "\n открывающие - " << so << "\n закрывающие - " << sc << endl;
    cout << "Нажмите любую кнопку...";
    return 0;
}
