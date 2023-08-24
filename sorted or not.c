#include<stdlib.h>
#include<stdio.h>
int main(){
	int i,arr[10],n;
	printf("enter the no of elements in the array");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter the elements in the array");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]>arr[i+1]||arr[i+1]>arr[i]){
			printf("Array is sorted");
		}
		
		else printf("NOT");
		break;
	}
	
	    

}
