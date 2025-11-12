#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int x;
    cin >> x;
    
    string str_x = to_string(x);
    
    string reversed_str = str_x;
    reverse(reversed_str.begin(), reversed_str.end());
    
    bool is_palindrome = (str_x == reversed_str);
    
    cout << boolalpha << is_palindrome << endl;
    
    return 0;
}