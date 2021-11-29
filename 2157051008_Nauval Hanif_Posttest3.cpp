#include <iostream>
using namespace std;

int main(){
	/* Nama     : Nauval Hanif
	   Kelas    : B 
	   NPM      : 2157051008
	   Jurusan  : S1-Ilmu Komputer*/
	
	float x;
	
	cout << "Bitcoin: ";
	cin >> x;
	
	cout << "Tipe Ranking: ";
	
	if (x<1){
		cout << "Shrimp";
	}else if (x<10){
		cout << "Crab";
	}else if (x<50){
		cout << "Octopus";
	}else if (x<100){
		cout << "Fish";
	}else if (x<500){
		cout << "Dolphin";
	}else if (x<1000){
		cout << "Shark";
	}else if (x<5000){
		cout << "Whale";
	}else{
		cout << "Humpback";
	}   
}


