// chen truc tiep(insertion sort)

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
	int temp = a; a = b; b = temp;
}

void InsertionSort(int a[], int n){
	for(int i = 0; i < n; i++){
		int j = i;
		while(j > 0 && a[j] <= a[j - 1]){
			swap(a[j], a[j - 1]);
			j--;
		}
	}
	
}

int main(){
	int a[] = { 41, 23, 4, 14, 2, 0, 56, 1 };
	int n = 8;
	
	cout << "Mang sau khi sap la: ";
	InsertionSort(a, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
