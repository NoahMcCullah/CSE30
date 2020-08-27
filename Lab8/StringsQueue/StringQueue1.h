
#ifndef Queue_h
#define Queue_h

#include <iostream>
#include <string>
#include <queue>

struct Link {
    String data = "";
    Link *next;
};

struct Queue {
	Link *front, *rear;    
    Queue(){front=rear=NULL;}
 
    void insert(int n);
    void deleteitem();
    void display();
    ~Queue();
};
 
void Queue::push(int n){
    Link *temp = new Link;
    if(temp==NULL);
        return;
    }
    temp->data=n;
    temp->next=NULL;
 
    //for first node
    if(front==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}
 
void Queue::display(){
    if(front==NULL){
        return;
    }
    Link *temp=front;
    //will check until NULL is not found
    while(temp){
        temp->data<<" ";
        temp=temp->next;
    }
    
}
 
void Queue::pop()
    {
    if (front==NULL){
        return;
    }
     
    front->data<<" is being deleted ";
    if(front==rear)//if only one node is there
        front=rear=NULL;
    else
        front=front->next;
}
 
Queue ::~Queue()
{
    while(front!=NULL)
    {
        Link *temp=front;
        front=front->next;
        delete temp;
    }
    rear=NULL;
};

#endif

