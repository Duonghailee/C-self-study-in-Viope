#include<stdio.h>
int main(void){
	// file declares
	FILE *read1;
	FILE *read2;
	FILE *write;
	char *fileName1 = "mata.txt";
	char *fileName2 = "matb.txt";
	char *fileName3 = "sum.usr";
	
	//varible . matrix declares
	int y,x;
	int matA[10][10], matB[10][10], matC[10][10];
	
	//open file1
	if((read1=fopen(fileName1,"r")) == NULL){
		printf("Failed to open file %s\n", fileName1);
	}
	else {
		for(y=0;y<10;y++){
			for(x=0;x<10;x++){
				if(x==9){
					fscanf(read1,"%d\n",&matA[y][x]);
				}
				else{
					fscanf(read1,"%d ",&matA[y][x]);
				}
			}
		}
	}
	// open and read from file2
		
	if((read2=fopen(fileName2,"r")) == NULL){
		printf("Failed to open file %s\n", fileName2);
	}
	else {
		for(y=0;y<10;y++){
			for(x=0;x<10;x++){
				if(x==9){
					fscanf(read2,"%d\n",&matB[y][x]);
				}
				else{
					fscanf(read2,"%d ",&matB[y][x]);
				}
			}
		}
	}
	// closing file
		fclose(read1); fclose(read2);
		
	// calculation sum, store to MatC
		
		for(y=0;y<10;y++){
			for(x=0;x<10;x++){
				matC[y][x] = 0;
				matC[y][x] = matA[y][x] + matB[y][x];
			}
		}
		
	// writing to file sum.usr
		if((write=fopen(fileName3,"w")) == NULL){
		printf("Failed to open file %s\n", fileName3);
		}
		else{
			for(y=0;y<10;y++){
				for(x=0;x<10;x++){
					if(x==9){
						fprintf(write,"%d\n",matC[y][x]);
					}
					else{
						fprintf(write, "%d ", matC[y][x]);
					}
				}
			}
		}
		// print result
		printf("The sum of the matrices has been calculated into the file sum.usr.\n");
		// closing file to write
		fclose(write);
	return 0;
}

