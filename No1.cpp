#include <iostream>


using namespace std;
int main (){
	int x,y,z;
	cout<<"Masukkan x\t\t = "; cin>>x;
	cout<<"Masukkan y\t\t = "; cin>>y;
	if (x<y){
		z=y-x;
	}
	else{
		z=x-y;
	}
	cout<<"Hasil Pengurangan \t = "<<z;
}
