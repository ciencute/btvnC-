
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    float donGia;
    int soLuong;
    float tien,thueGiaTriGiaTang;
    cout<<"nhap don gia"<<endl;
    cin>>donGia;
    cout<<"nhap so luong"<<endl;
    cin>>soLuong;
    tien = soLuong * donGia;
    cout<<"Tien = "<<tien<<endl;
    thueGiaTriGiaTang = tien * 0.1;
    cout<<"Thue Gia Tri Gia Tang = "<<thueGiaTriGiaTang<<endl;
    return 0;
}
