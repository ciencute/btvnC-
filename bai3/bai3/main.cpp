#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    float dToan,dLy,dHoa;
    int tcToan,tcLy,tcHoa;
    float diemTB;
    cout<<"nhap diem toan = "<<endl;
    cin>>dToan;
    cout<<"nhap diem Ly = "<<endl;
    cin>>dLy;
    cout<<"nhap diem Hoa = "<<endl;
    cin>>dHoa;
    cout<<"nhap tin chi toan= "<<endl;
    cin>>tcToan;
    cout<<"nhap tin chi ly= "<<endl;
    cin>>tcLy;
    cout<<"nhap tin chi hoa= "<<endl;
    cin>>tcHoa;
    diemTB = ((tcToan + dToan)+(tcLy+dLy)+(tcHoa+dHoa))/3;
    cout<<"Diem trung binh = "<<diemTB<<endl;
    return 0;
}
