#include <iostream>
using namespace std;
int sum = 0;
int num;

int main() {

    cout << "Enter a random digit: ";
    cin >> num;

    while(num != 0) {
        int curr_num = num % 10;
        if(curr_num % 2 == 0) {
            sum += curr_num;
        }
        num /= 10;
    }

    cout << "The sum of the event digits of the number you entered is: " << sum << "\n";
}