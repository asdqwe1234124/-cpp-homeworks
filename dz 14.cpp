#include <iostream>
#include <vector>
#include <string>

std::vector<bool> flickSwitch(const std::vector<std::string>& arr) {
    std::vector<bool> result;
    bool current = true;
    
    for (const auto& word : arr) {
        result.push_back(current);
        if (word == "flick") {
            current = !current;
        }
    }
    
    return result;
}

int main() {
    std::vector<std::string> test1 = {"codewars", "flick", "code", "wars"};
    std::vector<std::string> test2 = {"flick", "chocolate", "adventure", "sunshine"};
    std::vector<std::string> test3 = {"bicycle", "jarmony", "flick", "sheep", "flick", "wolf"};
    
    auto result1 = flickSwitch(test1);
    auto result2 = flickSwitch(test2);
    auto result3 = flickSwitch(test3);
    
    std::cout << "Пример 1: [";
    for (size_t i = 0; i < result1.size(); ++i) {
        std::cout << (result1[i] ? "true" : "false");
        if (i < result1.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    
    std::cout << "Пример 2: [";
    for (size_t i = 0; i < result2.size(); ++i) {
        std::cout << (result2[i] ? "true" : "false");
        if (i < result2.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    
    std::cout << "Пример 3: [";
    for (size_t i = 0; i < result3.size(); ++i) {
        std::cout << (result3[i] ? "true" : "false");
        if (i < result3.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    
    return 0;
}