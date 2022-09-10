// Write a program to print the first N odd natural numbers in reverse order
#include<stdio.h>
int main()
{
	int N;
	printf("Enter value of N: ");
	scanf("%d",&N);
	while(N){
		printf("%d ",N*2-1);
		N--;
	}
return 0;
}

