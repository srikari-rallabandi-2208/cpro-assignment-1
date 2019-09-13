#include<stdio.h>
#include<math.h>

int main(){
	int T;
	scanf("%d",&T);
	while(T>0){
		long int n;
		scanf("%ld",&n);
		printf("%ld\n",(long int)sqrt(n));
		T--;
	}
	return 0;
}
