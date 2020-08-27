#ifndef OpStack_h
#define OpStack_h

// Define the Link struct below...

struct Link {
    long data;
	Link* next;
	char op;
};

 Link* front;
// Now define the Stack struct. It should be a stack of Links...

struct Stack {
    Stack() {
       front = 0;
	}
    void push(long data, char op){
        Link *link = new Link;
        link-> data = data;
        link-> op = op;
        link-> next = front;
        front = link;
    }
	
    Link* pop(){
        if(front == 0){
            return NULL;
        }
        Link *temp = front;
        front = temp->next;
        return temp;
    }

    int isEmpty(){
        return front == NULL;
    }
};

#endif

