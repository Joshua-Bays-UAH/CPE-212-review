#include <cstdio>

int main(){
	int arr[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int s = 5;
	int high = 15; int low = 0;
	int mid;
	while(1){
		if(high >= low){
			mid = low + (high - low) / 2;
		}
		if(arr[mid] == s){
			printf("%i is at index %i\n", s, mid);
			break;
		}
		if(arr[mid] > s){
			high = mid - 1;
			continue;
		}
		low = mid + 1;
	}
}
