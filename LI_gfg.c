#include<stdio.h>
#include<stdbool.h>
#include<math.h>

struct Point
{
    long double x;
    long double y;
};

bool onSegment(struct Point p,struct Point q,struct Point r)
{
    if (q.x <= fmax(p.x, r.x) && q.x >= fmin(p.x, r.x) &&
        q.y <= fmax(p.y, r.y) && q.y >= fmin(p.y, r.y))
       return true;
    return false;
}

long double orientation(struct Point p,struct Point q,struct Point r)
{
    long double val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0)? 1: 2;
}

bool doIntersect(struct Point p1,struct Point q1,struct Point p2,struct Point q2){
    long double o1 = orientation(p1, q1, p2);
    long double o2 = orientation(p1, q1, q2);
    long double o3 = orientation(p2, q2, p1);
    long double o4 = orientation(p2, q2, q1);
    if (o1 != o2 && o3 != o4)    return true;
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
    else	return false; 
}

int main(){
	long int T;
	struct Point p1,p2,p3,p4;
	scanf("%ld",&T);
	while(T>0){
		scanf("%Lf %Lf %Lf %Lf %Lf %Lf %Lf %Lf",&(p1.x),&(p1.y),&(p2.x),&(p2.y),&(p3.x),&(p3.y),&(p4.x),&(p4.y));
		if(doIntersect(p1,p2,p3,p4))
			printf("Yes\n");
		else
			printf("No\n");
	T--;	
	}
	return 0;
}
