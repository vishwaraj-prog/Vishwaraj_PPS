#include <stdio.h>

void display(int a[], int n);
void getElement(int a[], int n);
void update(int a[], int n);
void deleteElement(int a[], int *n);

int main() {
    int a[100], n, i, choice;


    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    do {
        printf("\n\n===== MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Get Element\n");
        printf("3. Update Element\n");
        printf("4. Delete Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                display(a, n);
                break;

            case 2:
                getElement(a, n);
                break;

            case 3:
                update(a, n);
                break;

            case 4:
                deleteElement(a, &n);  // pass address
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}

void display(int a[], int n) {
    int i;
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void getElement(int a[], int n) {
    int pos;
    printf("Enter position (1-based): ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        printf("Element = %d\n", a[pos - 1]);
    }
}

void update(int a[], int n) {
    int pos, value;
    printf("Enter position to update (1-based): ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        printf("Enter new value: ");
        scanf("%d", &value);
        a[pos - 1] = value;

        printf("Array after update:\n");
        display(a, n);
    }
}
void deleteElement(int a[], int *n) {
    int pos, i;

    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    if(pos < 1 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }

    for(i = pos - 1; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }

    (*n)--;

    printf("Array after deletion:\n");
    display(a, *n);
}
