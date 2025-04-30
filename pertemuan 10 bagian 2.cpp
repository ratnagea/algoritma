#include <iostream>

using namespace std;

main()
{
	int hari;
	cout<<"Masukan kode hari : ";
	cin>>hari;
	switch (hari){
		case 1:
			cout << "senin";
			break;
	    case 2:
			cout << "selasa";
			break;
		case 3:
			cout << "rabu";
			break;
		case 4:
			cout << "kamis";
			break;
		case 5:
			cout << "jumat";
			break;
		case 6:
			cout << "sabtu";
			break;
		case 7: 
			cout << "minggu";
			break;
		default:
			cout << "Tidak Ada Hari";				
	}
	return 0;
}
