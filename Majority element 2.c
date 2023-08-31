#include<stdio.h>
#include<math.h>
int main(){
	int i,arr[10],count1=0,element1=-1000,element2=-1000,n,count2=0,n1=0,n2=0;
	printf("enter the number of elemnts in the array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the numbers in the array");
		scanf("%d",&arr[i]);
		
	}

	
	for(i=0;i<n;i++){
		if(count1==0&&arr[i]!=element2){
			count1=1;
			element1=arr[i];
			
		}
		else if (arr[i]!=element1&&count2==0){
			count2=1;
			element2=arr[i];
		}
		else if (element1==arr[i]) count1++;
		
		else if(element2==arr[i]) count2++;
		
		
		else{
			count1--;
			count2--;
		}
		
	}
	for(i=0;i<n;i++){
		if(arr[i]==element1){
			n1++;
		
		}
		else if (arr[i]==element2) {
			n2++;

		}
			
			
	
	}
	
	if(n1>n/3){
		printf("The majority element is %d repeted for :%d\n",element1,n1);
	}
	if(n2>n/3){
		printf("The majority element is %d repeted for :%d\n",element2,n2);
	}
	else printf("No majority 2 element");
	

}
