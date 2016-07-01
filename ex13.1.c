#include<stdio.h>

int *address_of_smallest_value(int *numbers, int size);

int main(void)
{
   int numbers[] = { 21, 55, 5, 3, 43};
   int size = 5;

   int *smallest = address_of_smallest_value(numbers, size);

   printf("The smallest number in the array is: %d", *smallest);
   return 0;
 }
 
 // pointer
int *address_of_smallest_value(int *numbers, int size){
	int *p_smallest = &numbers[0];
	int i = 0;
	int smallest = numbers[0];
	for(i;i<size;i++){
		if(numbers[i]<smallest){
			smallest=numbers[i];
		}
	}
	p_smallest = &smallest;
	return p_smallest;
}

