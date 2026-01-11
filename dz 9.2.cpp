#include <iostream>

using namespace std;

void increase(int &x) {
    x = x + 10; 
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    increase(number);

    cout << "Новое значение: " << number << endl;

    return 0;
}