#include <stdio.h>
#include<string.h>

/* make the structure global */
struct person{
  char firstname[20+1]; 
  char lastname[20+1]; 
  char telephone[20+1];
};

int main(void)
{
	struct person personArray[50];
	int items, i, firstCompare, lastCompare, index;
	char first[20+1], last[20+1];
	const char *fileName = "phonedir.txt";
	FILE *fp;

  /* read data for printing from the file into struct array*/
  if((fp = fopen(fileName,"r")) == NULL){
    printf("Failed to open the file %s\n", fileName);
  }
  fscanf(fp,"%d", &items);
	for(i=0;i<items;i++){
		fscanf(fp,"%s %s %s",
       	personArray[i].firstname, personArray[i].lastname, personArray[i].telephone);
  		}
  fclose(fp);

  /* print the data on the screen */
 // for(i=0;i<items;i++){
  //  printf("%s %s %s\n",personArray[i].firstname, personArray[i].lastname, personArray[i].telephone);
 // }
	// searching info
	printf("Enter first name:");
	scanf("%s",&first[0]);
	printf("Enter last name:");
	scanf("%s", &last[0]);
	
	// opening fp to write, update information
	for(i=0;i<items;i++){
		firstCompare =strcmp(first,personArray[i].firstname);
		lastCompare= strcmp(last,personArray[i].lastname);
		if(firstCompare==0 && lastCompare==0){
			items -= 1;
			index=i;
		}
	}
	
	/* update the data into the file */
  if((fp = fopen(fileName,"w")) == NULL){
    printf("Failed to open the file %s\n", fileName);
  }
  for(i=0;i<index;i++){
    fprintf(fp,"%d %s %s %s\n",items, personArray[i].firstname, personArray[i].lastname, personArray[i].telephone);
  }
	for(i=index+1;i<items;i++){
    fprintf(fp,"%s %s %s\n",personArray[i].firstname, personArray[i].lastname, personArray[i].telephone);
  }	
	
	// closing file
	fclose(fp);
	printf("Data removed from the directory.");
	
  return 0;
}

