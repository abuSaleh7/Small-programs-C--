#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    double result = fmax(num1, num2);
    double min = fmin(num1, num2);
    cout << "\n\n\nMinimum of two numbers is " << min<<endl ;
    cout << "The highest value is: " << result << endl;

    return 0;
}