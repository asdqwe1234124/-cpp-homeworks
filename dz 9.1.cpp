#include <iostream>

using namespace std;

int square(int x) {
    return x * x;
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;
    
    int result = square(number);
    cout << "Квадрат: " << result << endl;

    return 0;
}