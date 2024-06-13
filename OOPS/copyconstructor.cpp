#include <iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor
    rectangle();

    // Copy constructor
    rectangle(const rectangle &r);

    int getlength();
    int getbreadth();

    int area();
    int perimeter();
};

// Default constructor definition using scope resolution
rectangle::rectangle() {
    length = 1;
    breadth = 1;
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


    // Using copy constructor
    rectangle r3(r1);
    cout << "Copy constructor (r3, copy of r2): " << endl;
    cout << "Area: " << r3.area() << endl;
    cout << "Perimeter: " << r3.perimeter() << endl;

    return 0;

}
