#include <iostream>
#include <stack>
using namespace std;


int main(){
    int sum =0;
        stack < int > stackl;
stackl.push ( 100 );
stackl.push ( 200 );
stackl.push( 300 );
stackl. push ( 400 );

    while (!stackl.empty ()){
        	sum+=stackl.top();
        	stackl.pop();
       	} 
       	cout <<" sum is " <<sum;
    }
    
    
        
       
   