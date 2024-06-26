#include <iostream>

using namespace std;



int main() {
    

     string ss{};
    int n{},a{0};
    
    cout << "Enter Number The Words : ";
    cin>>n;
    cout << "\nIf Number Letters Of Words Grater Then 10 Letters "
    << "When Transformation Letters To Number!!!!!" << endl;
    while (n--){
        
    cout << "\nEnter The Word "<< ++a <<" : ";
    cin>>ss;
    
    
        if(ss.length() > 10)
            cout << ss[0]+to_string(ss.length()-2)+ss[ss.length()-1];
        else
            cout << ss;
    
    }
}


   