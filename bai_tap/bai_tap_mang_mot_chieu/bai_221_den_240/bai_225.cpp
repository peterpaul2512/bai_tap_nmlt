// ●	Bài 225: Đếm số lượng giá trị lớn nhất có trong mảng
#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int demLonNhat(int a[],int n);
int main()
{
    int Array[MAX];
    int nSize;
    nhapMang(Array,nSize);
    cout<<endl;
    xuatMang(Array,nSize);
    cout<<"So luong gia tri lon nhat: "<<demLonNhat(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
    cout<<"Nhap so luong phan tu: ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
}
void xuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}
int demLonNhat(int a[],int n)
{
    int dem = 0;
    for(int i = 1; i < n-1; i++)
    {
        if(a[i] > a[i-1] && a[i] > a[i+1] )
        {
            dem++;
        }
    }
    return dem;
}