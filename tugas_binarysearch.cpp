#include <iostream>
using namespace std;

int binarySearch(int data[], int n, int target) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (data[mid] == target) 
            return mid;
        else if (data[mid] < target) 
            l = mid + 1;
        else 
            r = mid - 1;
    }
    return -1;
}

int main() {
    int n;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    int nilai[n];

    cout << "Masukkan " << n << " nilai mahasiswa (terurut dari kecil ke besar):\n";
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << (i + 1) << ": ";
        cin >> nilai[i];
    }

    int target;
    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> target;

    int hasil = binarySearch(nilai, n, target);

    cout << endl;
    if (hasil != -1) {
        cout << "Data nilai ditemukan pada indeks: " << hasil << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}