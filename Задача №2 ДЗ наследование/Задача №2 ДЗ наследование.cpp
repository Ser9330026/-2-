#include <iostream>

class GemetricFigure
{
public:
    virtual void print_info() = 0;
};

class Triangle : public GemetricFigure
{
protected:
    int a = 10, b = 20, c = 30;
    double A = 50, B = 60, C = 70;
public:
    Triangle() {};
    Triangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    void print_info() override {
        std::cout << "Стороны: " << a << ", " << b << ", " << c << '\n' << "Углы: " << A << ", " << B << ", " << C << std::endl;
    }
};

class RightTriangle : public Triangle
{
public:
    RightTriangle() {
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 90;
    }
    RightTriangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
};

class IsoscelesTriangle : public Triangle
{
public:
    IsoscelesTriangle() {
        a = 10;
        b = 30;
        c = 10;
        A = 50;
        B = 60;
        C = 50;
    }
    IsoscelesTriangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
};

class EquilateralTriangle : public Triangle
{
public:
    EquilateralTriangle() {
        a = 30;
        b = 30;
        c = 30;
        A = 60;
        B = 60;
        C = 60;
    }
    EquilateralTriangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
};

class Quadrilateral : public GemetricFigure
{
protected:
    int a = 10, b = 20, c = 30, d = 40;
    double A = 50, B = 60, C = 70, D = 80;
public:
    Quadrilateral() {};
    Quadrilateral(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    void print_info() override {
        std::cout << "Стороны: " << a << ", " << b << ", " << c << ", " << d << '\n' << "Углы: " << A << ", " << B << ", " << C << ", " << D << std::endl;
    }
};

class Rectangle : public Quadrilateral
{
public:
    Rectangle() {
        a = 10;
        b = 20;
        c = 10;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
    Rectangle(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
};

class Square : public Quadrilateral
{
public:
    Square() {
        a = 20;
        b = 20;
        c = 20;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
    Square(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
};

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram() {
        a = 20;
        b = 30;
        c = 20;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
    Parallelogram(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
};

class Rhomb : public Quadrilateral
{
public:
    Rhomb() {
        a = 30;
        b = 30;
        c = 30;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
    Rhomb(int a, int b, int c, double A, double B, double C) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
};

int main() {
    setlocale(LC_ALL, "rus");
    Triangle t_triangle;
    std::cout << "Треугольник: " << std::endl;
    t_triangle.print_info();

    RightTriangle r_triangle;
    std::cout << "\nПрямоугольный треугольник: " << std::endl;
    r_triangle.print_info();
    IsoscelesTriangle i_triangle;
    std::cout << "\nРавнобедренный треугольник: " << std::endl;
    i_triangle.print_info();
    EquilateralTriangle e_triangle;
    std::cout << "\nРавносторонний треугольник: " << std::endl;
    e_triangle.print_info();
    Quadrilateral q_quadr;
    std::cout << "\nЧетырехугольник: " << std::endl;
    q_quadr.print_info();
    Rectangle r_quadr;
    std::cout << "\nПрямоугольник: " << std::endl;
    r_quadr.print_info();
    Square s_quadr;
    std::cout << "\nКвадрат: " << std::endl;
    s_quadr.print_info();
    Parallelogram p_quadr;
    std::cout << "\nКвадрат: " << std::endl;
    p_quadr.print_info();
    Parallelogram rb_quadr;
    std::cout << "\nКвадрат: " << std::endl;
    rb_quadr.print_info();

    return 0;
}