#include <iostream>
using namespace std;

int arr[20];											// Membuat Array dengan panjang data 20
int n;													// Membuat variabel inputan n

void input() {					// Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";	// Membuat inputan jumlah element Aray
		cin >> n;										// Membuat varibel inputan n

		if (n <= 20) {									// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang and masukkan maksimal 20 Elemen. \n";	// Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;									// Mmebuat jarak perbaris program
	cout << "======================" << endl;		// Membuat tampilan susunan data element Array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)						// Menggunakan perulangan for untuk penyimpanan data pada Array
	{

	}
}