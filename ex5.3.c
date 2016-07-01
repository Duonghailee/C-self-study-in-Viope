#include<stdio.h>
int main(void){
	int num1, num2, sum, diff, product;
	int choice;
	printf("1: subtraction\n2: addition\n3: multiplication\n");
	printf("Select function: \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			printf("Enter the first number:\n");
			scanf("%d",&num1);
			printf("Enter the second number:\n");
			scanf("%d",&num2);
			diff= num1-num2;
			printf("%d-%d=%d\n",num1,num2,diff);
			break;
		}
		case 2:{
			printf("Enter the first number:\n");
			scanf("%d",&num1);
			printf("Enter the second number:\n");
			scanf("%d",&num2);
			sum= num1+num2;
			printf("%d+%d=%d\n",num1,num2,sum);
			break;
		}
		case 3:{
			printf("Enter the first number:\n");
			scanf("%d",&num1);
			printf("Enter the second number:\n");
			scanf("%d",&num2);
			product= num1*num2;
			printf("%d*%d=%d\n",num1,num2,product);
			break;
		}
	}
	return 0;
}	
