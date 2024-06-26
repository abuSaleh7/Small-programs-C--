#include <iostream>
#include <string>
using namespace std;
int main () {
    
    string name;
    int i = 3;
    
    f:cout << "enter the bassword : ";
    cin >> name;
    
    if ( name == "fawaz")
    {
        cout << "\nhello fawaz have you : $700"          << endl;
        
    }
    
    else{  
    
        --i;
        cout << "\ntry " << i << endl;
        
        if ( i != 0 )
            goto f;
            
        else 
            cout << "\nno try." << endl;
        
    }
    


}
