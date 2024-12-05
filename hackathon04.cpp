#include <stdio.h>
#define MAX 100

int main() {
	int arr[100], choice, temp, value;
	int n = 0;
	do {
		printf("\nMENU\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra cac gia tri phan tu theo mang\n");
		printf("3. Dem so luong cac phan tu hoan hao trong mang\n");
		printf("4. Tim ra gia tri lon thu hai trong mang\n");
		printf("5. Them mot phan tu moi vao vi tri ngau nhien trong mang\n");
		printf("6. Xoa mot phan tu tai vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu tang dan\n");
		printf("8. Cho nguoi dung nhap mot phan tu, kiem tra xem phan tu do co ton tai trong mang hay khong\n");
		printf("9. Sap xep lai bang, hien thi toan bo phan tu trong mang sao cho toan bo so chan dung truoc so le dung sau\n");
		printf("10. Dao nguoc thu tu cac phan tu co trong mang\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban la: ");
		scanf("%d", &choice);
		switch (chocie) {
			case 1:
				printf("Nhap so phan tu co trong mang: ");
				scanf("%d", &n);
				for (int i = 0; i < n; i++){
					printf("Nhap cac gia tri co trong mang: ");
				scanf("%d", &arr[i]);
				}
				printf("Nhap cac gia tri co trong mang: ");
				scanf("%d", &arr[i]);
				break;
			case 2:
			    printf("%d", arr[i]);
			    for (int i = 0; i < n; i++) {
				printf("Phan tu %d: ", i + 1);
			}
			break;
			case 4:
			if (n = 0){
				return n;
			}	
			int max = arr[0];
			for (int i = 0; i < n; i++) {
				if(arr[i] > max) {
					max = arr[i];
			while (1) {
				int i--;
			}
				}	
			}
			printf("Gia tri lon thu hai cua mang la: \n", max);
			break;
			case 5:
				if (n >= MAX) {
				printf("Khong hop le. Mang da day ");
			} else {
				printf("Nhap gia tri can them: ");
				scanf("%d", &value);
				arr[n++] = value;
				printf("Phan tu %d duoc them vao mang\n", value);
			}	
				break;
			case 6:
				printf("Nhap gia tri can xoa: ");
			scanf("%d", &value);
			number = -1;
			for(int i = 0; i < n; i++) {
				if (arr[i] == value) {
					number = i;
					break
				}
			} 
			if (number != -1) {
				for (int i = number; i < n - 1; i++) {
					arr[i] = arr[i + 1];
				}
				n--;
				printf("Phan tu %d da duoc xoa.\n", value);
			} else {
				printf("Phan tu %d khong ton tai trong mang.\n", value);
			}
			break;
			case 7:
				 for (int i = 0; i < i - 1; ++i){
				 	for (int j = 0; j < j - i - 1; ++j){
				 		if(arr[i][i] > arr[j + 1]){
				 			int temp = arr[j];
				 			arr[i][i]= arr[j + 1];
				 			arr[j + 1] = temp;
				 			
						 }
                    }
					  	 }
				printf("Mang sau khi sap xep la: \n", arr[i][i]);
				 break;
			case 8:
				printf("Hay nhap vao mot phan tu: ");
				scanf("%d", &value);
				if ( value != arr[i]) {
					printf("Khong ton tai phan tu %d trong mang \n", value);
				} else {
					printf("Co phan tu %d trong mang.\n", value)
				}
				break;
			case 9:
				if ("n % 2 == 0") {
					printf("Day la so chan\n");
				} else {
					printf("Day la so le\n");
				}
				break;	
			case 10:
			if (n = 0){
				return n;
			}
			int max = arr[0];
			for (int i = 0; i < n; i++) {
				if(arr[i] > max) {
					max = arr[i];
				}	
			}
			printf("%d", max);
			for (int i = 0; i < n; i--) {
				printf("Phan tu %d: ", i - 1);
			}
			break;		
			case 11:
				 	printf("Thoat\n");
				default:
					printf("Lua chon khong ton tai. Nhap lai\n")		
				}	
		}
	} while (choice != 11);
	
	return 0;
} 
