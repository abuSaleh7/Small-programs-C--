// #include <iostream>
// using namespace std;
// int main (){
//     for ( int c = 'a'; c <= 100; c++)
//         cout << c << endl;
// }











// #include <iostream>
// using namespace std;
// int main()
// {
//     int s, d;
//     cout << "enter the number 1 : ";
//     cin >> s;
//     cout << "enter the number 2 : ";
//     cin >> d;
//     cout << s << " + " << d << " = " << s + d << endl;
// }
// #include <iostream>
// using namespace std;
// int main () {

//     cout << "********************************" << endl;
//     cout << "***                          ***" << endl;
//     cout << "***     fawaz ahmed saleh    ***" << endl;
//     cout << "***                          ***" << endl;
//     cout << "********************************" << endl;






// }
// #include <iostream>
// using namespace std;
// int main() {

//     int i,l;
//     char f,q;
//     do {
//         cout << "enter the number 1 : ";
//         cin >> i;
//         cout << "\nenter the number 2 : ";
//         cin >> l;
//         cout << "\nenter the sysmol( + , - , / , * ) : ";
//         cin >> f;
//         switch (f) {
//             case '+':
//                 cout << endl << i << " + " << l << " = " << i+l << endl;
//                 break;
//             case '-':
//                 cout << i << " - " << l << " = " << i-l << endl;
//                 break;
//             case '*':
//                 cout << i << " * " << l << " = " << i*l << endl;
//                 break;
//             case '/':
//                 if ( l != 0 )
//                     cout << i << " / " << l << " = " << (float) i/l << endl;
                    
//                 else
//                     cout << "can not divide by zero" << endl;
//                     break;
//             default:
//                 cout << "can not sysmol other." << endl;
//                 break;
//     }
//     cout << "do again ( y , n )" << endl;
//     cin >> q;
//     }while ( q != 'n' );
// }







// #include <iostream>
// using namespace std;
// int main() {
//     int i = 0;
//     for ( int i = 0; i <= 15;i++) {
//         cout << "x";
//     }
//     for ( int i = 16; i <= 24;i++) {
//         cout << "\nx";
//     }
//     for ( int i = 25; i <= 39;i++) {
//         cout << "x";
//     }
//     for ( int i = 40; i <= 48;i++) {
//         cout << "\nx";
//     }
//     for ( int i = 49; i <= 64;i++) {
//         cout << "x";
//     }
// }









// #include <iostream>
// #include <string>
// using namespace std;
// int main () {
//     string name;
//     int i = 3;
//     f:cout << "enter the bassword : ";
//     cin >> name;
//     if ( name == "fawaz")
//     {
//         cout << "\nhello fawaz have you : $700" << endl;
        
//     }
//     else{  
//         --i;
//         cout << "\ntry " << i << endl;
//         if ( i != 0 )
//             goto f;
//         else 
//             cout << "\nno try." << endl;
        
//     }
// }








// #include <iostream>
// using namespace std;
// int main () {
//     int *x;
// int c=200;
// int p;
// x=&c;
// p=*x;
// cout << " The address of the memory location of x : " << x << endl;
// cout << " The contents of the pointer x : " << *x << endl;
// cout << " The contents of the variable p : " << p << endl;
// return(0);
// }







// #include <iostream>
// using namespace std;
// int main () {

//     int x = 7;
//     cout << "The contents of the variable : " << &x << endl;
//     int *p = &x;
//     cout << " The contents of the variable : " << *p << endl;
//     return(0);
//  }











// #include <iostream>
// using namespace std;
// int main () {
//     int f = 0;
//     int*p = &f;
//     cout << "the address of the memory location of f : " << p << endl;
//     cout << "the contents of the pointer f : " << *p << endl;
//     cout << "the contents of the variable f : " << f << endl;
// }







