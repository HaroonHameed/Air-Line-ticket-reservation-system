#include<iostream>
#include<stdio.h>
#include<string>
#include "timinng.h"
using namespace std;
struct edge_node;
struct vertex_node{
	string city;
	vertex_node*next_vertex;
	edge_node*first_edge;
};
struct edge_node{
	int weight;
	vertex_node*pt_vertex;
	edge_node *next_edge;
	list timings;
};
struct node1{
	edge_node*data;
	node1* next;
};
class stack{
	private:
		node1* top;
	public:
		stack(){
			top=NULL;
		}
		void push(edge_node*key){
			node1*temp=new node1;
			temp->data=key;
			temp->next=top;
			top=temp;
		}
		bool is_empty(){
			if(top==NULL){
				return true;
			}
			else{
				return false;
			}	
		}
		edge_node* pop(){
			if (!is_empty()){
				node1*temp=top;
				top=top->next;
				return temp->data;
				delete temp;
			}
			else{
				cout<<" "; 
			}
		}
		void print(){
			node1*temp=top;
			if(top!=NULL){
				while(temp!=NULL){
					cout<<endl;
					cout<<temp->data->pt_vertex->city<<" "<<temp->data->weight<<endl;
					temp->data->timings.print();
					temp=temp->next;
				}
				//cout<<temp->data<<endl;
			}
			else{
				cout<<"stack is empty"<<endl;
			}
		}
};
