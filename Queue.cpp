#include<bits/stdc++.h>
using namespace std;
const int Max = 1000;
class Queue{
	private:
		int a[Max]; int front; int rear;
	public:
		Queue(){
			front = -1;
			rear = -1;
		}
		bool isEmpty(){
			return front == -1;
		}
		bool isFull(){
			return rear == Max - 1;
		}
		void push(int value){
			if(isFull()){
				cout << "Queue day";
			}
			if(isEmpty()){
				front = 0;
			}
			rear++;
			a[rear] = value;
			cout << "Them " << value << " vao Queue";
		}
		void pop(){
			if(isEmpty()) cout << "Queue rong";
			int valueR = a[front];
			if(front == rear){
				front = -1;
				rear = -1;
			}else{
				front++;
			}
			cout << "Da xoa thanh cong " << valueR << " ra Queue";
		}
		void inQueue(){
			if(isEmpty()) cout << "Queue rong";
			cout << "Queue la: ";
			for(int i = front; i <= rear; i++){
				cout << a[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	
	q.inQueue();
	
	q.pop(); q.pop();
	
	q.inQueue();
	return 0;
}