// #include <iostream>
// #include <cmath>
// #define g 32.17
// using namespace std;
// int main () {
//     float time, density, velocity, height, theta;
//     cout << "enter theta : ";
//     cin >> theta;
//     cout << "\nenter density : ";
//     cin >> density;
//     cout << "\nenter velocity : ";
//     cin >> velocity;
//     time = density / (velocity*cos(theta));
//     height = velocity * sin(theta) * time * (g*time*time/2);
//     cout << "time = " << time <<endl;
//     cout << "height = " << height << endl;
//     return 0;
// }








// #include <iostream>

// #include <conio.h>
// using namespace std;
// int main () {
    
//     int gg;
    
//     gg = getche();
//     cout << gg << endl;
// }








// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main() {
//     int d=6;
//     int g,j =6;
//     g = (j==d)?7:9;
    
//     cout << g<< endl;
// }     








// #include <iostream>
// #include <string>
// using namespace std;
//  int main () {

//     bool m = 1;
    
//     cout << !!!!m <<"\n" << endl;    
// }








// #include <iostream>
// using namespace std;
// int main () {

//     int n= 6,x;
//     x=--n*++n+ ++n;
//     cout << n <<endl<<x<< endl;
//     cout << n++<<endl<<--n<<endl<<n--<<endl;
// }








// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {

//     int x;
//     float y;
//     cout << "x =" <<endl;
//     cin >> x;
//     y = exp(5*x)*cos(3*x+1)*pow(x,7);
//     cout << "y =" <<y<< endl;
//     return 0;

// }







// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;
// int main () {
    
//     int t;
//     cout << "enter the number : ";
//     cin >> t;
//     if ( t != isdigit(t) ) {
//         cout << "\nnumbers";
//     }
//     else {
//         cout << "\nno numbers";
//     }
// }








// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;
// int main () {

//     int g;
//     string r;
//     string str;
//     cout << "enter the number : " <<endl;
//     cin >> str;
//     r = r.length();
//     g = stio(r);
//     cout << g << endl;
// }









// #include <iostream>
// using namespace std;
// int main () {
//     int i = 1;
    
//     while ( i<=20 ){
//         if ( i%5==0 )
//             cout <<endl;
//         cout << i << "\t";
//         i++;
//     }
// }









// #include <iostream>
// using namespace std;

// int aaa(int u);
// int sss(int o);

// int main() {
//     int k ;
//     do {
//         cout << "enter the number : ";
//         cin >> k;
//         aaa(k);
//         sss(k);
        

//     }while(k != 0);
// }
// int aaa(int u){
//     if (u != 0){
//         if (u%2 == 0)
//             cout << "the number is even.\n";}
//     else
//         cout << "the number is zero.\n";
// }
// int sss(int o){
//     if (o%2 == 1){
//         cout << "the number is add.\n";
//     }
// }









// #include <iostream>
// using namespace std;

// class ddd{
//     public:
//     int r;
//     string n;
//     int jjj(int i, string j){
//         cout << "name :" << j << endl;
//         cout << "rrr : " << i << endl;
//     }
// };

// int main() {
//     ddd oo;
    
//     oo.r =    300;
//     oo.n = " Nameee!";
//     oo.jjj(oo.r,oo.n);
//     return 0;
// }










// #include <iostream>
// using namespace std;


// class fff {
//     public:
//     string name;
//     int place;
//     string describe;
//     void print(fff pl);
// };


// int main (){
//     int n;
//     fff pla;
//     fff pla2;
//     pla.name = "Redmi Note 8";
//     pla.place = 500;
//     pla.describe = "Is Very Goooood!!!";
    
//     pla2.name = "Samsong A 51";
//     pla2.place = 1500;
//     pla2.describe = "Is Very Goooood!!!";

//     cout << "\t======= Selected The Number =======\n" << endl;
//     cout << "\t\t 1- Redmi!!!"<< endl;
//     cout << "\t\t 2- Samsong!!!"<< endl;
//   g:cout << "\nEnter The Number@ ";
//     cin >> n;

