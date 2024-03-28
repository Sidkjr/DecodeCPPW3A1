#include <iostream>
using namespace std;

int main() {

    int curr_val = 1;
    int curr_num = 1;
    int digit;

    while (curr_val <= 500) {
        int armstrong_check = 0;

        while(curr_num > 0) {
            digit = curr_num % 10;
            armstrong_check = armstrong_check + (digit * digit * digit);
            curr_num = curr_num/10;
        }

        if (armstrong_check == curr_val) {
            cout << curr_val << "\n";
            curr_val++;
            curr_num = curr_val;
        }

        else {
            curr_val++;
            curr_num = curr_val;
            continue;
            
        }
    }
}