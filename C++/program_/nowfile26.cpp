#include <iostream>
#include <cmath>
using std::cout,std::cin,std::endl,std::string,std::to_string;

class MyClass 
{
	public: 
	
	int num1 {}, num2 {};
	auto en (int& num1,int& num2)
	{
        for (int e: {1,2})
        {
        	cout << "Enter The Number" << e << ": ";
        	 (e == 1)?cin>>num1:cin>>num2;    	        	
        }
	}
}; 

int main() {
   MyClass obj1;
   
   
   auto nnum1 {obj1.num1}, nnum2 {obj1.num2}; 
   obj1.en(nnum1,nnum2);
      
   
   cout << "\nThe Number1 Is: " << nnum1 << endl;
   cout << "The Number2 Is: " << nnum2 << endl;
   cout << "\nThe Maximum Number Is " << ((nnum1==nnum2)? "Eqoal":(to_string(int(fmax(nnum1,nnum2))))) << endl;
}