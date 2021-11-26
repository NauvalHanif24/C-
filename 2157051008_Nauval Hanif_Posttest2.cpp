#include <iostream>
using namespace std;

int main(){
	/* Nama   : Nauval Hanif
	   Kelas  : B 
	   Jurusan: S1_Ilmu Komputer
	   NPM    : 2157051008 */
	
	float bitcoin;
	float harga_beli;
	float harga_sekarang;
	float persen_keuntungan;
	float keuntungan;
	
	cin >> bitcoin;
	cin >> harga_beli;
	cin >> harga_sekarang;
	cout << "\n";
	
	persen_keuntungan = ((harga_sekarang-harga_beli) / (harga_beli)) * 100 ;
	keuntungan = (harga_sekarang - harga_beli) * bitcoin / (1000000);
	
	cout << "Keuntungan/Kerugian: " << keuntungan << "Juta\n";
	cout << "Persen Kenaikan/Kerugian: " << persen_keuntungan << "%";
}
	