//     if (n == 1)
//         pla.print(pla);
//     else if (n == 2)
//         pla2.print(pla2);
//     else{
//         cout << "\n\t\tERROR!!!!!!!!!!!!" << endl;
//         cout << "\t\t!!The Number Only!!" << endl;
//         goto g;}

    
// }

// void fff::print(fff pl){
//     cout << "\n\t\t===properties===" << endl;
//     cout << "\t The Name    |  " << pl.name << endl;
//     cout << "\t The Place   |  " << pl.place << endl;
//     cout << "\t The phone   |  " << pl.name << " " << pl.describe << endl;
// }









// #include <iostream>
// using namespace std;

// class Youtube {
//     private:
//     string name;
//     int videos;
//     int sub;

//     public:

//     int value(string na,int vi,int su){
//         name = na;
//         videos = vi;
//         sub = su;
//     }
//     void print(){
//     cout << "\nName the video Is " << name <<endl;
//     cout << "Videos : " << videos << endl;
//     cout << "Sub : " << sub << "\n\n" << endl;
//     }
// };

// int main (){
//     Youtube videos1;
//     string na_vi;
//     int nu_vi;
//     int su_vi;

//     g:cout << "Enter Name The Video : ";
//     cin >> na_vi;
//     cout << "\nEnter Number The Video : ";
//     cin >> nu_vi;
//     cout << "\nEnter Sub In Video : ";
//     cin >> su_vi;
//     videos1.value(na_vi, nu_vi, su_vi);
//     videos1.print();
    
//     char ch;
//     go:cout << "\nDo You Agin [ y=(yes) OR n=(no)] : ";
//     cin >> ch;
//     if (ch == 'y' || ch == 'Y')
//         goto g;
//     else if (ch == 'n' || ch == 'N')
//         return false;
//     else {
//         cout << "\nOnly y OR n." << endl;
//         goto go;}
    
// }










// #include <iostream>
// using namespace std;

// class Cal{
//     private:
//         int n1,n2;
//         char op;
//     public:
//         Cal(){
//             cout << "Enter The Numbers : ";
//             cin >> n1 >> n2;
//             cout << "\nEnter The Op Only [ x , / , % , + ] : ";
//             cin >> op;
//             }
//         int sum(int nx,int nnz){
//             cout << nx << " + " << nnz << " = "  << nx+nnz << endl;
//         }
//         int divide(int nx,int nnz){
//             cout << nx << " / " << nnz << " = "  << (float)nx/nnz << endl;
//         }
//         int mod(int nx,int nnz){
//             cout << nx << " % " << nnz << " = "  << nx%nnz << endl;
//         }
//         int muit(int nx,int nnz){
//             cout << nx << " x " << nnz << " = "  << nx*nnz << endl;
//         }
//         char print(char o){
//             if ( o == '+' )
//                 sum(n1,n2);
//             else if ( o == '/' )
//                 if ( n2 != 0 )
//                     divide(n1,n2);
//                 else 
//                     cout << "Error!!!" << endl;
//             else if ( o == '%' )
//                 mod(n1,n2);
//             else if ( o  == 'x' )
//                 muit(n1,n2);
//             else
//                 cout <<"NO Op also!!!";
//             }
//         string set(){
//             print(op);
//         }
//     };
// int main (){
    
//     Cal oo;
//     oo.set();

// }









// #include <iostream>
// using namespace std;

// class Student {
//     private:
//     string name;
//     int mark;
//     public:
    
//     Student(string name1,int mark1){
//         name = name1;
//         mark = mark1;
//     }
//     friend void sum(Student st1,Student st2,Student st3);
//     void checkmark(Student st1,Student st2,Student st3){
//         if (st1.mark > st2.mark && st1.mark > st3.mark)
//             cout << st1.name << " Is Greater!!!" << endl;
//         else if (st2.mark > st1.mark && st2.mark > st3.mark)
//             cout << st2.name << " Is Greater!!!" << endl;
//         else 
//             cout << st3.name << " Is Greater!!!" << endl;
//     }
// };
// void sum(Student st1,Student st2,Student st3){
//     cout << "Sum The Student \"" << st1.name << "\", \"" << st2.name << "\", \"" << st3.name << "\" = " << st1.mark+st2.mark+st3.mark << endl;
// }
// int main (){
//     Student st1("Ahmed",70);
//     Student st2("Ali",80);
//     Student st3("Fawaz",100);
//     sum(st1,st2,st3);
//     st1.checkmark(st1,st2,st3);
    
