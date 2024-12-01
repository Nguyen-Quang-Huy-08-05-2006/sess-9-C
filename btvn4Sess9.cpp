#include<stdio.h>
int main(){
	int arr;
	int a,o;
	while(0){
	printf("MENU \n \n1.nhap vao mang. \n2.hien thi mang. \n3.them phan tu. \n4.sua phan tu. \n5.xoa phan tu. \n6.thoat. \ncau tra loi cua ban: ");
	scanf("%d",a);
	switch(a){
		case 1:
			printf("ban muon co bao nhieu phan tu: ");
				scanf("%d",&o);
				for(int i=0;i<o;i++){
					printf("nhap gia tri phan tu thu %d: ",i+1);
					int arr[i];
					scanf("%d",&arr[i]);
				}
			break;
		case 2:
			printf("ban muon co bao nhieu phan tu: ");
				scanf("%d",&o);
				for(int i=0;i<o;i++){
					printf("nhap gia tri phan tu thu %d: ",i+1);
					int arr[i];
					scanf("%d",&arr[i]);
				}
				for(int i=0;i<o+1;i++){
				printf("%d ",arr[i]);
			}
			break;
		case 3:
			printf("ban muon co bao nhieu phan tu: ");
				scanf("%d",&o);
				for(int i=0;i<o;i++){
					printf("nhap gia tri phan tu thu %d: ",i+1);
					int arr[i];
					scanf("%d",&arr[i]);
				}
				int m,n,o;
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
			break;
		case 4:
			printf("ban muon co bao nhieu phan tu: ");
				scanf("%d",&o);
				for(int i=0;i<o;i++){
					printf("nhap gia tri phan tu thu %d: ",i+1);
					int arr[i];
					scanf("%d",&arr[i]);
				}
				int length=sizeof(arr)/sizeof(arr[0]);
			int m,n;
			printf("\nnhap vao vi tri can sua: ");
			scanf("%d",&m);
			printf("nhap vao gia tri cua vi tri do: ");
			scanf("%d",&n);
			arr[m]=n;
			for(int i=0;i<length;i++){
				printf("%d, ",arr[i]);
			}
			break;
		case 5:
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
			break;
		default:
			break;
	}
	}
	return 0;
}

