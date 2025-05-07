// Bài 615: Hãy khai báo kiểu dữ liệu để biểu diễn thông tin của một thí sinh (THISINH). Biết rằng một thí sinh gồm những thành phần sau:
//
// Mã thí sinh: chuỗi tối đa 5 ký tự
// Họ tên thí sinh: chuỗi tối đa 30 ký tự
// Điểm toán: kiểu số thực
// Điểm lý: kiểu số thực
// Điểm hóa: kiểu số thực
// Điểm tổng cộng: kiểu số thực
// Sau đó viết hàm nhập, xuất cho kiểu dữ liệu này
#include <iostream>
using namespace std;

struct ThiSinh {
    char maThiSinh[5];
    char hoTenThiSinh[30];
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTongCong;
};

void nhapThiSinh(ThiSinh &ts);

void xuatThiSinh(ThiSinh ts);

int main() {
    ThiSinh ts;
    nhapThiSinh(ts);
    xuatThiSinh(ts);
    return 0;
}

void nhapThiSinh(ThiSinh &ts) {
    cout << "Nhap ma thi sinh: ";
    cin.getline(ts.maThiSinh, sizeof(ts.maThiSinh));
    cout << "Nhap ho ten thi sinh: ";
    cin.getline(ts.hoTenThiSinh, sizeof(ts.hoTenThiSinh));
    cout << "Nhap diem toan: ";
    cin >> ts.diemToan;
    cout << "Nhap diem ly: ";
    cin >> ts.diemLy;
    cout << "Nhap diem hoa: ";
    cin >> ts.diemHoa;
    ts.diemTongCong = ts.diemToan + ts.diemLy + ts.diemHoa;
}

void xuatThiSinh(ThiSinh ts) {
    cout << "Ma thi sinh: " << ts.maThiSinh << endl;
    cout << "Ho ten thi sinh: " << ts.hoTenThiSinh << endl;
    cout << "Diem toan: " << ts.diemToan << endl;
    cout << "Diem ly: " << ts.diemLy << endl;
    cout << "Diem hoa: " << ts.diemHoa << endl;
    cout << "Diem tong cong: " << ts.diemTongCong << endl;
}
