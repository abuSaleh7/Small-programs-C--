#include <iostream>
#include <string>
using namespace std;

int main() {
    int attempts = 3; // تعداد محاولات الدخول
    string password = "fawaz"; // كلمة المرور
Xx 
    while (attempts > 0) {
        string input;
        cout <<"Please enter your password: ";
        cin >> input;

        if (input == password) {
            cout <<"Welcome! Here's $700." <<endl;
            break;
        }

        attempts--;
        if (attempts > 0) {
            cout <<"Incorrect password. Please try again. You have " <<attempts <<" attempts remaining." <<endl;
        } else {
            cout <<"The password was incorrect. Program is now locked." <<endl;
        }
    }
    
    return 0;
}
