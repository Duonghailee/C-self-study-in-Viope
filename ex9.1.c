#include<stdio.h>
int main(void){
	FILE *opening = fopen("hello.usr","w");
	if(opening==NULL){
		printf("Error opening file\n");
	}
	else{
		fprintf(opening,"Hello world!\n");
		printf("Writing to the file was successful.\nClosing the program.\n");
		fclose(opening);
	}
	return 0;
}

		
			
	
