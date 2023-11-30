#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

void Doit( double x, double y){
    if (x >= -3 && x < -2) {
        y = -2 - x;
        cout << "Функция равна: " << y;
    } else if (x >= -2 && x < -1) {
        y = sqrt(1 - (x + 1) * (x + 1));
        cout << "Функция равна: " << y;
    } else if (x >= -1 && x < 1) {
        y = 1;
        cout << "Функция равна: " << -y;
    } else if (x >= 1 && x < 2) {
        y = -x + 1;
        cout << "Функция равна: " << y;
    } else if (x >= 2 && x <= 5) {
        y = -1;
        cout << "Функция равна: " << y;
    } else {
        cout << "x вне диапазона функции" << endl;
    }
}
int main() {
    double x, y;
    cout << "Введите значение x: ";
    cin >> x;
    Doit(x,y);
    return 0;
}
