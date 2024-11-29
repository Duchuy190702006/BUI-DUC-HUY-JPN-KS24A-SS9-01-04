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

    int addIndex, valueToAdd;
    printf("Nhap vi tri muon them: ");
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > currentLength) {
        printf("Vi tri khong hop le!\n");
    } else {
        printf("Nhap gia tri muon them: ");
        scanf("%d", &valueToAdd);
      if (addIndex >= currentLength) {
            arr[addIndex] = valueToAdd;
            currentLength = addIndex + 1;  
        } else {
		     for (int i = currentLength; i > addIndex; i--) {
                arr[i] = arr[i - 1];
            }
            arr[addIndex] = valueToAdd; 
            currentLength++;
        }

      
        printf("Mang sau khi them phan tu: ");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

