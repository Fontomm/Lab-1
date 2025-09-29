#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d, y;

    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть c: ";
    cin >> c;
    cout << "Введіть d: ";
    cin >> d;

    if (d == 0 || (b+a) == 0)
        cout << "Помилка: ділення на нуль!" << endl;
    else
        y = (a * (c-d)) / (d * d) - (a/(b + a));
        cout << "Результат: y = " << y << endl;
}
