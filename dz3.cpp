/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    double length, width;
    
    cout << "Введите длину: ";
    cin >> length;
    
    cout << "Введите ширину: ";
    cin >> width;
    
    cout << "Периметр: " << 2 * (length + width) << endl;
    cout << "Площадь: " << length * width << endl;
    
    return 0;
}