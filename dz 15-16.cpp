#include <iostream>
#include <cmath>

int main() {
    const double center_x = 2.0;
    const double center_y = -1.0;
    const double radius = 5.0;
    
    double x, y;
    std::cout << "Введите координату x: ";
    std::cin >> x;
    std::cout << "Введите координату y: ";
    std::cin >> y;
    
    double distance = std::sqrt(std::pow(x - center_x, 2) + std::pow(y - center_y, 2));
    
    const double epsilon = 1e-9;
    
    std::cout << "Точка (" << x << ", " << y << ") ";
    
    if (std::abs(distance - radius) < epsilon) {
        std::cout << "находится на границе окружности" << std::endl;
    } else if (distance < radius) {
        std::cout << "находится внутри окружности" << std::endl;
    } else {
        std::cout << "находится вне окружности" << std::endl;
    }
    
    std::cout << "Расстояние до центра: " << distance << std::endl;
    std::cout << "Радиус окружности: " << radius << std::endl;
    
    return 0;
}