//find the sum of the digit of a whole number

#include<stdio.h>
int main (){
	int n,a,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(n>0){
		a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("Sum : %d\n",s);
	
	
	
	
	return 0;
}
