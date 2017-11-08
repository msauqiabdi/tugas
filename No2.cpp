#include <iostream>

using namespace std;
int main(){
	int x,y,z;
	char r;
	
	cout<<"PROGRAM HITUNG LUAS"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"P = PERSEGI PANJANG "<<endl;
	cout<<"S = SEGITIGA "<<endl;
	cout<<"KETIKKAN HURUF [P/S] = " ;cin>>r;
	cout<<endl;
	
	if{r=='P' ||r=='p'} {
	cout<<"MENGHITUNG LUAS PERSEGI PANJANG"<<endl;
	cout<<"n";
	cout<<"---------------------------------"<<endl;
	cout<<"MASUKAN NILAI PANJANG = " ;cin>>x;
	cout<<"MASUKAN NILAI LEBAR = " ;cin>>y;
	z=x*y;
	cout<<"LUAS PERSIGA PANJANG = "  <<z<<" cm";
}
	else if(r=='S'|| r=='s'){
	cout<<"Menghitung Luas Segitiga"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"n"
	cout<<"Masukan Nilai Alas"
	cout<<"Masukan Nilai Tinggi"
	z=0.5*x*y;
	cout<<"Luas Segitiga = "<<z<<"cm";
	
	else{
		cout<<"Input Yang Anda Masukan Salah Coba Lagi :p";
	}	
	return 0;
	}
	 
	
	
	}
	
}
