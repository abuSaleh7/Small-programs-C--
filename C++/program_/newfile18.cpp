#include <iostream>
#include <stack>

using namespace std;

int main (){
    
    stack <int> element;
    
    int in;
    int i;
    int g;
    int n = 1;
    
    cout << "How much do you want items?"             <<endl;
    cin>>in;
    cout <<endl;
    g = in;
    
    for (;in>0;in--,i++){
         int e = rand();
         int s = (e%100);
         cout << "push ( " << (i+1) << " ) : " << s         <<endl ;
         element.push(s);
    }
    cout << "\n\n\t+++All items will be displayed and deleted+++\n"<<endl;
    
    
    while (!(element.empty())){
        if (in == g){
            cout << n++ << ") " << element.    top()<<endl;
            element.pop();
            in--;
            
        }
        cout << n++ << ") " << element.top()<<endl;
            element.pop();
            in--;
            
        }
    cout << "\n\n\t+++ The Stack Is Empty +++         "<<endl;
    }