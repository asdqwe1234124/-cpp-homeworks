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

    void show() const {
        std::cout << "---" << std::endl;
        std::cout << "Ширина: " << width << std::endl;
        std::cout << "Высота: " << height << std::endl;
    }
};

int main() {
    Rectangle rect1;        
    Rectangle rect2(4.0, 3.0);   
    
    std::cout << "Прямоугольник 1 (по умолчанию):" << std::endl;
    rect1.show();
    
    std::cout << "\nПрямоугольник 2 (ширина=4.0, высота=3.0):" << std::endl;
    rect2.show();
    
    std::cout << "\nИзменение прямоугольника 1 через сеттеры:" << std::endl;
    rect1.setWidth(5.5);
    rect1.setHeight(2.5);
    rect1.show();
    
    std::cout << "\nПолучение значений через геттеры:" << std::endl;
    std::cout << "Ширина rect2: " << rect2.getWidth() << std::endl;
    std::cout << "Высота rect2: " << rect2.getHeight() << std::endl;
    
    std::cout << "\nПопытка установить отрицательную высоту:" << std::endl;
    rect2.setHeight(-2.0);
    
    return 0;
}