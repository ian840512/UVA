#include<cstdio>
#include<cstdlib>
#include<iostream>
//using namespace std;

void binary_search();
int count=0;
int arr[50005]={0};
int test;
int tall;
int left,right;

int main(){
	//int left,right;
	int num;
	//int arr[50005]={0};
	int tmp;
	scanf("%d",&num);
	scanf("%d",&arr[count]);
	count++;
	for(int i=1;i<num;i++){
		
		scanf("%d",&tmp);
		if(tmp!=arr[count-1]){arr[count]=tmp; count++;}
		
		}
		//printf("num:%d\n",num);
	scanf("%d",&test);
	while(test--){
		scanf("%d",&tall);
		//printf("%d",tall);
		if(tall>arr[count-1]){printf("%d X\n",arr[count-1]);}
		else if(tall==arr[count-1]){printf("%d X\n",arr[count-2]);}
		else if(tall==arr[0]){printf("X %d\n",arr[1]);}
		else if(tall<arr[0]){printf("X %d\n",arr[0]);}
		else if(count==1 && tall==arr[0]){printf("X X\n");}
		else{
			binary_search();
			printf("%d %d\n",arr[left],arr[right]);
		}
	}

	return 0;

}


void binary_search(){
	left=0;
	right=count-1;
	
	while(left+1<right){
		int mid=(left+right)/2;
		/*
		if(arr[mid]<tall){left=mid+1;}
		else if(arr[mid]<tall){right=mid;}
		else{right=mid-1; break;}*/
		if(arr[mid]==tall){
			left=mid-1;
			right=mid+1;
			break;
		}
		else if(arr[mid]>tall){right=mid;}
		else{left=mid;}
		
	}
	
	//printf("right:%d\n",right);
	return;
}
