#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

using namespace std;

int main() {
    string input;
    
    getline(cin, input);
    
    unordered_set<char> characters;
    bool is_isogram = true;
    
    for (char c : input) {
        
        if (c == ' ') {
            continue;
        }
        
        char lower_c = tolower(c);
        
        if (characters.find(lower_c) != characters.end()) {
            is_isogram = false;
            break;
        }
        
        characters.insert(lower_c);
    }
    
    cout << boolalpha << is_isogram << endl;
    
    return 0;
}