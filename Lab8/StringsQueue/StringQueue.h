#ifndef Queue_h
#define Queue_h

#include <string>
#include <iostream>

using namespace std;

struct Link {
	string data;
	Link *link;
};

struct Queue {
  
	Link* first = NULL;  
	Link* last = NULL;    
	
	void push(string value){
		Link *ptr = new Link();
		ptr->data = value;
		ptr->link = NULL;
		
		if (first == NULL){
			first = ptr;
			last = ptr;
		}
		else {
			last->link = ptr;
			last = ptr;
		}
	}
	
	string pop() {
		Link *temp;
		string state = "";
		if (first == NULL){
			state = "Empty";
		}
		else
		{
			state = first->data;
		
			temp = first;
			
			first = first->link;
			
			delete(temp);
		}
		return state;
	}
	
	string peek(){
		string state;
		if (isEmpty()){
			state = "Empty";
		}
		else {
			state = first->data;
		}
		return state;
	}
	
	bool isEmpty() {
		if(first == NULL)
			return 1;
		else 
			return 0;
	}

};

#endif


