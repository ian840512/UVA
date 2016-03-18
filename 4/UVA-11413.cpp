#include<cstdio>
#include<cstdlib>
#include<iostream>

using namespace std;

int main(){
	int n,m;
	int milk[50005]={0};
	//int min=0,max=0;
	while(scanf("%d %d",&n,&m)!=EOF){
		int min=0,max=0;
		for(int i=0;i<n;i++){
			scanf("%d",&milk[i]);
			if(milk[i]>min){min=milk[i];}
			max=max+milk[i];
		}
		//printf("min:%d max:%d\n",min,max);	
		
		int mid=0;
		while(max>min){
			int tmp=0;
			int count=0;
			mid=(max+min)/2;
			for(int i=0;i<n;i++){
				tmp=tmp+milk[i];
				if(tmp>mid){
					tmp=0;
					count++;
					i--;
				}
			}
			if(tmp>0){count++;}
			//printf("mid:%d\n",mid);
			if(count>m){min=mid+1;}
			else{max=mid;}
		}
	
	printf("%d\n",min);
	}
return 0;
}
