//Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
	int j=1,N;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	do{
		printf("%d ",j*2);
		j++;
	}while(j<=N);
return 0;
}

