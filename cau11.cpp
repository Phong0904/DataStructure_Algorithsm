#include<bits/stdc++.h>
using namespace std;
const int Max = 50;
void nhap(double a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];  
	}
}

void xuat(double a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}

int count(double a[], int n, int index = 0){
	if(index >= n){
		return 0;
	}
	int dem = count(a, n, index + 1);
	if(a[index] > 0){
		dem++;
	}
	return dem;
}

int main(){
	double a[Max]; int n; cin >> n;
	nhap(a, n); cout << "Mang la: "; xuat(a, n);
	cout << "Trong mang co " << count(a, n) << " gia tri duong" << endl;
	return 0;
}
