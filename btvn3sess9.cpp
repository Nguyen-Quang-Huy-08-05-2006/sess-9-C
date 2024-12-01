#include <stdio.h>
int main(){
	int arr[100];
	int m,o;
	printf("ban muon co bao nhieu phan tu: ");
	scanf("%d",&o);
	for(int i=0;i<o;i++){
		printf("nhap gia tri phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("nhap vi tri ban muon xoa: ");
	scanf("%d",&m);
	
	for(int i=m;i<o;i++){
		arr[i]=arr[i]+1;
	}
	
	for(int i=0;i<o-1;i++){
	printf("%d ",arr[i]);
	}
	return 0;
}
