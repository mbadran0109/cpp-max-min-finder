#include <iostream>
using namespace std;

int main () {
    int num;
    int max, min;
    
    cout << "Enter number: ";
    cin >> num;
    max = num;
    min = num;

    for (int i = 0; i < 9; i++) {
        cout << "Enter number: ";
        cin >> num;
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }    
    cout << "Max: " << max << ", Min: " << min << endl;
    return 0;
}