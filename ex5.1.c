#include<stdio.h>
int main(void){
	int num;
	int remainder;
	printf("Enter an integer:\n");
	scanf("%d",&num);
	remainder = num % 2;
	if(remainder==0)
		printf("Number %d is even.\n",num);
	else if(remainder==1)
		printf("Number %d is odd.\n",num);
	else 
		printf("Error\n");
	return 0;
}
