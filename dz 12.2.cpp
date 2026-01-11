#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() : width(0.0), height(0.0) {}

    Rectangle(double w, double h) : width(w), height(h) {}

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            std::cout << "Ширина не может быть отрицательной!" << std::endl;
        }
    }

    void setHeight(double h) {
        if (h >= 0) {
            height = h;
        } else {
            std::cout << "Высота не может быть отрицательной!" << std::endl;
        }
    }

    double area() const {
        return width * height;
    }

    void show() const {
        std::cout << "---" << std::endl;
        std::cout << "Ширина: " << width << std::endl;
        std::cout << "Высота: " << height << std::endl;
        std::cout << "Площадь: " << area() << std::endl; // Добавлен вывод площади
    }
};

int main() {
    Rectangle rect(4.0, 3.0);
    
    std::cout << "Прямоугольник 4x3:" << std::endl;
    rect.show();
    
    std::cout << "\nИспользование метода area() отдельно:" << std::endl;
    std::cout << "Площадь прямоугольника: " << rect.area() << std::endl;
    
    std::cout << "\nИзменяем размеры на 5x6:" << std::endl;
    rect.setWidth(5.0);
    rect.setHeight(6.0);
    rect.show();
    
    std::cout << "\nДругой прямоугольник 2.5x4.2:" << std::endl;
    Rectangle rect2(2.5, 4.2);
    rect2.show();
    
    std::cout << "\nПрямоугольник с нулевыми размерами:" << std::endl;
    Rectangle rect3;
    rect3.show();
    
    return 0;
}