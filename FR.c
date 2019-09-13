#include<stdio.h>
#include<math.h>

const float pr=0.0000001;

void newtonRaphson(long double x,long double c){
    long double h = (x*x+sqrt(x)-c)/(2*x-(1/(2*sqrt(x))));
    while (fabs(h) >= pr)
    {
        h = (x*x+sqrt(x)-c)/(2*x-(1/(2*sqrt(x))));

        x = x - h;
    }

    printf("%Lf",x);
    printf("\n");
}

int main(){
	int T;
	long double C;
	long double x;
	scanf("%d",&T);
	while(T>0){
		scanf("%Lf",&C);
		x = sqrt(C);
		newtonRaphson(x,C);
	T--;	
	}
	
	return 0;
}
