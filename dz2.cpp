/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    
    cout << "Введите первое число: ";
    cin >> num1;
    
    cout << "Введите второе число: ";
    cin >> num2;
    
    cout << "Сумма: " << num1 + num2 << endl;
    cout << "Разность: " << num1 - num2 << endl;
    cout << "Произведение: " << num1 * num2 << endl;
    
    return 0;
}