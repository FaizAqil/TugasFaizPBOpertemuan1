#include <iostream>
using namespace std;

int main() {
    char ulangi;

    do {
        int awal, akhir;
        
        cout << "Masukkan nilai awal rentang: ";
        cin >> awal;

        cout << "Masukkan nilai akhir rentang: ";
        cin >> akhir;

        int bilanganPrima[100]; // Maksimum 100 bilangan prima
        int jumlahPrima = 0;

        // Mencari bilangan prima dalam rentang
        for (int num = awal; num <= akhir; num++) {
            if (num <= 1)
                continue;
            
            bool isPrima = true;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrima = false;
                    break;
                }
            }

            if (isPrima) {
                bilanganPrima[jumlahPrima] = num;
                jumlahPrima++;
            }
        }

        cout << "Bilangan prima dalam rentang " << awal << " hingga " << akhir << " adalah:" << endl;

        // Menampilkan bilangan prima
        for (int i = 0; i < jumlahPrima; i++) {
            cout << bilanganPrima[i] << " ";
        }

        cout << endl;

        cout << "Apakah Anda ingin mengisi data lagi? (y/n): ";
        cin >> ulangi;

    } while (ulangi == 'y' || ulangi == 'Y');

    cout << "Terima kasih. Program selesai." << endl;

    return 0;
}

