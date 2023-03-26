#include<stdio.h>
#include<math.h>
int main(){
	int arr[50],n,i,k,m;
	printf("Enter the range:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	m=sqrt(n);
	if(k>arr[n-1] || k<arr[0]){
	   printf("Out of range:");
	}
	for(i=0;i<=n-1;i++){
		if(k==arr[i]){
			printf("Key found\n");
			break;
		}
		else if(k>arr[0] && k<arr[n-1]){
			if(arr[i]<k){
				i=i+m;
			}
			else if(k<arr[i]){
				break;
			}
		}
	}
	if(k!=arr[i]){
		printf("Key not found\n");
	}
	return 0;
	
}
