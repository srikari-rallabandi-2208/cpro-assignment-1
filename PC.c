#include<stdio.h>

int main(){
	
	long long int N;
	scanf("%lld",&N);
	if(N != 1)
		printf("%lld\n",2*(N-1));
	else
		printf("1\n");
	return 0;
}
