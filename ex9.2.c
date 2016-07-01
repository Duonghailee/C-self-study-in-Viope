#include<stdio.h>
int main(void){
	FILE *opening = fopen("numbers.s","r");
	int num1,num2,num3,num4,sum;
	//if(opening=NULL){
	//	printf("file not found\n");
	//	return 0;
	//}
	//else {
		fscanf(opening,"%d %d %d %d", &num1,&num2,&num3,&num4);
		sum=num1+num2+num3+num4;
		fclose(opening);
		printf("Numbers found in the file numbers.s:\n%d, %d, %d and %d\n\n",num1,num2,num3,num4);
		printf("Sum of the numbers: %d", sum);
	//}
		return 0;
}
	
	
