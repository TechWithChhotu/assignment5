//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
	int N=10;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	while(N){
		printf("%d ",N*2);
		N--;
	}
return 0;
}

