#include <iostream>
using namespace std;

int main(){
	
	int gaji;
	int umr_daerah;
	
	cout<<"Gaji anda: Rp. ";
	cin>>gaji;
	
	cout<<"Umr Daerah Anda: Rp. ";
	cin>>umr_daerah;
	
	cout<<"\n\n";
	
	cout<<"~~~~~~~~loading~~~~~~~~";
	cout<<"\n\n";
	
	if (gaji < umr_daerah){
		cout<<"Gaji anda dibawah UMR" ;
		
	} else if (gaji == umr_daerah){
		cout<<"Gaji anda setara UMR" ;
		
	}else {
		cout<<"Gaji anda diatas UMR" ;
	}
	return 0;
}
	
	