// }









// #include <iostream>
// using namespace std;

//     class Phone {
//         private:
//             string name;
//             int place;
//         public:
//             Phone (string name1, int place1){
//                 name = name1;
//                 place = place1;
//             }
//             Phone (){
                
//                 cout << "Enter the Name Is Phone : ";
//                 cin >> name;
//                 cout << "\nEnter the Place Is Phone : ";
//                 cin >> place;
//             }
//             void friend sum (Phone ph1,Phone ph2,Phone ph3);
//             void checkplace (Phone ph1,Phone ph2,Phone ph3){
//                 if (ph1.place > ph2.place && ph1.place > ph3.place)
//                     cout << ph1.name << " Is Expensive!!!!" << endl;
//                 else if (ph2.place > ph1.place && ph2.place > ph3.place)
//                     cout << ph2.name << " Is Expensive!!!!" << endl;
//                 else
//                     cout << ph3.name << " Is Expensive!!!!" << endl;
//             }
//     };
// void sum (Phone ph1,Phone ph2,Phone ph3){
//     cout << ph1.place << " + " << ph2.place << " + " << ph3.place << " = " << ph1.place+ph2.place+ph3.place << endl; 
//  }   

// int main(){

//     Phone ph1, ph2, ph3;
//     sum (ph1, ph2, ph3);
//     ph1.checkplace(ph1, ph2, ph3);
    
// return (0);

// }










// #include <iostream>
// using namespace std;

// class Test {
//     private:
//         int x;
//     public:
//         Test(int o){x=o; cout << o << endl; }
// };
// class Test2 : public Test {
//      private:
//         int y;
//     public:
//         Test2(int w,int u):Test(w){y=u; cout << y << endl; }
// };

// int main(){
//     Test2 t(6,7);
// }










// #include <iostream>
// using namespace std;

// class Test {
//     private:
//         int x;
//     public:
//         int r = 0;
//         Test(int i){x = i; cout << x << endl; }
// };
// class Test2 : public Test {
//    private:
//         int y;
//     public:
        
//         Test2(int p):Test(p){ cout << r << endl; }
    
// };

// int main(){
//     Test2 t(5);
// }










// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void print (){
//         cout << "A" << endl;
//     }
// };
// class B{
//     protected:
//     void print (){
//         cout << "B" << endl;
//     }
// };
// class C : public A, public B{
//     public:
//     void print (){
//         B::print();
//         cout << "C" << endl;
//     }
// };

// int main () {
//     C a;
//     a.A::print();
//     a.print();
// }









// #include <iostream>
// using namespace std;

