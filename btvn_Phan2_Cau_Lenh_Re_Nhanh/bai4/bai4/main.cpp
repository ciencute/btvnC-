#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int month;
    cout<<"nhap thang ";
    cin>>month;
    if (month%2==0) {
        if(month==2){
            cout<<"thang "<<month<<" co 28 ngay"<<endl;
            return 0;
        }
        cout<<"thang "<<month<<" co 30 ngay"<<endl;
    }else{
        cout<<"thang "<<month<<" co 31 ngay"<<endl;
    }
}
