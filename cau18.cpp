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

bool allam(double a[], int n, int index = 0){
	if(index >= n) return true;
	if(a[index] >= 0) return false;
	return allam(a, n, index + 1);
}

int main(){
	double a[Max]; int n; cin >> n;
	nhap(a, n); cout << "Mang la: "; xuat(a, n);
	bool result = allam(a, n);
	if(result == false){
		cout << "Mang khong toan am" << endl;
	}else{
		cout << "Mang toan am" << endl;
	}
	return 0;
}
