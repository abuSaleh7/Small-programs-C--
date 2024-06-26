#include <iostream>
using namespace std;
int main() {
    int g;
    cout << "----------select----------"<<endl;
    cout <<  "--                               -    --"<<endl;
          cout << "--   1- calculate.   -   -     --"<<endl;
       cout <<   "--   2- old.     -   -        -   ---  --"<<endl;
        cout <<  "--                            -  -     --"<<endl;
       cout << "---------------------------"<<endl;
        cout << "select 1 or 2 : ";
     cin>> g;
             if ( g == 1){
    int i,l;
    char f,q;
    do {
        cout << "enter the number 1 : " ;
        cin >> i;
        cout << "\nenter the number 2 : " ;
        cin >> l;
        cout << "\nenter the sysmol( + , - , / , * ) : "             ;
            cin >> f;
        switch (f) {
            case '+':
                cout << i << " + " << l << " = " << i+l           << endl;
                break;
            case '-':
                cout << i << " - " << l << " = " << i-l            << endl;
                break;
            case '*':
                cout << i << " * " << l << " = " << i*l          << endl;
                break;
            case '/':
                if ( l != 0 )
                    cout << i << " / " << l << " = " <<            (float) i/l << endl;
                    
                else
                    cout << "can not divide by zero" <<       endl;
                    break;
            default:
                cout << "can not sysmol other." <<           endl;
                break;
    }
    cout << "do again ( y , n )" << endl;
    cin >> q;
    }while ( q != 'n' );
             }
    else if ( g == 2 ){
       char j;
       do{ 
       
        int h;
        int t;
        cout << "enter old on years : ";
        cin >> h;
        t = 2023-h;
        cout << "old you " <<t<<endl;
        
        cout << "do again ( y , n ) : " << endl;
        cin >> j;
        
    
    }while ( j != 'n');
    
    
    }
}