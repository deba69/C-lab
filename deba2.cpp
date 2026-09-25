//which acepts an integer number and print the multiplication of the digits

#include<stdio.h>

int main(){
	int n,i=1,p,on;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	on=n;
	
	while(n>0){
		p=p*n%10;
		n=n/10;
	}
	
	printf("Multi of digit %d is %d",on,p);
	return 0;
} 
