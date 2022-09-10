//Write a program to print a table of 5
#include<stdio.h>
int main()
{
	int i=1,N;
	printf("Enter table number: ");
	scanf("%d",&N);
	while(i<=N){
		printf("	%d\n",i*5);
		i++;
	}
return 0;
}

