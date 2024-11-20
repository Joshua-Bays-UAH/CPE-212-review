#include <cstdio>

#define ArrSize 16

bool hash_insert(int x, int *arr){
	bool isFull = true;
	for(int i = 0; i < ArrSize; i++){
		if(arr[i] == -1){ isFull = false; break; }
	}
	if(isFull){ return false; }
	int index = x % ArrSize;
	while(arr[index] != -1){ index++; index %= ArrSize; }
	arr[index] = x;
	return true;
}

int hash_find(int x, int *arr){
	int index = x % ArrSize;
	while(arr[index] != x){
		index++;
		index %= ArrSize;
		if(index == x % ArrSize){ return -1; }
	}
	return index;
}

int main(){
	int arr[ArrSize];
	for(int i = 0; i < ArrSize; i++){ arr[i] = -1; }

	int x = 347;
	int y = 347 + ArrSize;
	hash_insert(x, arr);
	hash_insert(y, arr);
	printf("%i is at index %i\n", x, hash_find(x, arr));
	printf("%i is at index %i\n", y, hash_find(y, arr));
	return 0;
}
