// tim kiem tuyen tinh(LinearSearch)

#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[] =  { 2, 3, 4, 10, 40 };
	int n = 5;
	int x; cin >> x;
	
	int result = LinearSearch(a, n, x);
	if(result == -1){
		cout << "Khong tim thay" << endl;
	}else{
		cout << x << " nam tai vi tri thu " << result << endl;
	}
	
	return 0;
}
