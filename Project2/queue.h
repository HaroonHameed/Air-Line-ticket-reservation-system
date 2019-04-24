#include <iostream>
using namespace std;


struct Node{
	string data;
	Node* next;
}; 
class queue{
private:
	Node* front;
	Node* rear;
public:
	queue(){
		front = NULL;
		rear = NULL;
	}

	void Enqueue(string x) {
		Node* temp = new Node;
		temp->data =x; 
		temp->next = NULL;
		if(front == NULL && rear == NULL){
			front = rear = temp;
			return;
	}
	rear->next = temp;
	rear = temp;
}

	string Dequeue() {
	Node* temp = front;
	if(front == NULL) {
		cout << "Queue is empty"<<endl;
		//return ;
	}
	if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	return temp->data;
	delete(temp);
}
bool is_empty() {
	if(front == NULL) {
		cout << "Queue is empty\n";
		return true ;
	}
	else return false;
}

void Print() {
	struct Node* temp = front;
	while(temp != NULL) {
		cout << temp->data<<" ";
		temp = temp->next;
	}
	cout << endl;
}
};