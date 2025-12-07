// How many ways can n compatible matrices can be multiplied

#include <stdio.h>

long long func(int);

int main(){
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	if(num>0)
		printf("Answer is: %lld", func(num));
	else
 		printf("Please enter a positive number.");
	return 0;
}

long long func(int n){
	if(n == 1) return 1;
	else if(n == 2) return 1;
	
	long long sum=0;
	for(int i=1; i<n; i++){
		sum+= func(i)*func(n-i);
	}
	return sum;
}