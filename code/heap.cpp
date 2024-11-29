#include <cstdio>
#include <cstdlib>
#include <ctime>

#define ArrSize 10

void heapify(int arr[], int arrSize, int index){
	int maxIndex = index;
	int leftIndex = 2*index + 1;
	int rightIndex = 2*index + 2;
	
	if(leftIndex < arrSize && arr[leftIndex] > arr[maxIndex]){
		maxIndex = leftIndex;
	}
	
	if(rightIndex < arrSize && arr[rightIndex] > arr[maxIndex]){
		maxIndex = rightIndex;
	}
	
	if(maxIndex != index){
		int tmp = arr[index];
		arr[index] = arr[maxIndex];
		arr[maxIndex] = tmp;
		heapify(arr, arrSize, maxIndex);
	}
}

int main(){
	srand(time(0));
	int arr[ArrSize];
	for(int i = 0; i < ArrSize; i++){ arr[i] = rand() % 100; heapify(arr, i+1, (i-1)/2); }
	for(int i = 0; i < ArrSize; i++){ printf("%i ", arr[i]); } printf("\n");
	
	/* Heapify */
	heapify(arr, ArrSize, 0);
	for(int i = 0; i < ArrSize; i++){ printf("%i ", arr[i]); } printf("\n");
	printf("arr[0]: %i\n", arr[0]);
	
	return 0;
}
