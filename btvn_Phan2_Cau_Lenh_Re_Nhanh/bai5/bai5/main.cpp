#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,c;
    cout<<"nhap do dai canh a "<<endl;
    cin>>a;
    cout<<"nhap do dai canh b "<<endl;
    cin>>b;
    cout<<"nhap do dai canh c "<<endl;
    cin>>c;
    if (a+b>c && b+c>a && c+a>b) {
        cout<<"day la mot tam giac"<<endl;
        if (a==b&&b==c) {
            cout<<"day la mot tam giac deu"<<endl;
        }
         if (a==b || b==c){
             cout<<"day la mot tam giac can"<<endl;
         }
        if ((a==b || b==c)  && (((a*a)+(b*b) == (c*c)) || ((c*c)+(a*a) == (b*b)) || ((b*b)+(c*c) == (a*a)))) {
            cout<<"day la mot tam giac vuong can"<<endl;
             
         }
        if ( ((a*a)+(b*b) == (c*c)) || ((c*c)+(a*a) == (b*b)) || ((b*b)+(c*c) == (a*a))) {
            cout<<"day la mot tam giac vuong"<<endl;
        }
    }
             return 0;
    }
