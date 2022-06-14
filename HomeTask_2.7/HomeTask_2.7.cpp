#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int a, b;
    cout << "Введите число: \n";
    cin >> a;
    for (int i = a - 1; i > 0; i--) {
        b = i;
        if (a % (b * b) == 0 && a % (b * b * b) != 0) {
            cout << b << endl;
        }
    }
}

