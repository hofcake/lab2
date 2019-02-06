#include <stdio.h>
#include <math.h>
int isOdd(int input){
	return(input % 2);
}
int containsOdd(int input){
	if(input < 0)
		input *= -1;
	while(input > 0){
		if(isOdd(input % 10))
			return 1;
		input /= 10;
	}
	return 0;
}
int computeSum(int input){
	if(input < 0)
		input *= -1;
	int sum = 0;
	while(input > 0){
		sum += input % 10;
		input /= 10;
	}
	return sum;
}
void main(){
	printf("isOdd -456: %d\n", isOdd(-456));
	printf("containsOdd 4822116: %d\n", containsOdd(4822116));
	printf("containsOdd 2448: %d\n", containsOdd(2448));
	printf("containsOdd -7004: %d\n", containsOdd(-7004));
	printf("computeSum -456: %d\n", computeSum(-456));
}
