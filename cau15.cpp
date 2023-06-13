#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * prev;
	struct Node * next;
};
typedef Node node;

struct doublyLinkedList{
	node * head;
	node * tail;
};
