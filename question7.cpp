#include <iostream>
using namespace std;
int n;


int main() {
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int num = 1; num <= i; num++) {
            factorial *= num;    
        }

        cout << "Factorial of " << i << " is: " << factorial << "\n"; 

    }
}