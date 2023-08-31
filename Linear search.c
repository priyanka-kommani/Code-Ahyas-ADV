#include<stdio.h>
int main(){
	int i,n,arr[10],value,count=0;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	printf("Enter the value to search");
	scanf("%d",&value);
	
	for (i=0;i<n;i++){
		printf("Enter the data in the array");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]==value){
			printf("The value is found at %d position",i+1);
			count=1;
		}
	}
	if(count==0){
		printf("The value is not there in the array");
	}
	
}
