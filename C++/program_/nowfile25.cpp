#include <iostream>

#include <cmath>
using namespace std;

class Compursion

{

private:

int num = 0; 

public: 

void get(){
    int y;
    cout << "Enter The Number : ";
    cin>>y;
    num=y;
    
}


void print ( ) 

{

cout << "\nNumber is "<<num;
    


}

void maximum(Compursion,Compursion);

    
};

void Compursion::maximum(Compursion obj1,Compursion obj2) {
    cout << "\n\nThe Max Number Is " << max(obj1.num,obj2.num) << endl;
}   

int main() {

    Compursion x1,x2;
    x1.get();
    x2.get();
    x1.print();
    x2.print();
    x1.maximum(x1,x2);

 


}