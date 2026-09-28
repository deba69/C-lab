//2+5+8+11+14 upto n terms, calculate the sum of the given numbers

#include <stdio.h>

int main(){
	
	int n,s,p=2;
	int i=1;	

printf("Enter a number: ");
scanf("%d",&n);

while(i<=n){
	s+=p;
	p+=3;
	i++;
}
	printf("%d is the sum: ",s);
	
	
	
	
	
	
	
	return 0;
}
