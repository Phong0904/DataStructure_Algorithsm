// phuong phap doi cho truc tiep (Interchange Sort)

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
	int temp = a; a = b; b = temp;
}

void InterchangeSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[i]){
				swap(a[j], a[i]);
			}
		}
	}
}

int main(){
	int a[] = { 41, 23, 4, 14, 56, 1 };
	int n = 6;
	
	cout << "Mang sau khi sap la: ";
	InterchangeSort(a, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
