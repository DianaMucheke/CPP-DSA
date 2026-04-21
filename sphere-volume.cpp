//(4/3)pi r3

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    double volume = (4.0/3.0) * 3.141592653589793 * pow(radius, 3);

    cout << "Volume: " << volume << endl;
    return 0;
}