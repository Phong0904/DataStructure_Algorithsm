#include<bits/stdc++.h>
using namespace std;
const int Max = 1000;

void nhap(double a[], int n){
	for(int i = 0; i < n; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];  
	}
}

void xuat(double a[], int n, int index = 0){
	if(index >= n) return;
	cout << a[index] << " "; xuat(a, n, index + 1);
}

double GTLN(double a[], int n){
	if(n == 1) return a[0];
	double GT = GTLN(a, n - 1);
	if(a[n - 1] > GT) return a[n - 1];
	else return GT;
}

int main(){
	double a[Max]; int n; cin >> n;
	nhap(a, n); cout << "Mang la: "; xuat(a, n);
	cout << "Gia tri lon nhat trong mang la: " << GTLN(a, n) << endl;
	return 0;
}
