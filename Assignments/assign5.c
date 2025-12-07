// The insertion sort algorithm.

#include <stdio.h>

void insertionSort(int[], int);

int main(){
	// int arr[5] = {30, 40, 10, 50, 20};

	printf("Enter the size of array: ");
	int n;
	scanf("%d", &n);

	int arr[n];
	printf("Enter the array:");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	insertionSort(arr, n);

	printf("The sorted array is :");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
void insertionSort(int arr[], int n){
	for(int i=1; i<n; i++){
		int key = arr[i];
		int j =i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
