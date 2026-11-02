/* write a program to print in this format
1
12
123
1234
12345 */


#include<stdio.h>
int main(){
	int n,i,c;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(c=1;c<=i;c++){
			printf("%d",c);
		}
		printf("\n");
	}	
	return 0;
}