// class De {
//     protected:
//         string name;
//         int id = 0,hour,id_speed_pl_hour = 120,id_speed_pl_hours,all_id_speed_pl_hours;
//         double home,id_place_mater,pl_place,how_pl,all_pl_place,id_place_mater_hours,all_id_place_mater_hours,id_place;
//     public:
//         De(){
//             cout << "!!!!!!!!!!!!!!!!!HELLO!!!!!!!!!!!!!!!!!" << endl;
//             f:++id;
//             char t;
//             cout << "Enter Your Name The Worker : ";
//             cin >> name;
//             cout << "Do You Add Another Name Write ( Y ) And To Cancel ( Any Char Or ( N ) ) : ";
//             cin>>t;
//             if ( t == 'Y' || t == 'y' )
//                 goto f;
//             cout << "Enter Space The Home In Mater : ";
//             cin >> home;
//             cout << "Enter The Working Hours : ";
//             cin >> hour;
//             cout << "Enter Price The Tiles : ";
//             cin >> pl_place;
//             cout << "How Much Money Does A Worker Want Per Mater : ";
//             cin >> id_place_mater;
//             cout << "\n\n" << endl;
//         }
//         void how_p(){
//             how_pl = home * 2;
//             all_pl_place = pl_place * how_pl;
//             cout << "\n!!!!!!!!TILES!!!!!!!!" << endl;
//             cout << "Need To " << how_pl << " Of Tiles." << endl;
//             cout << "And The Price Tiles Is " << all_pl_place << "$" << endl;    
//         }
//         void how_i(){
//             id_place_mater_hours = id_place_mater * home;
//             all_id_place_mater_hours = id_place_mater_hours * id;
//             cout << "\n!!!!!!!!PRICE!!!!!!!!" << endl;
//             cout << "Price The Worker Is " << id_place_mater_hours << "$" << endl;
//             cout << "Price The Workers Is " << all_id_place_mater_hours << "$" << endl;
//         }
//         void how_s(){
//             id_speed_pl_hours = id_speed_pl_hour * hour;
//             all_id_speed_pl_hours = id_speed_pl_hours * id;
//             cout << "\n!!!!!!!!SPEED!!!!!!!!" << endl;
//             cout << "In " << hour << " Hour The One Worker will Make " << id_speed_pl_hours << " Tiles, And All Worker " << all_id_speed_pl_hours << " Tiles." <<endl;
//             if ( id_speed_pl_hours >= how_pl )
//                 cout << "Note: Only One Worker Can Complete The Work In Time, You Don't Need Other Workers!!!" << endl;
//         }
// };

// int main () {

//     De data;
//     data.how_p();
//     data.how_i();
//     data.how_s();
// return (0);

// }










// #include <iostream>
// using namespace std;
// class Worker1{
//     private:
//         string name;
//         int salary;
//     public:
//         Worker1(){
//             cout << "Enter name: ";
//             cin>>name;
//             cout << "\nEnter salary: ";
//             cin>>salary;
//             ss(name, salary);
//         }
//         void ss(string n,int s){
//             name = n;
//             salary = s;
//         }
//         friend void av(Worker1 i,Worker1 o,Worker1 p);
// };
// void av(Worker1 i,Worker1 o,Worker1 p){
//     int av = (i.salary+o.salary+p.salary);
//     cout << "All Workers Is " << av <<" And Average "<< av/3 << endl;
// }
// int main (){
//     Worker1 op1, op2, op3;
//     av(op1,op2,op3);
// }










// #include <iostream>
// using namespace std;

// class Student{
//     protected:
//         string name = "Unknown";
//         int id = 0,age = 0,grade = 0;
//     public:
//         Student(){
//             cout << "Enter Name: ";
//             cin>>name;
//             cout << "Enter Id And Age And Grade: ";
//             cin>>id>>age>>grade;

//         }
//         friend class University;
// };
// class University{
//     public:
        
//         void print(Student p){
//             cout << "The Name Is " << p.name << " \nAnd the Id Is " << p.id << " \nAnd The Age Is " << p.age << " \nAnd The Grade Is " << p.grade << endl;
//         }
// };
// int main (){
//     Student e;
//     University u;
//     u.print(e);
    
// }









// #include <iostream>
// using namespace std;

// class F{
//     public:
//         void p(){
//             cout << "F" << endl;
//         }
        
// };
// int main(){
//     int g = 5;
    
//     for (int i = 0; i < g; i++){
//         F f[i];f[i].p();
//     }
// }









// #include <iostream>
// using namespace std;
// const int ii = 5;
// class Students{
//     private:
//         int grades = 0;
//     public:
//         Students (){
//             cout << "Enter grade: ";
//             cin>>grades; 
//         }
//         friend void dd(Students w[ii]);
// };
// void dd(Students w[ii]){
//     int sum = 0;
//     for (int i = 0; i < ii; i++){
//         sum+=w[i].grades;
//         cout << w[i].grades << endl;
//     }
//     cout << sum/ii << endl;
// }
// int main(){
 
