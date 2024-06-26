#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    int num;

    cout << "Enter a number: ";
    cin >> input;

    // check if input contains only digits
    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            cout << "Please enter numbers only." << endl;
            return 0;
        }
    }

    // convert input to integer
    num = stoi(input);

    cout << "You entered: " << num << endl;

    return 0;
}