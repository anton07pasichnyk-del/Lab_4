#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;
int main() {
    system("chcp 65001 > nul");
    double a, b, h;
    cout << "=== Завдання 3 (Варіант 16) ===" << endl;
    cout << "Таблиця значень функції Y = x^3 + 2ln|x| + 3" << endl;
    cout << "Введіть початок діапазону a: ";
    cin >> a;
    cout << "Введіть кінець діапазону b: ";
    cin >> b;
    cout << "Введіть крок h: ";
    cin >> h;
    if (h <= 0 || a > b) {
        cout << "Помилка: має виконуватися a <= b та h > 0!" << endl;
        return 1;
    }
    int n = (int)floor((b - a) / h + 1e-9);
    cout << "+-----+------------+----------------+" << endl;
    cout << "|  №  |     x      |       Y        |" << endl;
    cout << "+-----+------------+----------------+" << endl;
    int i = 0;
    while (i <= n) {
        double x = a + i * h;
        if (fabs(x) < 1e-9) x = 0;
        cout << "| " << setw(3) << i + 1 << " | "
             << setw(10) << fixed << setprecision(3) << x << " | ";
        if (x == 0) {
            cout << "  не визначено |" << endl;
        }
        else {
            double y = pow(x, 3) + 2 * log(fabs(x)) + 3;
            cout << setw(14) << setprecision(4) << y << " |" << endl;
        }
        i++;
    }
    cout << "+-----+------------+----------------+" << endl;
    return 0;
}
