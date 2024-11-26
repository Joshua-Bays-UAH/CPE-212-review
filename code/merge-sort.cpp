#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <vector>

void merge_sort(std::vector<int> &arr){
	if(arr.size() <= 1){ return; }
	std::vector<int> a1; std::vector<int> a2;
	for(int i = 0; i < floor(arr.size()/2); i++){ a1.push_back(arr[i]); }
	for(int i = floor(arr.size()/2); i < arr.size(); i++){ a2.push_back(arr[i]); }
	merge_sort(a1); merge_sort(a2); arr.clear(); int a1c = 0; int a2c = 0;
	while(arr.size() != a1.size() + a2.size()){
		if(a1c == a1.size()){ arr.push_back(a2[a2c]); a2c++; }
		else if(a2c == a2.size()){ arr.push_back(a1[a1c]); a1c++; }
		else if(a1[a1c] < a2[a2c]){ arr.push_back(a1[a1c]); a1c++; }
		else{ arr.push_back(a2[a2c]); a2c++; }
	}
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
}

int main(){
	srand(time(0));
	std::vector<int> arr;
	for(int i = 0; i < 10; i++){ arr.push_back(rand() % 100); }
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");

	merge_sort(arr);
	printf("\nSorted output: \n");
	for(int i = 0; i < arr.size(); i++){ printf("%i ", arr[i]); }printf("\n");
	
	return 0;
}
