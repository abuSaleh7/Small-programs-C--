#include <iostream>
using namespace std;
int ff(int &t){
    cout <<t;
    t = t+1;
    return t;
    }
int main (){
    
    int a =0;
    
    ff(a);
    cout <<a;
    
    
    }