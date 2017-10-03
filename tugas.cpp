#include <iostream>
using namespace std;

int main() {
	int jumlah;
	
	cout << "Halo pembaca. \n"
		 << "Selamat datang di C++. \n";
	
	cout << "Berapa bahasa yang pernah anda pakai? ";
	cin >> jumlah;
	
	if (jumlah < 1)
		cout << "Baca buku-buku dasar terlebih dahulu";
	else
		cout << "Silahkan Baca Buku Ini. \n";
}
