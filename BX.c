#include<stdio.h>
#include<math.h>

void dec_to_num(long long int n,long long int y){
    long long int Num[1000001];
    long long int i = 0;
    while (n != 0) {
        Num[i] = n % y;
        n = n / y;
        i++;
    }

    for (long long int j = i - 1; j >= 0; j--)
        printf("%lld",Num[j]);
}

int main(){

	long long int n,m,x,y,z,count,sum,power,reminder;
	scanf("%lld %lld %lld",&n,&x,&y);
	sum=0;m=0;power=1;
	while(n != 0){
		z=n%10;
		sum=sum+z*power;
		n = n/10;
		power=power*x;
	}	
	
	dec_to_num(sum,y);
	printf("\n");
	return 0;
}
