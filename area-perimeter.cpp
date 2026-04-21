#include <iostream>
using namespace std;

int area(int side) {
    return side * side;
}

int perimeter(int side) {
    return 4 * side;
}

int main() {
    int side;
    cout << "Enter side length: ";
    cin >> side;

    cout << "Area: " << area(side) << endl;
    cout << "Perimeter: " << perimeter(side) << endl;

    return 0;
}