#include <stdio.h>
int main(){
	int arr[6]={1,2,3,4,5,6};
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++){
		printf("%d, ",arr[i]);
	}
	
	int m,n;
	printf("\nnhap vao vi tri can sua: ");
	scanf("%d",&m);
	printf("nhap vao gia tri cua vi tri do: ");
	scanf("%d",&n);
	
	arr[m]=n;
	for(int i=0;i<length;i++){
		printf("%d, ",arr[i]);
	}
		
	return 0;
}
