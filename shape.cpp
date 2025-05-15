
#include <iostream>
using namespace std;

class Shape {
public:
    virtual double getArea() = 0;
    virtual string getName() = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() override {
        return width * height;
    }

    string getName() override {
        return "Rectangle";
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() override {
        return 3.14 * radius * radius;
    }

    string getName() override {
        return "Circle";
    }
};

int main() {
    Shape* s1 = new Rectangle(10, 4);
    Shape* s2 = new Circle(10);

    cout << s1->getName() << " area: " << s1->getArea() << endl;
    cout << s2->getName() << " area: " << s2->getArea() << endl;

    delete s1;
    delete s2;
    return 0;
}
```