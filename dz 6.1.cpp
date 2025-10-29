#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    
    srand(time(0));
    
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 101 - 50;  // от -50 до 50
    }
    
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}