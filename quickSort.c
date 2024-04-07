#include<stdio.h>
#include<stdlib.h>

void partition(int *arr, int lb, int ub, int *k);
void quickSort(int *arr, int lb, int ub);
void displayArray(int arr[], int size);
int main() {

    int n = 6;
    int arr[] = {5,6,8,9,10,46};
    int lb=0;
    int ub = n-1;

    quickSort(arr, lb, ub);
    displayArray(arr, n);

}
// Definition of quickSort function
void quickSort(int *arr, int lb, int ub) {
    if (lb < ub) {
        int k;
        partition(arr, lb, ub, &k); // Passing the address of k
        quickSort(arr, lb, k - 1);
        quickSort(arr, k + 1, ub);
    }
}
void partition(int *arr, int lb, int ub, int *k) {
    int t;
    *k = lb - 1; // Correct assignment using dereferencing
    int i = lb;
    while (i < ub) {
        if (arr[i] <= arr[ub]) {
            (*k)++; // Incrementing k correctly using dereferencing
            t = arr[i];
            arr[i] = arr[*k];
            arr[*k] = t;
        }
        i++;
    }
    (*k)++;
    t = arr[ub];
    arr[ub] = arr[*k];
    arr[*k] = t;
}

void displayArray(int arr[], int size) {
    printf("Elements in the array are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}