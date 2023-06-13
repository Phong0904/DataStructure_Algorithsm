#include<bits/stdc++.h>
using namespace std;
const int Max = 1000;
class Stack{
	private:
		int a[Max]; int top;
	public:
		Stack(){
			top = -1;
		}
		bool isEmpty(){
			return top == -1;
		}
		bool isFull(){
			return top == Max - 1;
		}
		void push(int value){
			if(isFull()){
				cout << "Stack day";
			}
			top++;
			a[top] = value;
			cout << "Da them " << value << " vao Stack";
		}
		void pop(){
			if(isEmpty()){
				cout << "Stack rong";
			}
			int valueR = a[top];
			top--;
			cout << "Da xoa " << valueR << " ra Stack";
		}
		void inStack(){
			if(isEmpty()) cout << "Stack rong";
			cout << "Stack la: ";
			for(int i = 0; i <= top; i++){
				cout << a[i] << " ";
			}
		}
};

int main(){
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	
	st.inStack();
	
	st.pop();
	
	st.inStack();
	return 0;
}
