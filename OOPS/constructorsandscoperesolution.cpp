#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor
    rectangle();

    // Parameterized constructor
    rectangle(int l, int b);

    // Copy constructor
    rectangle(const rectangle &r);

    int getlength();
    int getbreadth();
    void setlength(int l);
    void setbreadth(int b);
    int area();
    int perimeter();
};

// Default constructor definition using scope resolution
rectangle::rectangle() {
    length = 1;
    breadth = 1;
}

// Parameterized constructor definition using scope resolution
rectangle::rectangle(int l, int b) {
    length = l;
    breadth = b;
}

// Copy constructor definition using scope resolution
rectangle::rectangle(const rectangle &r) {
    length = r.length;
    breadth = r.breadth;
}

int rectangle::getlength() {
    return length;
}

int rectangle::getbreadth() {
    return breadth;
}

void rectangle::setlength(int l) {
    length = l;
}

void rectangle::setbreadth(int b) {
    breadth = b;
}

int rectangle::area() {
    return length * breadth;
}

int rectangle::perimeter() {
    return 2 * (length + breadth);
}

int main() {
    // Using default constructor
    rectangle r1;
    cout << "Default constructor (r1): " << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl << endl;

    // Using parameterized constructor
    int l, b;
    cout << "Enter length and breadth for r2: ";
    cin >> l >> b;
    rectangle r2(l, b);
    cout << "Parameterized constructor (r2): " << endl;
    cout << "Area: " << r2.area() << endl;
    cout << "Perimeter: " << r2.perimeter() << endl << endl;

    // Using copy constructor
    rectangle r3(r1);
    cout << "Copy constructor (r3, copy of r2): " << endl;
    cout << "Area: " << r3.area() << endl;
    cout << "Perimeter: " << r3.perimeter() << endl;

    return 0;
}
