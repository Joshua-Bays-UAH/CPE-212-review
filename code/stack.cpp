#include <new>
#include <cstdio>

class StackFull{}; /* Error class */
class StackEmpty{}; /* Error class */

class StackNode{
	public:
		StackNode();
		int data;
		StackNode *next;
	private:
};

class Stack{
	public:
		Stack();
		bool Push(int data);
		bool Pop();
		int Top();
		bool IsEmpty();
		bool IsFull();
		void MakeEmpty();
		void Print();
		~Stack();
	private:
		StackNode *topPtr;
		int size;
		int maxSize;
};

int main(){
	Stack s;
	try{
		s.Push(10);
		s.Push(11);
		s.Push(12);
		s.Push(13);
	}catch(...){}
	s.Print();
	
	s.Pop();
	s.Print();
	return 0;
}

StackNode::StackNode(){
	next = NULL;
}

Stack::Stack(){
	topPtr = NULL;
	size = 0;
	maxSize = 3;
}

bool Stack::Push(int data){
	if(IsFull()){
		throw StackFull();
	}
	
	size++;
	if(IsEmpty()){
		topPtr = new StackNode();
		topPtr->data = data;
		topPtr->next = NULL;
		return true;
	}
	
	StackNode *p = new StackNode();
	p->data = data;
	p->next = topPtr;
	topPtr = p;
	return true;
}

bool Stack::Pop(){
	if(IsEmpty()){ throw StackEmpty(); }
	
	size--;
	StackNode *p = topPtr;
	topPtr = topPtr->next;
	delete p;
	return true;
}

int Stack::Top(){
	if(IsEmpty()){ throw StackEmpty(); }
	
	return topPtr->data;
}

bool Stack::IsEmpty(){
	return topPtr == NULL;
}

bool Stack::IsFull(){
	return size >= maxSize;
}

void Stack::MakeEmpty(){
	while(!IsEmpty()){
		Pop();
	}
}

void Stack::Print(){
	if(IsEmpty()){
		printf("Empty\n");
		return;
	}
	
	printf("Top\n");
	StackNode *p = topPtr;
	while(p->next != NULL){
		printf("%i\n", p->data);
		p = p->next;
	}
	printf("%i\n", p->data);
	printf("Bottom\n\n");
}

Stack::~Stack(){
	MakeEmpty();
}
