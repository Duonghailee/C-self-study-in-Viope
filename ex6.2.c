#include<stdio.h>
int main(void){
	int i,num,result;
	printf("Enter an integer: ");
	scanf("%d",&num);
	result=1;
	for(i=1;i<=num;i++){
		result=result*i;
	}
	printf("The factorial of %d is %d\n",num,result);
	return 0;
}
