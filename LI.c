#include<stdio.h>
#include<math.h>

int main(){
	long int T;
	scanf("%ld",&T);
	while(T>0){
		long double x1,y1,x2,y2,x3,y3,x4,y4;
		scanf("%Lf %Lf %Lf %Lf %Lf %Lf %Lf %Lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
   		long double x = (y3-y1+((y2-y1)*x1/(x2-x1))-((y4-y3)*x3/(x4-x3)))/(((y2-y1)/(x2-x1))-((y4-y3)/(x4-x3))); 
		long double y;
                if(x1==x2 && x3 != x4) { x=x1;
			y = (((y4-y3)/(x4-x3))*(x1-x3))+y3;
		 	if(fabs(y3-y)+fabs(y-y4) == fabs(y3-y4))
				printf("Yes\n");
			else
				printf("No\n");	
		}
                else if(x3==x4 && x1 != x2) { x=x3; 
			y = (((y2-y1)/(x2-x1))*(x3-x1))+y1;
			if(fabs(y1-y)+fabs(y-y2) == fabs(y1-y2))
				printf("Yes\n");
			else
				printf("No\n");
		} 
                else if(x1==x2 && x3==x4 && x1==x3) { printf("Yes\n");  } 
		else if(x1==x2 && x3==x4 && x1!=x3) { printf("No\n");  }
		else if(((((y4-y3)/(x4-x3)) == ((y2-y1)/(x2-x1))) && ((x1*y2-x2*y1+x2*y3-x3*y2+x3*y1-x1*y3)==0)) || (((y4-y3)/(x4-x3)) != ((y2-y1)/(x2-x1)))){	
		if(fabs(x1-x)+fabs(x-x2) == fabs(x1-x2))	
			printf("Yes\n");
		else
			printf("No\n");	
		}
	T--;
	}
return 0;
}
