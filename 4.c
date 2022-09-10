// Write a program to print the first N odd natural numbers 
#include<stdio.h>
int main()
{
	int N;
	printf("Enter value of N: ");
	scanf("%d",&N);
	int i;
	for( i=1;i<=N;i++)
		printf("%d ",2*i-1);
		
return 0;
}

