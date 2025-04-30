#include <iostream>

using namespace std;
main()
{
	int umur;
	cout<<"masukan umur : ";
	cin>>umur;
	
	if (umur<=19)
	{
		if (umur<=9){
			cout<<"Anak-anak"<<endl;
		}else {
			cout<<"Remaja"<<endl;
		}
	}else  {
		cout<<"bukan usia anak maupun remaja"<<endl;
	}
}
