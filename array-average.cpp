#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i+1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    double avg = sum / 5.0;

    cout << "Average: " << avg << endl;
    return 0;
}