#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    
int num1,num2;

cout << "_  _ -  _      _ - _   _  -    _  _ -  _   _ - _ _ _"
               "     _   -    _    -     _      _      _  -   _      _       _   -   -   _    _  _     -    _   _     -       _ _ _       -  _\n" << endl;

cout << "#___Enter The First Number : ";
cin >> num1;
cout << "#___Enter The Second Number : ";
cin >> num2;
cout << "\n////////////////////🤔🤔🤔//////////////////\n---";      

if ( num1 != isdigit(num1) && num2 != isdigit(num2) ) {
    switch ( num1 > num2 ){
        case true:
            cout << "\nYes \"" << num1 << "\" Is Greater.🤓\n---" << endl;
            break;
       case false:
           switch ( num1 < num2 ){
               case true:
                   cout << "\n" << "?___\"" << num2 << "\" Is Greater.🧐\n---" << endl;
                   break;
               case false:
                   cout << "\nThe Numbers Are Equal👍.\n---"<< endl;
                   break;
        
        }       
    }

}
else
    cout << "\nEnter The Numbers Onlyyy😑.\n---";
}