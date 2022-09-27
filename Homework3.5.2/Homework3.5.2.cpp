// Homework3.5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure
{
protected:
    std::string name = "Фигура";
    int sides_count = 0;
    int a = 0, b = 0, c = 0, d = 0;
    int A = 0, B = 0, C = 0, D = 0;
public:
    std::string get_name()
    {
        return name;
    }
    int get_sides_count()
    {
        return sides_count;
    }
    int get_side_a()
    {
        return a;
    }
    int get_side_b()
    {
        return b;
    }
    int get_side_c()
    {
        return c;
    }
    int get_side_d()
    {
        return d;
    }
    int get_angle_A()
    {
        return A;
    }
    int get_angle_B()
    {
        return B;
    }
    int get_angle_C()
    {
        return C;
    }
    int get_angle_D()
    {
        return D;
    }
};
class Triangle : public Figure
{
public:
    Triangle() : Figure()
    {
        name = "Треугольник";
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 70;
    }
};
class Right_triangle : public Triangle
{
public:
    Right_triangle() : Triangle()
    {
        name = "Прямоугольный треугольник";
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 90;
    }
};
class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle() : Triangle()
    {
        name = "Равнобедренный треугольник";
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 50;
    }
};
class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle() : Triangle()
    {
        name = "Равносторонний треугольник";
        a = 30;
        b = 30;
        c = 30;
        A = 60;
        B = 60;
        C = 60;
    }
};
class Quadrangle : public Figure
{
public:
    Quadrangle() : Figure()
    {
        name = "Четырёхугольник";
        a = 10;
        b = 20;
        c = 30;
        d = 40;
        A = 50;
        B = 60;
        C = 70;
        D = 80;
    }
};
class Square : public Quadrangle
{
public:
    Square() : Quadrangle()
    {
        name = "Квадрат";
        a = 20;
        b = 20;
        c = 20;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
};
class Parallelogram : public Quadrangle
{
public:
    Parallelogram() : Quadrangle()
    {
        name = "Параллелограмм";
        a = 20;
        b = 30;
        c = 20;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
};
class Rectangle : public Parallelogram
{
public:
    Rectangle() : Parallelogram()
    {
        name = "Прямоугольник";
        a = 10;
        b = 20;
        c = 10;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
};
class Rhomb : public Parallelogram
{
public:
    Rhomb() : Parallelogram()
    {
        name = "Ромб";
        a = 30;
        b = 30;
        c = 30;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
};
void print_info(Figure figure)
{
    std::cout << figure.get_name() << ": " << std::endl;
    std::cout << "Стороны: a=" << figure.get_side_a() << " b=" << figure.get_side_b() << " c=" << figure.get_side_c();
    if (figure.get_side_d() != 0)
    {
        std::cout << " d=" << figure.get_side_d() << std::endl;
    }
    else { std::cout << std::endl; }
    std::cout << "Углы: A=" << figure.get_angle_A() << " B=" << figure.get_angle_B() << " C=" << figure.get_angle_C();
    if (figure.get_angle_D() != 0)
    {
        std::cout << " D=" << figure.get_angle_A() << std::endl;
    }
    else { std::cout << std::endl; }
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");

    //Figure figure;
    Triangle triangle;
    Right_triangle right_triangle;
    Isosceles_triangle isosceles_triangle;
    Equilateral_triangle equilateral_triangle;
    Quadrangle quadrangle;
    Square square;
    Parallelogram parallelogram;
    Rectangle rectangle;
    Rhomb rhomb;

    //print_info(figure);
    print_info(triangle);
    print_info(right_triangle);
    print_info(isosceles_triangle);
    print_info(equilateral_triangle);
    print_info(quadrangle);
    print_info(square);
    print_info(parallelogram);
    print_info(rectangle);
    print_info(rhomb);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
