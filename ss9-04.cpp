#include <stdio.h>

int main() {
    int arr[100]; 
    int currentLength = 0; 
    int choice;  
    int n, index, value;

    do {
     
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
             
                printf("Nhap so phan tu ban dau: ");
                scanf("%d", &n);
                currentLength = n;  
entLen
                printf("Nhap %d phan tu vao mang: \n", n);
                for (int i = 0; i < n; i++) {
                    scanf("%d", &arr[i]);
                }
                break;

            
                printf("Mang hien tai: ");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            
                printf("Nhap vi tri muon them: ");
                scanf("%d", &index);

                if (index < 0 || index > currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri muon them: ");
                    scanf("%d", &value);

                    for (int i = currentLength; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    currentLength++; 
                }
                break;

           
                printf("Nhap vi tri muon sua: ");
                scanf("%d", &index);

                if (index < 0 || index >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[index] = value;
                }
                break;

          
                printf("Nhap vi tri muon xoa: ");
                scanf("%d", &index);

                if (index < 0 || index >= currentLength) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = index; i < currentLength - 1; i++) {
                        arr[i] = arr[i + 1];  
                    }
                    currentLength--;  
                }
                break;

            
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai.\n");
        }

    } while (choice != 6);  

    return 0;
}

