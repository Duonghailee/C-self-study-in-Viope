#include<stdio.h>
int main(void){
	int count, num, sum;
	float avg;
	count=0;
	sum=0;
	printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");
	do{
		printf("Enter score (4-10):");
		scanf("%d",&num);
		count++;
		sum=sum+num;
	}
	while(num>=0);
	count = count-1;
	sum = sum-num;
	avg = sum / (float)count;
	printf("You entered %d scores.\n",count);
	printf("Average score: %.2f\n",avg);
	return 0;
}
