#include<bits/stdc++.h>
using namespace std;
const int Max = 50;

void nhap(int a[], int n){
	for(int i=0; i < n; i++){
		cout << "Nhap vao phan tu thu " << i << ": ";
		cin >> a[i];
	}
}

void xuat(int a[], int n, int index = 0){
	if(index >= n){
		return;
	}
	cout << a[index] << " ";
	xuat(a, n, index + 1);
}

int main(){
	int a[Max]; int n; cin >> n;
	nhap(a, n);
	cout << "mang la: "; xuat(a, n);
	return 0;
}
