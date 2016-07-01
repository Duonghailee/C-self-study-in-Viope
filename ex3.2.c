#include<stdio.h>
int main(void){
	float markka, euro, ratio;
	ratio=5.94573;
	printf("Enter an amount in FIM:\n");
	scanf("%f",&markka);
	euro=markka/ratio;
	printf("FIM converted to euro: %.2f\n",euro);
	return 0;
}
