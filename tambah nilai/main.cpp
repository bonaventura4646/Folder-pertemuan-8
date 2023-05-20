#include <iostream>

void cetakNilaiGenapTerkecil(int A[], int size) {
    int nilaiGenapTerkecil = -1;  // Inisialisasi dengan nilai default

    for (int i = 0; i < size; i++) {
        if (A[i] % 2 == 0) {
            if (nilaiGenapTerkecil == -1 || A[i] < nilaiGenapTerkecil) {
                nilaiGenapTerkecil = A[i];
            }
        }
    }

    if (nilaiGenapTerkecil != -1) {
        std::cout << "Nilai genap terkecil: " << nilaiGenapTerkecil << std::endl;
    } else {
        std::cout << "Tidak ada nilai genap dalam array." << std::endl;
    }
}

bool adalahBilanganGanjil(int bilangan) {
    return bilangan % 2 != 0;
}

int main() {
    int A[] = {6, 7, 4, 3, 2};
    int size = sizeof(A) / sizeof(A[0]);

    cetakNilaiGenapTerkecil(A, size);

    int bilangan;
    std::cout << "Masukkan bilangan: ";
    std::cin >> bilangan;

    if (adalahBilanganGanjil(bilangan)) {
        std::cout << "Bilangan " << bilangan << " adalah ganjil." << std::endl;
    } else {
        std::cout << "Bilangan " << bilangan << " bukan ganjil." << std::endl;
    }

    return 0;
}
