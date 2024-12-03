#include<stdio.h>
#define vac 100
int main(){
	 int arr[vac][vac]; 
    int n, l;   
    int choice;  
	do{
	
	
	printf("MENU\n");
		printf("1.nhap kich co va gia tri  cac phan tu cua mang\n");
		printf("2.in gia tri cac phan tu cua mang theo ma tran\n");
		printf("3.in ra  cac phan tu nam tren duong bien va tinh tich\n");
		printf("4.in ra cac phan tu nao tren duong cheo chinh\n");
		printf("5.in ra cac phan tunam tren duong cheo phu\n");
		printf("6.tim kiem  1 phan tu  va in ra vi tri  cua phan tu do trong mang\n");
		printf("7.sap xep  duong cheo chinh teheo thu tu tang dan\n");
		printf("8.ket thuc\n");
		scanf("%d",&choice);
	
		
			
		
    
    
	   
	    	 
	    
		
	if(choice==1){
		   
				    printf("nhap so luong hang: ");
				    scanf("%d", &n);
				    printf("nhap so luong cot: ");
				    scanf("%d", &l);
				    printf("nhap cac gia tri cho mang :\n");
				    for (int i = 0; i < n; i++) {
				        for (int j = 0; j < l; j++) {
				            printf("nhap phan tu thu [%d][%d]: ", i, j);
				            scanf("%d", &arr[i][j]);
				        }
				    }
				}
				
	if(choice==2){
				    for(int i=0;i<n;i++){
				    	for(int j=0;j<l;j++){
				    		printf("%d\t",arr[i][j]);
				    		
						}
						printf("\n");
					}
				}
	if(choice==3){
					for(int i=0;i<l;i++);
					printf("%d\t",arr[0][i]);
	}
				
					
				} while(choice!=8);


 return 0;
 }

