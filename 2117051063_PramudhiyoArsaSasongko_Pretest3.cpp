#include <iostream>
#include <conio.h>
using namespace std;

int main(){/* Nama : Pramudhiyo Arsa Sasongko
	   Npm  : 2117051063
	   Kelas: B, ILKOM21*/

	//float
	float gaji,UMR;
	
	//input
	cout<<"Apakah Gaji Anda Sudah Sesuai UMR Daerah Anda?"<<endl;
	cout<<"Cek di Sini Yuk!!!!!!"<<endl;
	cout<<"												"<<endl;
	cout<<"Masukkan Jumlah Gaji Anda : Rp."; cin>>gaji;
	cout<<"Masukkan Besar UMR Daerah : Rp."; cin>>UMR;

    //output
 	cout<<"												"<<endl;
	cout<<"Perbandingan Gaji Anda Dengan UMR : ";
	if(gaji < UMR){
    	cout<<"Gaji Anda Dibawah UMR"<<endl;
	}else if(gaji > UMR){
		cout<<"Gaji Anda Diatas UMR"<<endl;
	}else{
		cout<<"Gaji Anda Setara UMR"<<endl;
	}
	return 0; 
}
