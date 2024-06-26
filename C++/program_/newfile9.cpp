/*#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Enter value of x: ";
    cin >> x;
    y = pow(cos(x), 2) + pow(sin(x), 2);
    cout << "y = " << y;
    return 0;
}*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cout << "Enter value of x: ";
    cin >> x;
    y = pow(sin(2 * x), 5);   
    cout << "y = " << y;
}