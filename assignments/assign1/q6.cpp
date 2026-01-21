#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;

    r.length = 10;
    r.breadth = 5;

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}