//     Students a[ii];
//     dd(a);
// }










// #include <iostream>
// using namespace std;

// class D{
//     private:
//        int i = 0;
//     public:
//         D(){
//             cout << "Enter D : ";
//             cin >> i;
//         }
//         void operator == (D a){
//             if (a.i == i)
//                 cout << a.i << " = " << i << endl;
//             else
//                 cout << a.i << " != " << i << endl;
//         }
//         static void print (){cout << "--------------------------------" << endl;}
// };
// int main (){
    
//     D::print();
//     D e;
//     D q;
//     e==q;
// }










// #include <iostream>
// using namespace std;

// class A{
   
        
//     public:
//         static int s;
//         A(){
//             s++;
//         }
// };
// int A::s = 0;
// int main (){
//     int a = 0;
//     cout << "How The Number Opject : ";
//     cin >> a;
//     A e[a];
//     if (A::s == 0){
//         cout << "No Zero!!!!" << endl;
//         return (0);
//     }
//     cout << "The Number Opject Is " << A::s;
// }










// #include <iostream>
// using namespace std;
// class Sum{
//     private:
//         int x = 0;
//     public:
//         Sum() {
//             cout << "Enter x: " << endl;
//             cin >> x;
//         }
//         void operator +(Sum e){
//             cout << e.x + x;
//         }
// };
// int main (){
//     Sum f,g;
//     g+f;

// }










// #include <iostream>
// using namespace std;
// class From{
//     private:
//         string name = "";
//     public:
//         From() {
//             cout << "Enter x: " << endl;
//             cin >> name;
//         }
//         void op (From e){
//             cout << e.name + name << endl;
//         }
// };
// int main (){
//     From f,g;
//     f.op(g);
    

// }










// #include <iostream>
// using namespace std;
// class From{
//     private:
//         int n= 0;
//     public:
//         From() {
//             cout << "Enter n: " << endl;
//             cin >> n;
//         }
//         void operator ++(int){
//             cout << ++n << endl;
//         }
//         void operator ++(){
//             cout << ++n << endl;
//         }
//         void operator +=(int m){
//             n+=m;
//             cout << n << endl;
//         }
// };
// int main (){
//     From f;
//     f ++;
//     ++ f;
//     f += 6;
    
// }













// #include <iostream>
// using namespace std;

// class S{
//     private:
//         int n = 0;
//     public:
//         S():n(8){}
//         void gg(){
//             cout << n <<endl;
//         }
//         S operator ++(){
//             S h;
//             h.n = ++n;
//             return h;
//         }
// };
// int main(){
    
//     S f,d;
    
//     f = ++d;
//     d.gg();
//     f.gg();
// }











// #include <iostream>
// using namespace std;

// class Count{
//     private:
//         int v = 0;
//     public:
//         void o(int e) {
//             v = e;
//         }
//         Count operator +(Count y) {
//             Count s;
//             s.v = v + y.v;
//             return s;
//         }
//         void p(){
//         cout << v << endl;}
// };
// int main() {
//     Count re,co1,co2;
//     co1.o(5);
//     co2.o(4);
//     re = co1 + co2;
//     re.p();
    
// }











// #include <iostream>
// using namespace std;

// void screen(string x,int y,string name){
//     if (x == "up"){//Direction The Line.
//         int w = 0;//Number The Line In Screen.
//         for (int s = 1000;s <= y;s+=1000){
//             w++;
//             }
//         for (int i = 0; i < w; i++){
//             for (int j = 0; j < i; j++){
//                 cout << "=";
//             }
//             cout << "*";
//             if (i == 10){
//                 cout << endl;
//                 break;}
//         }
        
//         cout << "#_Name : " << name << endl;
//     }
    
