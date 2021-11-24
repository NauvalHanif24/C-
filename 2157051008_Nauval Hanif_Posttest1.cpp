#include <iostream>
using namespace std;

int main(){
	//STRING//
	string NPM;
	string Tanggal_Lahir;
	string Bulan_Lahir;
	string Tahun_Lahir;
	
	//INPUT//
	cout << "Masukan NPM \t\t : ";
	getline(cin,NPM);
	cout << "Masukan Tanggal Lahir \t : ";
	getline(cin,Tanggal_Lahir);
	cout << "Masukan Bulan Lahir \t : ";
	getline(cin,Bulan_Lahir);
	cout << "Masukan Tahun Lahir \t : ";
	getline(cin,Tahun_Lahir);
	cout << "        " << endl;
	
	//OUTPUT//
	cout << "Username  : " << NPM << endl;
	cout << "Password  : " << Tahun_Lahir << Bulan_Lahir << Tanggal_Lahir << endl;
	
	return 0;
}
