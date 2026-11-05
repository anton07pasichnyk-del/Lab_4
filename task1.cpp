#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    int A, B;
    cout << "=== Завдання 1 (Варіант 16) ===" << endl;
    cout << "Перевірка висловлення: «Хоча б одне з чисел A і B непарне»" << endl;
    cout << "Введіть два цілих числа (A, B): ";
    cin >> A >> B;
    bool oddA = (A % 2 != 0);
    bool oddB = (B % 2 != 0);
    if (oddA) cout << "Число A = " << A << " непарне." << endl;
    if (oddB) cout << "Число B = " << B << " непарне." << endl;
    if (oddA || oddB) {
        cout << "Результат: True" << endl;
    }
    else {
        cout << "Обидва числа парні." << endl;
        cout << "Результат: False" << endl;
    }
    return 0;
}
