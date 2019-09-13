#include<stdio.h>

int factor[1000001];
const int MAX = 1000001;

void prime_factors()
{
    factor[1] = 1;
    for (int i = 2; i < MAX; i++)
        factor[i] = i;
    for (int i = 4; i < MAX; i += 2)
        factor[i] = 2;
    for (int i = 3; i * i < MAX; i++) {
        if (factor[i] == i) {
            for (int j = i * i; j < MAX; j += i) {
                if (factor[j] == j)
                    factor[j] = i;
            }
        }
    }
}

int no_of_factors(int n){
    if (n == 1)
        return 1;
    int ans = 1;
    int dup = factor[n];
    int c = 1;
    int j = n / factor[n];
    while (j != 1) {
        if (factor[j] == dup)
            c += 1;
        else {
            dup = factor[j];
            ans = ans * (c + 1);
            c = 1;
        }
        j = j / factor[j];
    }
    ans = ans * (c + 1);
    return ans;
}

int main(){
	prime_factors();
	long int x,y,z,i,j,count,num,num_f;
	num_f=0;
	scanf("%ld %ld %ld",&x,&y,&z);
	for ( i = x;i<=y;i++){
		num = no_of_factors(i);
		if(num <= z)
			num_f++;	
	}
	printf("%ld\n",num_f);

	return 0;
}
