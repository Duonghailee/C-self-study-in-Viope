#include<stdio.h>
int main(void){
	// implement FILE, variable
	FILE *write;
	char first[15], last[20],filename[11];
	printf("The program saves your first and last name into a file.\n");
	printf("Enter your first name:");
	scanf("%s",&first[0]);
	printf("Enter your last name:");
	scanf("%s", &last[0]);
	printf("File where you want to save your name:");
	scanf("%s", &filename[0]);
	// opening file to write
	write = fopen(filename,"w");
	fprintf(write,"%s %s",first,last);
	fclose(write);
	printf("\nSuccessfully saved the data!");
	return 0;
}
