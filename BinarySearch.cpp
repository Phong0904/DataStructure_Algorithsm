// tim kiem nhi phan(BinarySearch)

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int x){
	int left = 0; int right = n - 1;
	int mid;
	
	do{
		mid = (left + right) / 2;
		if(a[mid] == x){
			return mid;
		}else if(a[mid] < x){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}while(left <= right);
	return -1;

}

int main(){
	int a[] = { 2, 3, 4, 10, 40 };
	int n = 5;
	int x; cin >> x;
	
	int result = BinarySearch(a, n, x);
	if(result == - 1){
		cout << "Khong tim thay" << endl;
	}else{
		cout << x << " nam tai vi tri thu " << result << endl;
	}
	
	return 0;
}
