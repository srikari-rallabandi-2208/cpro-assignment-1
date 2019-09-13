#include<stdio.h>

long long int countTriangles(long long int a[], long long int n){
    long long int cnt = 0;
    long long int pairs = 0;
    for (long long int i = n - 1; i >= 0; i--) {
        pairs += a[i] / 2; 
        if (a[i] % 2 == 1 && pairs > 0) {
            cnt += 1;
            pairs -= 1;
        }
    }
    cnt += (2 * pairs) / 3;
    return cnt;
}

int main(){
	long long int N,M;
	scanf("%lld",&N);
	long long int arr[N];
	for(long long int i=0;i<N;i++){
	scanf("%lld",&arr[i]);
	}
	M = countTriangles(arr,N);
	printf("%lld\n",M);
	return 0;
}

