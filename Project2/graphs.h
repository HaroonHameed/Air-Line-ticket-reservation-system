#pragma once
#include<iostream>
#include<stdio.h>
#include "stack.h"

#include <string>
using namespace std;
/*struct edge_node;
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
};*/
class graph{
	private:
		vertex_node*graph_head;
		int no_of_cities;
	public:
		graph(){
			graph_head=NULL;
		}
		
		bool is_empty(){
			if(graph_head==NULL){
				return true;
			}
			else{
				return false;
			}
		}
		int ret_no_of_cities(){
			return no_of_cities;
		}
		void ADD_city(string city_name){
			vertex_node* node= new vertex_node;
			no_of_cities++;
			node->city=city_name;
			node->next_vertex=NULL;
			node->first_edge=NULL;
			if(is_empty()){
				graph_head=node;

			}
			else{
				vertex_node*temp;
				temp=graph_head;
				while(temp->next_vertex!=NULL){
					temp=temp->next_vertex;
				}
				temp->next_vertex=node;
				temp=temp->next_vertex;

			}
		}
		void ADD_vertex(string from_vertex,string to_vertex,int weight,int day,int month,int year,string time){
			vertex_node*temp_from=graph_head;
			vertex_node*temp_to=graph_head;
			edge_node*node=new edge_node;
			node->weight=weight;
			node->next_edge=NULL;
			node->timings.insert(day,month,year,time);
			while(temp_from->city!=from_vertex){
				temp_from=temp_from->next_vertex;
			}
			
			while(temp_to->city!=to_vertex){
				temp_to=temp_to->next_vertex;
				
			}
		
			node->pt_vertex=temp_to;
			if(temp_from->first_edge==NULL){
				temp_from->first_edge=node;

			}
			else{
				edge_node*temp=temp_from->first_edge;
				edge_node*save=temp;
				if(temp->pt_vertex->city==to_vertex ){
					temp->timings.insert(day,month,year,time);
					goto label;
				}
				while(temp!=NULL){
					if(temp->pt_vertex->city==to_vertex){
						temp->timings.insert(day,month,year,time);
						goto label;
					}
					save=temp;
					temp=temp->next_edge;
				}
				save->next_edge=node;
				label:;
			}	
		}
		stack available_flights(string current_city){
			stack available;
			vertex_node*temp=graph_head;
			while(temp->city!=current_city){
				temp=temp->next_vertex;
			}
			if(temp->first_edge!=NULL){
				available.push(temp->first_edge);
				cout<<temp->first_edge->pt_vertex->city<<" "<<temp->first_edge->weight<<endl;
				temp->first_edge->timings.print();
				cout<<endl;
				edge_node*temp2=temp->first_edge;
				while(temp2->next_edge!=NULL){
					temp2=temp2->next_edge;
					available.push(temp2);
					cout<<temp2->pt_vertex->city<<" "<<temp2->weight<<endl;
					temp2->timings.print();
				}
			}
			else{
				cout<<"no flights available"<<endl;
			}
			return available;
		}

		list return_timing(string from,string to){
			vertex_node*temp=graph_head;
			while(temp->city!=from){
				temp=temp->next_vertex;
			}
			edge_node*temp1=temp->first_edge;
			while(temp1->pt_vertex->city!=to){
				temp1=temp1->next_edge;
			}
			return temp1->timings;
			
		}
		int return_fare(string from,string to){
			vertex_node*temp=graph_head;
			while(temp->city!=from){
				temp=temp->next_vertex;
			}
			edge_node*temp1=temp->first_edge;
			while(temp1->pt_vertex->city!=to){
				temp1=temp1->next_edge;
			}
			return temp1->weight;
		}
		vertex_node*vertices(){
			return graph_head;
		}
		bool is_avail(string from,string to){
			vertex_node*temp=graph_head;
			while(temp->city!=from){
				temp=temp->next_vertex;
			}
			edge_node*temp1=temp->first_edge;
			while(temp1!=NULL){
				if(temp1->pt_vertex->city==to){
				return true;
				}
				temp1=temp1->next_edge;
			}
			return false;
		}
		
		~graph(){
			graph_head=NULL;
		}
};

