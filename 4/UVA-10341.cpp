#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int p,q,r,s,t,u;
double ans;

double binary_search(){
	double max,min,mid;
	double y;
	max=1.0;
	min=0.0;
	int count=200;
	while(count--){
		mid=(max+min)/2;
		y=p*exp(-mid)+q*sin(mid)+r*cos(mid)+s*tan(mid)+t*pow(mid,2)+u;
		if(y>0){min=mid;}
		else if(y<0){max=mid;}
		else{break;}
	}
	if(fabs(y-0)<1e-8){return mid;}
	else{return -1;}
}

int main(){

	while(scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF){
	
	ans=binary_search();
	if(ans==(-1)){printf("No solution\n");}
	else{printf("%.4lf\n",ans);}

	}
	//printf("\n");

	return 0;
}
