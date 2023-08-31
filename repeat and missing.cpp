#include<stdio.h>
int main(){
	int i,j,arr[10],count,n,sn,sn2,s=0,s2=0,val1,val2,x,y;
	printf("enter the number of elements in  the array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the elements in  the array");
	    scanf("%d",&arr[i]);
	}
	sn=(n*(n+1))/2;
	sn2=(n*(n+1)*(2*(n)+1))/6;
	for(i=1;i<n;i++){
		s2=s2+arr[i]*arr[i];
		s=s+arr[i];
	}
	s2=s2+1;
	s=s+1;

//	for(i=0;i<n;i++){
//
//	printf("%d\n",arr[i]);
//   }
   val1=s-sn;
   val2=s2-sn2;
   val2=val2/val1;
   x=(val1+val2)/2;
   y=x-val1;
//   printf("%d\n",sn);
//   printf("%d\n",sn2);
//   printf("%d\n",s);
//   printf("%d\n",s2);
//   printf("%d\n",val1);
//   printf("%d\n",val2);
   printf(" The repeated element is %d\n",x);
   printf(" The missing element is %d\n",y);
}
