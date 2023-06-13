#include<bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i){
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int largest = i;
	if(left < n && a[left] > a[largest]){
		largest = left;
	}
	if(right < n && a[right] > a[largest]){
		largest = right;
	}
	if(largest != i){
		swap(a[largest], a[i]);
		heapify(a, n, largest);
	}
}

void HeapSort(int a[], int n){
	for(int i = n / 2 + 1; i >= 0; i--){
		heapify(a, n, i);
	}
	for(int i = n - 1; i >= 0; i--){
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}

int main(){
	int a[1000]; int n; cin >> n;
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 1000;
	}
	HeapSort(a, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
