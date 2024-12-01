#include <stdio.h>
int main(){
	int arr[100];
	int m,n,o;
	printf("ban muon co bao nhieu phan tu: ");
	scanf("%d",&o);
	for(int i=0;i<o;i++){
		printf("nhap gia tri phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("nhap gia tri ban muon chen: ");
	scanf("%d",&m);
	printf("ban muon chen vao dau: ");
	scanf("%d",&n);
	
	for(int i=o;i>=n;i--){
		arr[i+1]=arr[i];
	}
	arr[n]=m;
	
	for(int i=0;i<o+1;i++){
	printf("%d ",arr[i]);
	}
	return 0;
}
