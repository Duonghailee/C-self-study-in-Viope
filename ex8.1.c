#include<stdio.h>
//prototypes:
int smallest(int,int,int);
int largest(int,int,int);

// main programs;
int main(void){
	int num1,num2,num3,min,max;
	printf("Enter the 1. number:");
	scanf("%d",&num1);
	printf("Enter the 2. number:");
	scanf("%d",&num2);
	printf("Enter the 3. number:");
	scanf("%d",&num3);
	min=smallest(num1,num2,num3);
	max=largest(num1,num2,num3);
	printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.",max,min);
	return 0;
}

// functions
// min function
int smallest(int num1,int num2 ,int num3){
	int min;
	min=num1;
	if(num2<min)
		min=num2;
	if(num3<min)
		min=num3;
			
	return min;
}
// max function
int largest(int num1,int num2 ,int num3){
	int max;
	max=num1;
	if(num2>max)
		max=num2;
	if(num3>max)
		max=num3;
	
	return max;
}

