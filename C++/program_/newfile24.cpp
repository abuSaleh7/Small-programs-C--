#include <iostream>
using std::cout,std::cin,std::endl;

class MyClass 
{
	public: 
	
	float num1 {}, num2 {};
	auto en (float& num1,float& num2)
	{
        for (int e: {1,2})
        {
        	cout << "Enter The Number" << e << ": "                     << endl;
        	if (e == 1) 
        	    cin>>num1;
        	else
        	    cin>>num2;    	        	
        }
	}
}; 

int main() {
   MyClass obj1;
   auto nnum1 {obj1.num1}, nnum2 {obj1.              num2}; 
   obj1.en(nnum1,nnum2); 
   
   cout << "The Number1 Is: " << nnum1 << endl;
   cout << "The Number2 Is: " << nnum2 << endl;
}