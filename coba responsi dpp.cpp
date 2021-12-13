#include <iostream>
//#include <ncurses.h>
 using namespace std;
 
 int main (){
 	int arr[5] = {2,3,4,5,5};
 	int cari;
 	bool cek = false;
 	
 	cout << "angka yang ingin dicari : ";
 	cin >> cari;
 	
 	for(int i=0;i<5;i++){
 		if(cari==arr[i]){
 			cout << "angka ditentukan pada indeks ke" << i+1 << endl;
 		
		 }
	 }
 }
