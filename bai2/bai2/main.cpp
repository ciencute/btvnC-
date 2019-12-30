#include <iostream>
using namespace std;
#define PI 3.14;
int main(int argc, const char * argv[]) {
    float chuVi,dienTich;
    float R;
    cout<<"nhap ban kinh R = "<<endl;
    cin>>R;
    chuVi = (2 * R) * PI;
    dienTich = (R * R)*PI;
    cout<<" chu vi hinh tron = "<<chuVi<<endl;
    cout<<" dien tich hinh tron = "<<dienTich<<endl;
    return 0;
}
