#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    int A, B;
    cout << "=== Завдання 2 (Варіант 16, умова варіанта 1) ===" << endl;
    cout << "Виведення в порядку зростання всіх цілих чисел між A і B" << endl;
    do {
        cout << "Введіть два цілих числа A і B (A < B): ";
        cin >> A >> B;
        if (cin.fail()) {
            cout << "Помилка: потрібно ввести цілі числа!" << endl;
            return 1;
        }
        if (A >= B)
            cout << "Помилка: A має бути меншим за B. Повторіть введення." << endl;
    } while (A >= B);
    cout << "Числа від " << A << " до " << B << ": ";
    int count = 0;
    for (int i = A; i <= B; i++) {
        cout << i << " ";
        count++;
    }
    cout << endl;
    cout << "Кількість виведених чисел: " << count << endl;
    return 0;
}
