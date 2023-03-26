#include<stdio.h>
void linear_search(int [],int);
int main()
{
	int arr[50],n,key,i;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:");
	for(i=0;i<=n-1;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	linear_search(arr,n);
	return 0;
}
void linear_search(int arr[50],int n)
{
	int i,key,id=-1,comp=0;
	printf("Enter the element you want to search: ");
	scanf("%d",&key);
	for(i=0;i<=n-1;i++) 
	{
		if(arr[i]==key)
		 {
		 	key=arr[i];
		 	id=i;
		 	comp++;
		 }
	}
	if(id==-1)
	 {
	 	printf("Element not found\n");
	 }
	printf("The element %d is at index %d\n",key,id);
	printf("The number of comparisions are: %d",comp);
}
