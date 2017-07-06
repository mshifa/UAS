#include <iostream>
using namespace std;
  
//prototype
void prosesBaca();
void prosesTukar();
void prosesTampil();

// variabel global 
	int a, b, temp;
	
//program utama
	
void bb() {
		prosesBaca();
		prosesTukar();
		prosesTampil();

}
// proses baca
void prosesBaca(){
	cout << " masukan nilai a : ";
	cin >> a;
	
	cout << " masukan nilai b : ";
	cin >> b;
}

// proses tukar
void prosesTukar (){	
	temp = b;
	
	b = a;
	a = temp;
}
	
// proses tampil
void prosesTampil (){
		cout << "===============" << endl;
	cout << " nilai a sekarang : " << a << endl ;
	cout << " nilai b sekarang : " << b;
}