#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
struct node{
	int date;
	int month;
	int year;
	string time;
	node* next;
};
class list{
	private:
		node*head;
		node*tail;
	public:
		/// constructer
		list(){
			head=NULL;
			tail=NULL;
		}
		///destructer
		~list(){
		}
		node *returning_Head(){
			return head;
		}
		////insert sorted function
		void insert(int x,int y,int z,string w){
			node*newnode=new node();
			newnode->date=x;
			newnode->month=y;
			newnode->year=z;
			newnode->time=w;
			newnode->next=NULL;
			node* curr=head;
			node* prev;
			if(head==NULL){
				//cout<<"yes"<<endl;
				head=newnode;
			}
			else{
				while(curr->next !=NULL && curr->date<x){
					prev=curr;
					curr=curr->next;
				}
				if(curr->next==NULL && curr->date<x){
					curr->next=newnode;
				}
				else if(curr==head){
					newnode->next=head;
					head=newnode;
				}
				else{
					prev->next=newnode;
					newnode->next=curr;
				}
				
			}
		}
		////delete key at node
		void delete_node(int key){
			node*temp1=head;
			node*temp2;
			if(head->date==key){
				head=head->next;
				delete temp1;
				temp1=NULL;
			}
			else{
			
			while(temp1->date != key){
				temp2=temp1;
				temp1=temp1->next;
			}
			temp2->next=temp1->next;
			delete temp1;
			temp1=NULL;			
		}
	}
	///// delete at position
		void delete_at_position(int node1){
			node*temp1=head;
			node*temp2;
			if(node1==1){
				head=head->next;
				delete temp1;
			temp1=NULL;
			}
			else{
			
			for(int i=1;i<node1;i++){
				temp2=temp1;
				temp1=temp1->next;
			}
			temp2->next=temp1->next;
			delete temp1;
			temp1=NULL;
		}
		}
		///   print without parameter
		void print(){
			node*curr;
			curr=head;
			if(curr->next==NULL){
				cout<<curr->date<<" , ";
			}
			else{
			
				while(curr->next!=NULL){
					
					cout<<curr->date<<","<<curr->month<<","<<curr->year<<","<<curr->time<<endl;
					curr=curr->next;
				}
				cout<<curr->date<<","<<curr->month<<","<<curr->year<<","<<curr->time<<endl;
			}
		}
		
		
		
		
		//  print function with parameter 
		void print(node*start){
			node*curr;
			curr=start;
			if(curr->next==NULL){
				cout<<curr->date<<endl;
			}
			else{
			
				while(curr->next!=NULL){
					
					cout<<curr->date<<" , ";
					curr=curr->next;
				}
				cout<<curr->date<<endl;
			}
		}
};
