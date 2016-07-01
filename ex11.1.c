#include <stdio.h> 
int main(void){
	// declare file , other variables
	FILE *openingfile;
	int i;

	//declare struct for phone directory
	struct phoneBook{
		char first[20];
		char last[20];
		char phone[20];
	};
	
	// initial struct person
	struct phoneBook person[50];
	
	// reading input
	//for(i=0;i<50;i++){
		
		printf("Enter first name:");
		scanf("%s",&person[0].first[0]);
		
		printf("Enter last name:");
		scanf("%s",&person[0].last[0]);
		
		printf("Enter telephone number:");
		scanf("%s",&person[0].phone[0]);
	//}
	
	// opening file phonedir.txt and write to it
	openingfile=fopen("phonedir.txt","w");
	if(openingfile==NULL){
		printf("Error opening file.");
		return 0;
	}
	else
	{
		//for(i=0;i<50;i++){
			fprintf(openingfile,"%s %s %s",person[0].first, person[0].last, person[0].phone);
		//}
	}
	// closing file, print result
	fclose(openingfile);
	printf("Successfully saved the data.");
	
	return 0;
}
	
	
