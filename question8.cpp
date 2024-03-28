#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the value for n: ";
    cin >> number;

    int num_1 = 1; 
    int num_2 = 1; 
    int temp;
    for (int i = 1; i <= number; i++) {
        cout << num_1 << " ";
        temp = num_1 + num_2;
        num_1 = num_2;
        num_2 = temp;
    }
    cout << "\n";
}