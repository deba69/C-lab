/* write a program to print in this format
12345
1234
123
12
1 */


#include<stdio.h>
int main(){
	int n,i,c;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(i=n8;i>=1;i--){
		for(c=1;c<=i;c++){
			printf("%d",c);
		}
		printf("\n");
	}	
	return 0;
}
