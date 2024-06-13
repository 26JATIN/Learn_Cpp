#include <iostream>
using namespace std;

// Class definition for rectangle
class rectangle {
private:
    int length;  // Private member variable to store the length of the rectangle
    int breadth; // Private member variable to store the breadth of the rectangle

public:
    // Parameterized constructor declaration
    rectangle(int l, int b);

    // Accessor methods (getters)
    int getlength();
    int getbreadth();
    void setlength(int l);
    void setbreadth(int b);

    // Area and Perimeter methods
    int area();
    int perimeter();
};

// Parameterized constructor definition
rectangle::rectangle(int l, int b) {
    length = l;  // Initialize length with the given parameter 'l'
    breadth = b; // Initialize breadth with the given parameter 'b'
}

// Accessor method to get the length
int rectangle::getlength() {
    return length;
}

// Accessor method to get the breadth
int rectangle::getbreadth() {
    return breadth;
}

// Mutator method to set the length
void rectangle::setlength(int l) {
    length = l;
}

// Mutator method to set the breadth
void rectangle::setbreadth(int b) {
    breadth = b;
}

// Method to calculate and return the area of the rectangle
int rectangle::area() {
    return length * breadth;
}

// Method to calculate and return the perimeter of the rectangle
int rectangle::perimeter() {
    return 2 * (length + breadth);
}

int main() {
    int l, b;
    
    // Input length and breadth of the rectangle
    cout << "Enter length and breadth of the rectangle: ";
    cin >> l >> b;

    // Create a rectangle object using the parameterized constructor
    rectangle r(l, b);

    // Output the area and perimeter of the rectangle
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}