#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter fahrenheit temperature:");
	scanf("%f",&f);
	c=((f-32)*5)/9;
	printf("c=%0.2f",c);
	
}