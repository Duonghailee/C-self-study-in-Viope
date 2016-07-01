#include<stdio.h>
int main(void){
	int age;
	char gender;
	printf("Are you male or female (m/f)?\n");
	scanf("%c",&gender);
	printf("Enter your age:\n");
	scanf("%d",&age);
	if(gender=='m')
		if(age>=0&&age<=55)
			printf("You are a man in your best years!\n");
		else if(age>=56&&age<=100)
			printf("You are a wise man!\n");
		else
			printf("An error occurred in the program!\n");
	else if(gender=='f')
		if(age>=0&&age<=55)
			printf("You are a beauty!\n");
		else if(age>=56&&age<=100)
			printf("You look young for your age!\n");
		else
			printf("An error occurred in the program!\n");
	else
		printf("An error occurred in the program!\n");
	return 0;
		
}

