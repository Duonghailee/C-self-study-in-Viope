#include<stdio.h>
int main(void){
	int num, remainder;
	printf("Enter an integer: \n");
	scanf("%d",&num);
	remainder = num % 2;
	if(remainder==0){
		printf("The number is 0\n");
	}
	else{
		printf("The number is 1\n");}
	return 0;
}
