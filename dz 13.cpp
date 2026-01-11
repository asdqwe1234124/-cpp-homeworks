#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

bool isValid(string s) {
    stack<char> brackets;
    unordered_map<char, char> matching = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            brackets.push(c);
        }
        else if (c == ')' || c == ']' || c == '}') {
            if (brackets.empty() || brackets.top() != matching[c]) {
                return false;
            }
            brackets.pop();
        }
    }
    
    return brackets.empty();
}

int main() {
    
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([)]";
    string test5 = "{[]}";
    string test6 = "";
    string test7 = "((()))";
    string test8 = "({[()]})";
    
    cout << "Тест 1: \"" << test1 << "\" -> " << (isValid(test1) ? "true" : "false") << endl;
    cout << "Тест 2: \"" << test2 << "\" -> " << (isValid(test2) ? "true" : "false") << endl;
    cout << "Тест 3: \"" << test3 << "\" -> " << (isValid(test3) ? "true" : "false") << endl;
    cout << "Тест 4: \"" << test4 << "\" -> " << (isValid(test4) ? "true" : "false") << endl;
    cout << "Тест 5: \"" << test5 << "\" -> " << (isValid(test5) ? "true" : "false") << endl;
    cout << "Тест 6: \"" << test6 << "\" -> " << (isValid(test6) ? "true" : "false") << endl;
    cout << "Тест 7: \"" << test7 << "\" -> " << (isValid(test7) ? "true" : "false") << endl;
    cout << "Тест 8: \"" << test8 << "\" -> " << (isValid(test8) ? "true" : "false") << endl;
    
    string user_input;
    cout << "\nВведите строку скобок для проверки: ";
    cin >> user_input;
    cout << "Результат: " << (isValid(user_input) ? "true" : "false") << endl;
    
    return 0;
}