#include <iostream>
#include <stack>

using namespace std;



int main (){
   int nownumber;
   int numbers;
   
   stack<int> element;
   
   

  for (int i = 0; i < 10; i++) {
    int x = rand();
    int sum = (x%100);
    cout << "push ( " << (i+1) << " ) : " << sum                <<endl ;
    element.push(sum);
  }
    
    cout<<"\nsize of stack : " <<element.size();
    cout<<"\n\ntop the element : " <<element.           top()<<endl;
    cout<<"\n\t\\\\\\remove two top element///      "<<endl;
    
    
    element.pop();
    element.pop();
    nownumber = 1;    
    element.push(nownumber);
    
    
    cout<<"\nsize of stack : " <<element.                    size()<<endl;
    cout<<"\ntop the element now : " <<element.      top()<<endl;
    
    
    }