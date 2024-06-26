#include <iostream>

using namespace std;

class Time{
    private:
        int second;
        int minute;
        int clock;
    public:
        Time(int c,int m,int s){
            clock=c;
            minute=m;
            second=s;
        }
    void display(){
        cout<<"The Time Is : "<<clock<<":"<<minute<<":"<<second<<endl;
    }
};

int main() {
    Time t(11,59,59);
    t.display();
 return(0);   
}
