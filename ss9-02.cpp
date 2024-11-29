#include <stdio.h>

int main() {
    int arr[100];
    int n;  


    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap %d phan tu vao mang: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int indexToEdit, newValue;
    printf("Nhap vi tri muon sua (0 d?n %d): ", n - 1);
    scanf("%d", &indexToEdit);

    if (indexToEdit < 0 || indexToEdit >= n) {
        printf("Vi tri khong hop le!\n");
    } else {
        printf("Nhap gia tri moi: ");
        scanf("%d", &newValue);

        arr[indexToEdit] = newValue;

        printf("Mang sau khi sua: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

