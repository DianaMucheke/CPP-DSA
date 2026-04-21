#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch))
        cout << "Uppercase" << endl;
    else if (islower(ch))
        cout << "Lowercase" << endl;
    else
        cout << "Not a letter" << endl;

    return 0;
}