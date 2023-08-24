#include<stdio.h>
int main(){
	int i,largest=-100,secondlar=-100,arr[10],n,smallest=10000,secondsmall=1000;
	printf("enter the no of elemnts in the given array");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("enter the number");
		scanf("%d",&arr[i]);
	}
	largest=arr[0];
	smallest=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>largest){
			secondlar=largest;
			largest=arr[i];
		}
		else if(arr[i]!=largest&&arr[i]>secondlar)
		{
			secondlar=arr[i];
		}
		else if(arr[i]<smallest){
			secondsmall=smallest;
			smallest=arr[i];
			printf("%d",secondsmall);
		}
		else if(arr[i]!=smallest&&arr[i]<secondsmall)
		{
			secondsmall=arr[i];
		}
	}
	printf("The second highest number is %d\n The first highest number is %d\n",secondlar,largest);
	printf("The second smallest number is %d\n The first smallest number is %d\n",secondsmall,smallest);
}
