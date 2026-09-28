// 1+2+4+7+11, upto n terms, calculate sum of the given terms
#include<stdio.h>
int main(){
	
		int n,s,p=1;
	int i=1;	

printf("Enter a number: ");
scanf("%d",&n);

while(i<=n){
	s+=p;
	p+=i;
	i++;
}
	printf("%d is the sum: ",s);
	
	
	
	return 0;
}
