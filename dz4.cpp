#include <iostream>
using namespace std;

int main() {
    double n;
    
    cout << "Введите число: ";
    cin >> n;
    
    cout << "Как double: " << n << endl;
    
    cout << "Как int: " << static_cast<int>(n) << endl;
    
    cout << "Число не равно 0? " << boolalpha << static_cast<bool>(n) << endl;
    
    return 0;
}