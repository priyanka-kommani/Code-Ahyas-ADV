#include<stdio.h>
int max(int count, int maxi)
{
    return (count > maxi ) ? count : maxi;
}
int main(){
	int i,count=0,maxi=0,n,arr[10];
	printf("enter the no of elements in the array");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]==1){
			count++;
		}
		else count--;
		maxi=max(maxi,count);
	}
	printf("the consequitive ones are %d",maxi);
}
