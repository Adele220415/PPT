



#include <stdio.h>
#include <stdlib.h>
// Initialize the array arr with elements.
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}




// #include <stdio.h>

// // Function to merge two halves
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;
//     int L[n1], R[n2];

//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[mid + 1 + j];

//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k++] = L[i++];
//         } else {
//             arr[k++] = R[j++];
//         }
//     }
//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }

// // Recursive merge sort function
// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }

// // Function to print the array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);

//     printf("Given array is\n");
//     printArray(arr, arr_size);

//     mergeSort(arr, 0, arr_size - 1);

//     printf("Sorted array is\n");
//     printArray(arr, arr_size);
//     return 0;
// }