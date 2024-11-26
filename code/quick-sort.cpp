#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>

void quicksort(std::vector<int> &arr){
	if(arr.size() <= 1){ return; }
	int pivot = arr[0];
	std::vector<int> a1; std::vector<int> a2;
	for(int i = 1; i < arr.size(); i++){
		if(arr[i] <= pivot){ a1.push_back(arr[i]); }
		else{ a2.push_back(arr[i]); }
	}
	quicksort(a1); a1.push_back(pivot);
	quicksort(a2);
	arr.clear();
	for(int i = 0; i < a1.size(); i++){ arr.push_back(a1[i]); }
	for(int i = 0; i < a2.size(); i++){ arr.push_back(a2[i]); }
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
}

int main(){
	srand(time(0));
	std::vector<int> arr;
	for(int i = 0; i < 15; i++){ arr.push_back(rand() % 100); }

	quicksort(arr);
	printf("\nSorted output: \n");
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
	
	return 0;
}
