#include <iostream>

// Fungsi untuk mencetak array
void cetakArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Fungsi Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Fungsi Quicksort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int arr[] = {9, 5, 7, 2, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array sebelum diurutkan: ";
    cetakArray(arr, size);

    std::cout << "Hasil Insertion Sort (dari besar ke kecil): ";
    insertionSort(arr, size);
    cetakArray(arr, size);

    std::cout << "Array sebelum diurutkan kembali: ";
    cetakArray(arr, size);

    std::cout << "Hasil Quicksort (dari besar ke kecil): ";
    quickSort(arr, 0, size - 1);
    cetakArray(arr, size);

    return 0;
}
