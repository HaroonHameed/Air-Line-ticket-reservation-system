#include<iostream>
#include<stdio.h>
#include <string>
#include <fstream>

using namespace std;
struct pass{
	int passport;
	string from;
	string to;
	string first;
	string last;
	string phone;
	string cc;
	int id;
};

class hashing{
	private:
		int lengtharray;
		pass array[100];
	public:			
		int hash1(int key ){
			return (key % 99); 
		}
		int hash2(int key){
			return 5 - (key % 5);
		}
		void null(){
			for(int i = 0; i < 99; i++){
				array[i].first = "";}
		}

		int insertqudratic(pass key){
			int d=key.passport;
			int value = hash1(key.passport);
			int i = 1;
			if(array[value].first == ""){
				array[value] = key;
				lengtharray ++;
			}
			else{
				while(array[value].first != ""){
				value = (hash1(key.passport)+ pow(i,2));
				value = value % 99;
				i++;
			}
			array[value] = key;
				lengtharray ++;
			}
			return value;
		}
		pass retrivequadratic(int key){
			int value = hash1(key);
			pass temp;
			int start = value;
			int i = 1;
			bool more_search = true;
			bool found = true;
			do{
				if(array[value].passport == key || array[value].first==""){
					more_search = false;
								}
				else{
					value = (hash1(key)+ pow(i,2));
					value = value % 99;
					i++;
					}}
			while(value != start && more_search);
			found = (array[value].passport == key);
				if(found){
					cout << " key found " << endl;
					temp = array[value];}
					return temp;}
		
		void deletequadratic(int key){
			int value = hash1(key);
			int start = value;
			int i = 1;
			bool more_search = true;
			bool found = true;
			do{
				if(array[value].passport == key || array[value].first == ""){
					more_search = false;}
				else{
					value = (hash1(key)+ pow(i,2));
					value = value % 99;
					i++;
					}
			}
			while(value != start && more_search);
			found = (array[value].passport == key);
				if(found){
					array[value].first = "";
				}
			}

	void hashing:: passenger_retreive(int key){
			int arr_size = 10;
			int i = 0;
			while(key != array[i].passport || i != arr_size){
				if(key == array[i].passport){ 
					cout << array[i].passport;
					break;
				}
				i++;
			}
			cout << endl;
	}
};
