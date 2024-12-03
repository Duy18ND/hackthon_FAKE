#include<stdio.h>
int main(){
	printf("--------MENU--------\n");
	printf("\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu \n");
	printf("2. In ra gia tri cac phan tu dang quan ly \n");
	printf("3. In ra gia tri lon nhat cua mang \n");
	printf("4. In ra cac phan tu la so nguyen to trong mang\n");
	printf("5. Them mot phan tu vao trong mang\n");
	printf("6. Xoa mot phan tu trong mang\n");
	printf("7. sap xep mang theo thu tu tang dan\n");
	printf("8. tim kiem phan tu (nguoi dung nhap) va in ra index cua phan tu do\n");
	printf("9. Thoat khoi chuong trinh\n");
	printf("\n");
	int i;
	int menu,mang,phantu;
	int arr[100];
	while(1){
		printf("\nMoi ban lua chon chuc nang MENU tren (1-9) ");
		scanf("%d",&menu);
		
	switch(menu){
	case 1:{
		printf("1. Nhap so phan tu can nhap va gia tri cac phan tu \n");
		printf("\nNhap do dai cua mang la : ");
		scanf("%d",&mang);
		for(i=0; i<mang;i++){
			printf("So phan tu thu %d la: ",i+1);
			scanf("%d",&arr[i]);
		}
		break;
	}//case1 stop
	case 2:{
		printf("2. In ra gia tri cac phan tu dang quan ly\n");
		printf("\n");
		for( i=0; i<mang;i++){
			printf("%4d",arr[i]);
		}
		break;
	}//case 2 stop
	case 3:{
		int giatrilonnhat = arr[0];
		printf("3. In ra gia tri lon nhat cua mang \n");
			for( i=1; i <mang;i++){
			if(arr[i] > giatrilonnhat){
			giatrilonnhat = arr[i];	
			}
		}
			printf("Gia tri lon nhat trong mang la: %d",giatrilonnhat);
		break;
	}//case 3 stop
	case 4:{ 
	 //chua lam duoc tim so nguyen to trong mang
	}
	case 5:{
		int value,index;
		int current = mang;
			printf("5. Them mot phan tu vao trong mang\n");
			printf("Phan tu muon them la : ");
			scanf("%d",&value);
			printf("Vi tri muon them la: ");
			scanf("%d",&index);
			for(int i = current; i > index; i--){
				arr[i] = arr[i -1];
			}
			arr[index] = value;
			current++;
			printf("Mang sau khi them la: \n");
			for(int i=0; i< current; i++){
				printf("%d \n",arr[i]);
			}
		
		break;
	}//case 5 stop
	case 6:{
		
	int xoa;
		 printf("\n Nhap vi tri muon xoa tu (0 - %d) la : ",mang -1);
		 scanf("%d",&xoa);
		 for(int i = xoa -1; i < mang -1 ;++i){
		 	arr[i] = arr[i + 1];
		 }
		 mang--;
		 printf("\n MANG SAU KHI XOA LA : ");
		 for(int i = 0; i < mang; i++){
		 	printf("\n %d",arr[i]);
		 }
	break;
}
	case 7:{
		printf("7. sap xep mang theo thu tu tang dan\n");
			for(int a= 0; a< mang -1; a++ ){
				for(int j =0; j < mang -1; j++){
					if(arr[a] > arr[j]){
						int temp = arr[j];
						arr[j] = arr[i +1];
						arr[j+1] = temp;
					}
				}
			}
			printf("Mang sau khi sap xep ");
			for(int i =0; i <mang; i++){
				printf("%4d",arr[i]);
			}
		break;
	}
	case 8:{	
printf("8. tim kiem phan tu (nguoi dung nhap) va in ra index cua phan tu do\n");
		 int phantu,index,mid;
    printf("Nhap phan tu tim kiem la: ");
    scanf("%d", &phantu);
    int left = 0, right = mang - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == phantu) {
            index = mid;
            break;
        }
        if (arr[mid] < phantu) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi trí %d\n", phantu, index);
    } else {
        printf("Phan tu %d không ton tai trong mang\n", phantu);
    }

		break;
	}
	case 9:{
			printf("9. Thoat khoi chuong trinh\n");
	return 1;
	}
	default:{
		printf("Khong ton tai");
		break;
	}
	
}//menu			
}//while
	return 0;

}
