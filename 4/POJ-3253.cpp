#include<cstdlib>
#include<cstdio>
#include<vector>
#include<iostream>
#include<queue>
using namespace std;


int main(){
	priority_queue<long long int,vector<long long int>,greater<long long int> > que;
	
	long long int n;
	long long int a;
	long long int ans=0;
	long long int tmp=0;
	long long int i=0;
	scanf("%lld",&n);
	if(n==0){return 0;}
	while(i!=n){
		scanf("%lld",&a);
		que.push(a);
		i++;
	}
	if(n==1){printf("0\n"); return 0;}
	while(1){
		//tmp=tmp+que.top();
		tmp=que.top();
		que.pop();
		tmp=tmp+que.top();
		que.pop();
		ans=ans+tmp;
		//ans=ans+(ans+que.top());
		
		if(!que.empty()){que.push(tmp);}
		else {break;}
		
	}
	
	/*while(scanf("%lld",&n)!=EOF){
		if(n==0){return 0;}
		while(n--){
			scanf("%lld")
		}
	}*/
	printf("%lld\n",ans);
	return 0;
}
