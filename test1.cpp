#include<stdio.h>
#define MAX 100
int main(){
	int arr[MAX];
	int answer;
	int n;
	do{
		printf("1. nhap so can nhap va gia tri phan tu\n");
		printf("2.in ra gia tri cac phan tu dang quan ly\n");
		printf("3.in ra gia tri lon nhat cua mang\n");
		printf("4.in ra cac phan tu la so nguyen to trong mang\n");
		printf("5.them 1 phan tu vao trong mang\n");
		printf("6.xoa 1 phan tu trong mang\n");
		printf("7.sap xep theo thu tu tang dan\n");
		printf("8.tim kiem phan tu va in ra indexcua phan tu do\n");
		printf("9.thoat\n");
		scanf("%d",&answer);
		
		
		
		if(answer==1){
			printf("nhap 1 so bat ki: ");
			scanf("%d",&n);
			if(n<1 || n>MAX){
				printf("ko hop le");
				return 1;
			}
			for(int i=0;i<n;i++){
				printf("nhap gia tri phan tu %d : ",i);
				scanf("%d",&arr[i]);
				printf("\n");
		}
		}
		
		if(answer==2){
			for(int i=0;i<n;i++){
			printf("%d\t", arr[i]);
			printf("\n");
		}
		}
		
		if(answer==3){
			int maxx;
			for(int i=0;i<n;i++){
				if(arr[i]>maxx){
					maxx=arr[i];
				}	
			}
			printf("gia tri lon nhat la: %d ",maxx);
			printf("\n");
		}
		
		if(answer==4){
			int check=0;
				printf("so nguyen to la: ");
			for(int i=0;i<n;i++){
				if(arr[i]!=2 && arr[i]%2==0 || arr[i]%3==0 || arr[i]%5==0 ){
					printf("  ");
				}else{ 
				printf("%d",arr[i]);
				printf("\t");
				check=1;
				}
			}
			if(check==0){
				printf("ko co so nguyen to");
				printf("\n");	
			}
			printf("\n");
		}
		
		if(answer==5){
			n=n+1;
			printf("nhap them phan tu la: ");
			scanf("%d",&arr[n-1]);
				for(int i=0;i<n;i++){
			printf("%d\t", arr[i]);
		}
		printf("\n");
		}
		
		if(answer==6){
			int del;
			printf("chon vi tri phan tu ban muon xoa : ");
			scanf("%d",&del);
			if(del<0 || del>n){
				printf("ko hop le");
				return 1;
			}
			for (int i = del; i < n - 1; i++) {
        		arr[i] = arr[i + 1];
    		}
    			n--;
		}
		
	}while(answer!=9);

 return 0;
 }

