#include <iostream>

using namespace std;

string print(){
     string ss{};
    
    cout << "Enter The String Only : ";
    cin>>ss;
    
    if(!(isdigit(ss[0]))){
        if(ss.length() <= 10){
            return ss;
        }else
             return ss[0]+to_string(ss.length()-2)+ss[ss.length()-1];
    }else
        return "";
    
}

int main() {
    
    cout << print() << endl;
   }