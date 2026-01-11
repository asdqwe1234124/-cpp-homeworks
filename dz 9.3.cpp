#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {  
        return 1;
    } else {   
        return n * factorial(n - 1);
    }
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    if (number < 0) {
        cout << "Факториал отрицательного числа не определен." << endl;
    } else {
        
        int result = factorial(number);
        cout << "Факториал: " << result << endl;
    }

    return 0;
}