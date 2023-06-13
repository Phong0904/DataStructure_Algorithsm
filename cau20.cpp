#include<bits/stdc++.h>
using namespace std;
const int Max = 100;

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

void swap(int &a, int &b){
	int temp = a; a = b; b = temp;
}

void xapsep(double a[], int n){
	if(n <= 1) return;
	int indexMin = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < a[indexMin]){
			indexMin = i;
		}
	}
	swap(a[0], a[indexMin]);
	xapsep(a + 1, n - 1);
}

int main(){
	double a[Max]; int n; cin >> n;
	nhap(a, n); cout << "Mang la: "; xuat(a, n);
	xapsep(a, n); cout << "Mang sau khi sap xep la: "; xuat(a, n);
	return 0;
}
