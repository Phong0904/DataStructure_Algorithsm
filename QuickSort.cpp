// sap xep nhanh(Quick Sort)

#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int left, int right){
	int pivot = a[right];
	
	int i = left - 1;
	for(int j = left; j < right; ++j){
		if(a[j] < pivot){
			++i;
			swap(a[i], a[j]);
		}
	}
	++i;
	swap(a[i], a[right]);
	return i;
}

void QuickSort(int a[], int left, int right){
	if(left >= right){
		return;
	}
	
	int pivot = partition(a, left, right);
	
	QuickSort(a, left, pivot - 1);
	
	QuickSort(a, pivot + 1, right);
	
}

int main(){
	int a[1000];
	int n; cin >> n;
	
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 1000;
	}
	cout << "Mang sau khi sap la: ";
	QuickSort(a, 0, n - 1);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
