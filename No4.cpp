#include <iostream>

using namespace std;

int main(){
	int ta;
	cout<<" POSITIF-NEGATIF-NOL "<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Masukan Angka = " ;cin>>ta;
	cout<<"---------------------------"<<endl;
	if(ta>0){
		cout<<" Angka yang anda masukan Positif ";
	}
	else if(ta<0){
		cout<<" Angka yang anda masukan Negatif ";
	}
	else if(ta=0){
		cout<<" Angka yang anda masukan Nol";	
	}
	else{
		cout<<" Angka yang anda masukan Pecahan";
	}	

}
