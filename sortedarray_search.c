#include<stdio.h>
int main(){
	int arr[50],n,i,j,temp,ind=-1,k,comp=0;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-i-2;j++)
		{
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				comp++;
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	printf("\nEnter the element you want to search:");
	scanf("%d",&k);
	for(i=0;i<=n-1;i++){
		if(k==arr[i])
		{
			k=arr[i];
			ind=i;
			comp++;
			printf("The element %d is at index %d\n",k,ind);
		}
	}
	printf("The number of comparisions are %d\n",comp);
	if(ind==-1){
		printf("Key Not found\n");
	}
	
	return 0;
}
