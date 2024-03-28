#include <iostream>
using namespace std;
int num;
int num_for_sum;
int reversed_num;
int sum;

int main() {

    cout << "Enter the number: ";
    cin >> num;
    num_for_sum = num;

    while(num_for_sum != 0) {
        int curr_num = num_for_sum % 10;
        reversed_num = reversed_num * 10 + curr_num;
        num_for_sum /= 10;
    }

    sum = num + reversed_num;
    cout << "The sum for the number " << num << " is: " << sum << "[" << num << "+" << reversed_num << "]\n";
}