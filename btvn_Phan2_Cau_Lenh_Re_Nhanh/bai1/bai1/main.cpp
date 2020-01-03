#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b,c,d;
    cout<<"nhap a = ";
    cin>>a;
    cout<<"nhap b = ";
    cin>>b;
    cout<<"nhap c = ";
    cin>>c;
    cout<<"nhap d = ";
    cin>>d;
    (a>b && a>c && a>d) && cout<<"Max = "<<a<<endl;
    (b>a && b>c && b>d) && cout<<"Max = "<<b<<endl;
    (c>a && c>b && c>d) && cout<<"Max = "<<c<<endl;
    (d>a && d>c && d>b) && cout<<"Max = "<<d<<endl;
    
    (a<b && a<c && a<d) && cout<<"Min = "<<a<<endl;
    (b<a && b<c && b<d) && cout<<"Min = "<<b<<endl;
    (c<a && c<b && c<d) && cout<<"Min = "<<c<<endl;
    (d<a && d<c && d<b) && cout<<"Min = "<<d<<endl;
    return 0;
}
