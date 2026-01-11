#include <iostream>
#include <vector>

int main() {
    int N;
    
    std::cout << "Введите размер массива (1 <= N <= 100): ";
    std::cin >> N;
    
    if (N < 1 || N > 100) {
        std::cout << "Ошибка: размер массива должен быть от 1 до 100." << std::endl;
        return 1;
    }
    
    std::vector<int> arr(N);
    
    std::cout << "Введите " << N << " элементов массива:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    
    int x;
    std::cout << "Введите число для поиска: ";
    std::cin >> x;
    
    int result_index = -1;
    
    for (int i = 0; i < N; ++i) {
        if (arr[i] == x) {
            result_index = i;
            break;
        }
    }

    std::cout << "Индекс искомого элемента: " << result_index << std::endl;
    
    if (result_index != -1) {
        std::cout << "Число " << x << " найдено в позиции " << result_index << std::endl;
    } else {
        std::cout << "Число " << x << " не найдено в массиве" << std::endl;
    }
    
    return 0;
}