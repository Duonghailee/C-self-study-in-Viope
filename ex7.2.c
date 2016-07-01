#include<stdio.h>

//Prototypes
void sum(void);
void diff(void);
void product(void);

// main program
int main(void){
	int sel;
		do{
			printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program");
			printf("Select calculation:");
			scanf("%d",&sel);
			if(sel<0)
				printf("Terminating the program...\n");
			else if(sel==1){
				sum();
			}
			else if(sel==2){
				diff();
			}
			else if(sel==3){
				product();
			}
			
			else {
				printf("You enter an invalid number\n");
			}
		}
		while(sel>0);
		return 0;
}
void sum(void){
	int num1,num2,sum;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("%d + %d = %d",num1,num2,sum);
};
void diff(void){
	int num1,num2,diff;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	diff=num1-num2;
	printf("%d - %d = %d",num1,num2,diff);
}
void product(void){
	int num1,num2,product;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	product=num1*num2;
	printf("%d * %d = %d",num1,num2,product);
}
