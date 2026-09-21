//print even numbers upto 10
#include<stdio.h>

int main(){
	
	int i=2;
	while(i<=11) {
		if(i%2==0)
		printf("%d\n",i);
		i=i+2;
	}
	return 0;
}
