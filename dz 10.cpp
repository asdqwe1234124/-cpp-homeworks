#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i};
        }
        
        numMap[nums[i]] = i;
    }
    
    return {};
}

int main() {
    int n, target;
    
    cout << "Введите количество элементов в массиве: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Введите target: ";
    cin >> target;
    
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Индексы элементов: [" << result[0] << ", " << result[1] << "]" << endl;
        cout << "Элементы: " << nums[result[0]] << " + " << nums[result[1]] 
             << " = " << target << endl;
    } else {
        cout << "Решение не найдено (хотя по условию должно существовать)" << endl;
    }
    
    return 0;
}