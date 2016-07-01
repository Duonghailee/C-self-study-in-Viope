#include<stdio.h>
int main(void){
	char input[15];
	int i,count;
	printf("The program calculates the number of vowels.\n");
	printf("Enter a word:");
	scanf("%s",&input[0]);
	i=0;
	count=0;
	for(i;i<strlen(input);i++)
		{
		if((input[i]=='a')||(input[i]=='e')||(input[i]=='i')||(input[i]=='o')||(input[i]=='u')||(input[i]=='y')){
			count++;
			}
	}
	printf("The word contains %d vowels.",count);
	return 0;
}
		
	
