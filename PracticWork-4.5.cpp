#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Проверяем делится ли X на Y без остатка\n";
    cout << "Введите X: ";
    cin >> x;
    cout << "Введите Y: ";
    cin >> y;
    cout << "----Проверяем----\n";
    if (0 == x % y) {
        cout << "Да, " << x << " делится на " << y << " без остатка.\n";
    }
    else {
        cout << "Нет, " << x << " не делится на " << y << " без остатка.\n";
    }
    return 0;
}
