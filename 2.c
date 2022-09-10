//Write a program to print the first N natural numbers
#include<stdio.h>
int main()
{
	int i=1,N;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	do{
		printf("%d ",i);
		i++;	
	}while(i<=N);
return 0;
}

