// Xét 1 mảng các phân số
// a. Viết hàm lưu mảng phân số xuống tập tin
// b. Viết hàm đọc mảng phân số từ tập tin
#include <iostream>
#include <fstream>
using namespace std;

struct PhanSo {
    int tu;
    int mau;
};

// Kiểm tra mẫu có bằng 0 không
bool kiemTraMau(int mau) {
    return mau != 0;
}

void nhapMangPhanSo(PhanSo arr[], int &n) {
    cout << "Nhap so luong phan so: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << endl;
        cout << "Tu: ";
        cin >> arr[i].tu;
        do {
            cout << "Mau (khong duoc bang 0): ";
            cin >> arr[i].mau;
        } while (!kiemTraMau(arr[i].mau)); // Kiểm tra mẫu phải khác 0
    }
}

void inMangPhanSo(PhanSo arr[], int n) {
    cout << "Mang phan so:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i].tu << "/" << arr[i].mau << endl;
    }
}

void luuMangPhanSo(PhanSo arr[], int n, const char *filename) {
    ofstream file(filename);  // Mở file để ghi
    if (file.is_open()) {     // Kiểm tra xem file đã được mở thành công chưa
        file << n << endl;    // Ghi số lượng phần tử của mảng vào file
        for (int i = 0; i < n; i++) {  // Duyệt qua tất cả các phần tử của mảng
            file << arr[i].tu << " " << arr[i].mau << endl;  // Ghi tử và mẫu của từng phần tử vào file
        }
        file.close();  // Đóng file sau khi ghi xong
        cout << "Da luu mang phan so vao tap tin " << filename << endl;  // Thông báo khi lưu xong
    } else {
        cout << "Khong the mo tap tin " << filename << " de ghi" << endl;  // Thông báo nếu không thể mở file
    }
}

bool docMangPhanSo(PhanSo arr[], int &n, const char *filename, int maxSize) {
    ifstream file(filename);  // Mở file để đọc
    if (file.is_open()) {     // Kiểm tra xem file có được mở thành công không
        file >> n;            // Đọc số lượng phần tử của mảng từ file
        if (n > maxSize) {    // Kiểm tra xem kích thước mảng có vượt quá giới hạn không
            cout << "Kich thuoc mang vuot qua gioi han" << endl;
            return false;     // Nếu mảng quá lớn, trả về false
        }
        for (int i = 0; i < n; i++) {  // Duyệt qua tất cả phần tử mảng
            file >> arr[i].tu >> arr[i].mau;  // Đọc tử và mẫu của mỗi phân số từ file
        }
        file.close();  // Đóng file sau khi đọc xong
        cout << "Da doc mang phan so tu tap tin " << filename << endl;
        return true;    // Trả về true nếu việc đọc thành công
    } else {
        cout << "Khong the mo tap tin " << filename << " de doc" << endl;  // Thông báo lỗi nếu không thể mở file
        return false;  // Trả về false nếu không thể mở file
    }
}

int main() {
    const int MAX_SIZE = 100;
    PhanSo arr[MAX_SIZE];
    int n;

    // Nhập và lưu mảng phân số
    nhapMangPhanSo(arr, n);
    const char *filename = R"(D:\Admin\Documents\CNTT_HCMUS\nhap_mon_lap_trinh\luyen_tap_c++\on_thi\2023_2024\phan_so.txt)";
    luuMangPhanSo(arr, n, filename);

    // Đọc và in mảng phân số
    PhanSo arr2[MAX_SIZE];
    int n2;
    if (docMangPhanSo(arr2, n2, filename, MAX_SIZE)) {
        inMangPhanSo(arr2, n2);
    }

    return 0;
}
