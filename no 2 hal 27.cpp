#include <iostream>


using namespace std;
int main()
{
		//deklarasi variable
		int suhu, nilaiX;
		
		//input tampilan
		cout<<"masukan suhu:";
		cin>>suhu;
		cout<<"masukan nilaI X:";
		cin>>nilaiX;
		cout<<endl;
		
		//rumusan variable
		if(( suhu > nilaiX ))
		cout<<"suhu panas";
		if(( suhu <= nilaiX ))
		cout<<"suhu dingin";
		
		return 0;
}
