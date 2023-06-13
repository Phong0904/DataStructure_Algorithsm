#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]){
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}

int main(){
		int a[1000]; int n; cin >> n;
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		a[i] = rand() % 1000;
	}
	SelectionSort(a, n);
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
