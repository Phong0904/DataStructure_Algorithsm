#include<bits/stdc++.h>
using namespace std;
const int Max = 1000;

void nhap(int a[], int n){
	for(int i=0; i < n; i++){
		cout << "Nhap vao phan tu thu " << i << ": ";
		cin >> a[i];
	}
}

void xuat(int a[], int n){
	for(int i=0; i < n; i++){
		cout << a[i] << " ";
	}
}

int tong(int a[], int n, int index = 0){
	if(index > n){
		return 0;
	}
	int tinhtong = tong(a, n, index + 1);
	if(a[index] % 2 == 0){
		tinhtong += a[index];
	}
	return tinhtong;
}

int main(){
	int a[Max]; int n; cout << "Nhap vao so phan tu: "; cin>>n;
	nhap(a,n);
	cout << "Mang la: "; xuat(a,n);
	
	cout << "\nTong cac so chan trong mang la: " << tong(a,n) << endl;
	return 0;
}
