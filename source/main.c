#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter three integers: \n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	scanf_s("%d", &num3);

	int largest = num1;
	if (num2> largest) largest = num2;
	if (num3> largest) largest = num3;
	
	int smallest = num1;
	if (num2 < smallest) smallest = num2;
	if (num3 < smallest) smallest = num3;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	system("pause");
	return 0;

}