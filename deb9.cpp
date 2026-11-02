/* write a program to print
*
**
***
****
***** */

#include<stdio.h>
int main(){
	int n,i,c;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(c=1;c<=i;c++){
			printf("*");
		}
		printf("\n");
	}	
	return 0;
}
