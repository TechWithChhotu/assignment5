//Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
	int i,N;
	printf("Enter the value of N : ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		printf("square of %d = %d\n",i,i*i);
	}
return 0;
}

