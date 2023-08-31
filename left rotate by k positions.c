#include<stdio.h>
int main(){
	int i,arr[10],n,k,j,temp;
	printf("enter the no of elements in the array");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter the elements in the array");
		scanf("%d",&arr[i]);
	}
	printf("enter the elements in the array");
	scanf("%d",&k);
	for(i=0;i<k;i++){
		temp=arr[0];
//		printf("%d",temp);
	
	
		for(j=0;j<n-1;j++){
			arr[j]=arr[j+1];
//			printf("%d\n",arr[j]);
			}
			
		    arr[n-1]=temp;
		    
}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}

