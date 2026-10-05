//wap to count digits of a whole number

#include<stdio.h>
int main (){
	int n,a,s=0,i=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(i<=n){
		a=n%10;
		//s=s+a;
		n=n/10;
		i++;
	}
	printf("Sum : %d\n",i);
	
	
	
	
	return 0;
}
