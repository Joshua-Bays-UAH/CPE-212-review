#include <new>
#include <cstdio>

class linkedList{
	public:
		linkedList();
		linkedList(int v);
		int GetValue(){ return value; }
		void SetValue(int v){ value = v; }
		linkedList* GetNext(){ return next; }
		void SetNext(linkedList* ptr){ next = ptr; }
	protected:
		int value;
		linkedList *next;
};

class linkedListHead : public linkedList{
	public:
		linkedListHead(int v);
		bool Insert(int v);
		bool Delete(int v);
		bool IsPresent(int v);
		void Print();
};

int main(){
	linkedListHead head(10);
	head.Print();
	head.Insert(4);
	head.Insert(11);
	head.Print();
	return 0;
}

linkedList::linkedList(){
	next = NULL;
}

linkedList::linkedList(int v){
	value = v;
	next = NULL;
}

linkedListHead::linkedListHead(int v){
	value = v;
}

bool linkedListHead::Insert(int v){
	linkedList *newPtr = new linkedList;
	if(v < value){
		newPtr->SetValue(value);
		value = v;
		newPtr->SetNext(next);
		next = newPtr;
		return 1;
	}
	linkedList *ptr = next;
	while(ptr->GetNext() != NULL && ptr->GetValue() < v){
		ptr = ptr->GetNext();
	}
	newPtr->SetValue(v);
	ptr->SetNext(newPtr);
	return 1;
}

bool linkedListHead::Delete(int v){
	if(!IsPresent(v)){ return 0; }
	if(v == value){
		next 
	}
	linkedList *ptr = next;
}

void linkedListHead::Print(){
	linkedList *ptr = next;
	printf("%i\n", value);
	while(ptr != NULL){
		printf("%i\n", ptr->GetValue());
		ptr = ptr->GetNext();
	}
}
