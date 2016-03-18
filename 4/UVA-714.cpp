#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<stack>
using namespace std;

int main(){
	long long int n,k,m;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld %lld",&k,&m);
	
		long long int arr[505];
		long long int high,low,mid;
		high=low=0;
		for(int i=0;i<k;i++){scanf("%lld",&arr[i]); high=high+arr[i]; if(low<arr[i]){low=arr[i];}}
	//printf("%lld\n",low);	
		while(high>low){
			mid=(high+low)/2;
			long long int count=1;
			long long int tmp=0;
			for(int i=0;i<k;i++){
				/*int tmp=mid;
				while(tmp>0){
					tmp=tmp-arr[count];
					count++;
					
				}*/
				tmp+=arr[i];
				if(tmp>mid){
				tmp=0;
				count++;
				i--;
				}
				//count--;
			}
			//printf("%d ",count);
				if(count>m){low=mid+1;}
				else{high=mid;}
		}
		//printf("%lld\n",high);
		long long int tmp=0;
		long long int count=0;
		stack<long long int> sta;
		stack<long long int> ans;
		
		for(int i=0;i<k;i++){sta.push(arr[i]);}
		//count=k-1;
		for(int i=0;i<k;i++){
			tmp+=sta.top();
			if((tmp>high || (k-i-1)<(m-count-1)) && count!=(m-1)){
				tmp=0;
				ans.push(-1);
				count++;
			}
			
			if(tmp==0){tmp+=sta.top();}
			ans.push(sta.top());
			sta.pop();
			
			/*tmp=high;
			while(tmp>0 && count>=(m-i-1)){
				tmp=tmp-arr[count];
				if(tmp>=0){}
			}*/
		}
		while(!ans.empty()){
			if(ans.top()!=(-1))printf("%lld",ans.top());
			else printf("/");
			ans.pop();
			if(!ans.empty()){printf(" ");}
			else printf("\n");
		}
		//cout<< ans.size();
		//printf("\n%d",ans.size());
	}



}