//     if (x == "down"){//Direction The Line.
//         int w = 0;//Number The Line In Screen.
//         for (int s = 1000;s <= y;s+=1000){
//             w++;
//             }
//         for (int i = 0; i < w; i++){
//             for (int j = 0; j < i; j++){
//                 cout << "*";
//             }
//             cout << "=";
//             if (i == 10){
//                 cout << endl;
//                 break;}
//         }
        
        
//     }

// }

// void print1(string &name,string &password){
    

//     cout << "@@@@@ Hello World! @@@@@" << endl;
    
    
//         cout << "Enter User Name : ";
//         cin >>name;
//         cout << "Enter The Password : ";
//         cin >>password;
    
    
// }
// void print2(){
//     cout << "\r\t:::::::: Select ::::::::" << endl;
//     cout << "\t\t1-Balance\n\t\t2-Deposit\n\t\t3-Withdraw\n\t\t4-Exit" << endl;
// }
// void balance(int &monay,string &direction_up,string &direction_down,string &name){
//     char c;
//     cout << "\n\n\n\t\tThe Balance : [ " << monay << " ]\n\n" << endl;
//     cout << "Enter On Any Char For Exit ``";
//     cin>>c;
//     if (c){
//         screen(direction_up,monay,name);
//         print2();   
//         screen(direction_down,monay,name);

//     }

// }
// void deposit(int &monay,string &direction_up,string &direction_down,string &name){
//     char c;
//     int de;
//     cout << "###_The Balance : [ " << monay << " ]\n\n" << endl;
//     e:cout << "How Need You To Deposit : " << endl;
//     cin >> de;
//     if (int(de)){
//         monay += de;
//     cout << "Add To You Balance (\"" << de <<  "\") The Balance Now : [ " << monay << " ]\n\n" << endl;
//     }
//     else {
//         cout << "Enter Numper Only." << endl;
//         goto e;
//     }
//     cout << "Enter On Any Char For Exit ``";
//     cin>>c;
//     if (c){
//         screen(direction_up,monay,name);
//         print2();   
//         screen(direction_down,monay,name);

//     }

// }
// void withdraw(int &monay,string &direction_up,string &direction_down,string &name){
//     char c;
//     int wi;
//     cout << "###_The Balance : [ " << monay << " ]\n\n" << endl;
//     e:cout << "How Need You To Withdraw : " << endl;
//     cin >> wi;
//     if (int(wi)){
//         monay -= wi;
//         cout << "Add To You Withdraw (\"" << wi <<  "\") The Balance Now : [ " << monay << " ]\n\n" << endl;
//     }
//     else {
//         cout << "Enter Numper Only." << endl;
//         goto e;
//     }
//     cout << "Enter On Any Char For Exit ``";
//     cin>>c;
//     if (c){
//         screen(direction_up,monay,name);
//         print2();   
//         screen(direction_down,monay,name);

//     }

// }

// int main (){
//     string direction_up = "up";
//     string direction_down = "down";
//     string name = " ";
//     string password = " ";
//     int sl = 0;
//     int monay = 0;
//     int select = 0;
//     bool bo = true;
//     print1(name,password);
//     do{
//         screen(direction_up,monay,name);
//         print2();   
//         screen(direction_down,monay,name);
//         w:cout << "Enter The  Number : " << endl;
//         cin >> select;
//         if (!(int(select))){
//             cout << "Gooood Bye Because You Did Not Enter The Numbers." << endl;
//             return false;
//         }

        
//         switch (select)
//         {
//         case 1:
//             balance(monay,direction_up,direction_down,name);
//             break;
        
//         case 2:
//             deposit(monay,direction_up,direction_down,name);
//             break;
        
//         case 3:
//             withdraw(monay,direction_up,direction_down,name);
//             break;
        
//         case 4:
//             cout << "Thank you!" << endl;
//             bo = false;
//             break;
        
//         default:
//             cout << "Enter Of 1 To 4 Only And Number Onlyyy." << endl;
//             goto w;
//             break;
//         }

//     }while (bo);
// }









