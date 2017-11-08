#include <iostream>

using namespace std;
int main(){
	int tb,bb,hasil1,hasil2;
	cout<<" -------------------- "<<endl;
	cout<<" MEHITUNG BADAN IDEAL "<<endl;
	cout<<" -------------------- "<<endl;
	cout<<"Masukan Tinggi Badan =";cin>>tb;
	cout<<"Masukan Berat Badan =";cin>>bb;
	
	if(bb<(tb/2.5)){
		cout<<"Anda Termasuk UNDERWEIGHT";
	}
    else if (((tb/2.5)<=bb) && (bb<=(tb/2.3))){
    	cout<<"Anda Termasuk Normal ";
	}
	else if((tb/2.3)<bb){
		cout<<" Anda Termasuk OVERWEIGHT";
	}
	else{
		cout<<"Input yang anda masukan salah :P";
	}
}
