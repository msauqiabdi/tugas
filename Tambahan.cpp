#include <iostream>

using namespace std;

int main(){
	int ta,cau,na;
	
	cout<<"-----------------------------------------"<<endl;
	cout<<" MASUKAN TINGGI SEGITIGA = ";cin>>na;
	cout<<"-----------------------------------------"<<endl;
	cout<<endl;
	
	for (ta=0;ta<na;ta++)
	{
		for (cau=0;cau<na;cau++)	
		{
			cout<<"";//rata kiri"
		}
		for(cau=0;cau<=ta;cau++)
		{
			cout<<"*";//rata kanan
		}
		cout<<endl;
	}
	system("PAUSE");
	return 0;
}
