#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
     
        unordered_map<char, int> romanValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            int currentValue = romanValues[s[i]];
            
            if (i + 1 < n && romanValues[s[i + 1]] > currentValue) {
                total -= currentValue; 
            } else {
                total += currentValue;
            }
        }
        
        return total;
    }
};

int main() {
    Solution solution;
    
    string testCases[] = {"III", "IV", "IX", "LVIII", "MCMXCIV"};
    int expected[] = {3, 4, 9, 58, 1994};
    
    cout << "Примеры преобразования римских чисел в целые:" << endl;
    cout << "-------------------------------------------" << endl;
    
    for (int i = 0; i < 5; i++) {
        int result = solution.romanToInt(testCases[i]);
        cout << testCases[i] << " -> " << result;
        
        if (result == expected[i]) {
            cout << " ✓" << endl;
        } else {
            cout << " ✗ (ожидалось: " << expected[i] << ")" << endl;
        }
    }
    
    return 0;
}