#include <iostream>
using namespace std;
#include <math.h>
int main(int argc, const char * argv[]) {
    float a,b,c,x=0,detal=0,x1 = 0, x2 = 0;
    cout<<"nhap a "<<endl;
    cin>>a;
    cout<<"nhap b "<<endl;
    cin>>b;
    cout<<"nhap c "<<endl;
    cin>>c;
    if(a==0){
        if (b!=0) {
            x = (-c)/b;
            cout<<"Phuong trinh co 1 nghiem x = "<<x<<endl;
            return 0;
        }
        if(b==0&&c==0){
            cout<<"Phuong trinh co vo so nghiem ";
            return 0;
        }
        if (a==0 &&b!=0) {
            cout<<"Phuong trinh vo nghiem ";
            return 0;
        }
    }else{
        detal =  (b*b) - 4 *a*c;
        if(detal>0){
            x1 =(-b + sqrt(detal))/(2*a);
            x2 =(-b - sqrt(detal))/(2*a);
            cout<<"phuong trinh co 2 nghiem x 1 = "<<x1<<" x2 = "<<x2<<endl;
            return 0;
        }
        if (detal==0) {
            x = (-b/(2*a));
            cout<<"Phuong trinh co nghiem kep x1 = x2 ="<<x<<endl;
        }
        if (detal<0) {
            cout<<"Phuong trinh vo nghiem ";
            return 0;

        }
    }
}
