#include <stdio.h>

int main() {
    int arr[100];  
    int n;  
    int currentLength;  

    printf("Nhap so phan tu ban dau: ");
    scanf("%d", &n);
    currentLength = n; 

    printf("Nhap %d phan tu vao mang: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int indexToDelete;
    printf("Nhap vi tri muon xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &indexToDelete);

    if (indexToDelete < 0 || indexToDelete >= currentLength) {
        printf("Vi tri khong hop le!\n");
    } else {
    
        for (int i = indexToDelete; i < currentLength - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        currentLength--;  

        printf("Mang sau khi xoa: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

