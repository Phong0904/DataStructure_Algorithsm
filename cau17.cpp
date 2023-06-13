#include<bits/stdc++.h>
using namespace std;
const int Max = 50;

void nhap(double a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];  
	}
}

void xuat(double a[], int n, int index = 0){
	if(index >= n) return;
	cout << a[index] << " ";
	xuat(a, n, index + 1);
}

double sum(double a[], int n, int index = 0){
	if(index >= n) return 0;
	double tong = sum(a, n, index + 1);
	tong += a[index];
	return tong;
}

int main(){
	double a[Max]; int n; cin >> n;
	nhap(a, n); cout << "Mang la: "; xuat(a, n);
	cout << "Tong duong la: " << sum(a, n) << endl;
	return 0;
}
