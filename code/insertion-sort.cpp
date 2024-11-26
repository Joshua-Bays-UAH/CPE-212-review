#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>

int main(){
	srand(time(0));
	std::vector<int> arr;
	arr.push_back(0);
	for(int i = 0; i < 10; i++){ arr.push_back(rand() % 100); }

	int cmpIndex; int key;
	for(int i = 1; i < arr.size(); i++){
		for(int j = 0; j < arr.size(); j++){ printf("%i ", arr[j]); }printf("\n");
		
		key = arr[i];
		cmpIndex = i-1;
		while(cmpIndex >= 0 && arr[cmpIndex] > key){
			arr[cmpIndex+1] = arr[cmpIndex];
			cmpIndex--;
		}
		arr[cmpIndex+1] = key;
	}
	
	arr.erase(arr.begin());
	printf("\nSorted output: \n");
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
	
	return 0;
}
