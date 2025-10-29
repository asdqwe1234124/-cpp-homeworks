#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Введите строку: ";
    getline(cin, str);
    
    if (!str.empty()) {
        // Вывод первого символа
        cout << "Первый символ: " << str[0] << endl;
    } else {
        cout << "Строка пустая!" << endl;
    }
    
    return 0;
}