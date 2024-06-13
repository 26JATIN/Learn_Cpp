#include<iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    rectangle(); // Default constructor

    // Accessor methods (getters)
    int getlength();
    int getbreadth();

    // Area and Perimeter methods
    int area();
    int perimeter();
};

// Default constructor definition
rectangle::rectangle() {
    length = 1;
    breadth = 1;
}

// Accessor method to get length
int rectangle::getlength() {
    return length;
}

// Accessor method to get breadth
int rectangle::getbreadth() {
    return breadth;
}

// Method to calculate area
int rectangle::area() {
    return length * breadth;
}

// Method to calculate perimeter
int rectangle::perimeter() {
    return 2 * (length + breadth);
}

int main() {
    rectangle r;

    // Accessing default initialized values
    cout << "Initial Rectangle:" << endl;
    cout << "Length: " << r.getlength() << endl;
    cout << "Breadth: " << r.getbreadth() << endl;
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}
