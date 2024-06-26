#include <iostream>
#include <queue>

using namespace std;

int main (){
    
    queue <int> element;
    
    int in;
    int i;
    int g;
    int n = 1;
    int front;
    int rear;
    
    cout << "How much do you want items?"             <<endl;
    cin>>in;
    cout <<endl;
    g = in;
   
    cout << "++Input++" <<endl;
    
    for (;in>0;in--,i++){
         int e = rand();
         int s = (e%100);
         cout << "push ( " << (i+1) << " ) : " << s          <<endl ;
         element.push(s);
    }
    
    front = element.front();
    rear = element.back();
    
    cout << "\n\n\t+++All items will be displayed and deleted+++\n"<<endl;
    cout << "++Output++" <<endl;
        
    while (!(element.empty())){
        if (in == g){
            cout << n++ << ") " << element. front()<<endl;
            element.pop();
            in--;
            
        }
        cout << n++ << ") " << element.front()<<endl;
            element.pop();
            in--;
            
        }
    cout << "\n\n\t+++ The Queue Is Empty +++         "<<endl;
    
    cout << "\n Note the first item is (" << front << ") and last item is (" << rear << ") "<<endl;
    }