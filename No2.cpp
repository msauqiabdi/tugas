#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int x,y,z;
	char r;
	
	cout<< "PROGRAM HITUNG LUAS "<<endl;
	cout<<"--------------------"<<endl;
	cout<<" P = Persegi Panjang "<<endl;
	cout<<" S = Segitiga "<<endl;
	cout<<" Ketik Huruf [P/S] = " ;cin>>r;
	cout<<endl;
	
	if(r=='P' ||r=='p') { 
	cout<<" MENGHITUNG LUAS PERSEGI PANJANG "<<endl;
	cout<<"\n";
	cout<<"---------------------------------"<<endl;
	cout<<" Masukan Nilai Panjang\t = " ;cin>>x;
	cout<<" Masukan Nilai Lebar\t = " ;cin>>y;
	z=x*y;
	cout<<"LUAS PERSIGA PANJANG\t = "  <<z<<" cm";
}
	else if(r=='S'|| r=='s'){
	cout<<" Menghitung Luas Segitiga\t "<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"\n";
	cout<<" Masukan Nilai Alas\t =	" ;cin>>x;
	cout<<" Masukan Nilai Tinggi\t = " ;cin>>y;
	z=0.5*x*y;
	cout<<"Luas Segitiga\t\t = "<<z<<"cm";
}
	else{
		cout<<"Input Yang Anda Masukan Salah Coba Lagi :p";
	}	
	return 0;
	}
	 
	
	

	
