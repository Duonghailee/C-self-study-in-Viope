#include <stdio.h> 

// global struct
struct phonebook{
  char first[20+1]; 
  char last[20+1]; 
  char phone[20+1];
};

// main program
int main(void){
	
	// declare file , other variables
	FILE *openingfile;
	int i;
	char item;
	struct phonebook person[50];

	// opening file phonedir.txt and print info to screen
	openingfile=fopen("phonedir.txt","r");
	if(openingfile==NULL){
		printf("Error opening file.");
		return 0;
	}
	else
	{
		for(i=0;i<50;i++){
			fscanf(openingfile,"%c %s %s %s", &item ,&person[i].first[0], &person[i].last[0], &person[i].phone[0]);
		}
	}
	// convert item from char to int
		
	// closing file, print result
	fclose(openingfile);
	for(i=0;i<4;i++){
		printf("%s %s %s\n", person[i].first,person[i].last,person[i].phone);
	}
	return 0;
}
	
	
