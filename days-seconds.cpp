//a day has 24 hrs and each hour 60 minutes and each minute 60 seconds

#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    int seconds = days * 24 * 60 * 60;

    cout << "Seconds: " << seconds << endl;
    return 0;
}