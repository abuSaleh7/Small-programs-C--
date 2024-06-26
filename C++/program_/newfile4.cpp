#include <iostream>

using namespace std;

#define P 3.14159
// P = value the PI.
#define L '\n'
// L = make nowline.

int main (){
    
    float radius, area;
    cout<< "Enter the radius of circle : ";
    cin>> radius;   //enter the use number and          store.
    area = 2*P*radius;   //Data Calculation.
    cout<< L<< "The area of the circle is : "<<          area<< L;   //print the erea.
    
return 0;
    
    
    }