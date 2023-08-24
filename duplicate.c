#include<stdio.h>
int main(){
	int i,arr[10],n,k,j;
	printf("enter the no of elements in the array");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter the elements in the array");
		scanf("%d",&arr[i]);
	}
	i=0;
	for(j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	printf("The unique elements in the given array are ");
	for(k=0;k<=i;k++){
	
		printf("%d",arr[k]);
	}
}
