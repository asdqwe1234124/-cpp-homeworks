#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    
    cout << "До обмена:" << endl;
    cout << "Первое число: " << a << endl;
    cout << "Второе число: " << b << endl;
   
    a = a + b;
    b = a - b; 
    a = a - b;
    
    cout << "После обмена:" << endl;
    cout << "Первое число: " << a << endl;
    cout << "Второе число: " << b << endl;
    
    return 0;
}