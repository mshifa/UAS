/* muhamad shifa
* NIM. 16.111.225
* TIF RM 16C
* TUGAS UAS (06/07/2017)
* Compiler : G++ Linux
*/

#include <iostream> //input & output stream
#include "main.cpp"
//#include "modular.cpp"
//#include "modular2.cpp"
//#include "modular3.cpp"
#include "nilai_max.cpp"
#include "parameter.cpp"
#include "pencarianbiner.cpp"
#include "tiket_kereta.cpp"
#include "tugas 2-1.cpp"
#include "tugas 2-2.cpp"
#include "tugas 2-3.cpp"
#include "tugas_array.cpp"
#include "tugas_faktorial.cpp"
//#include "tugas_uts.cpp"
#include "tugas3.cpp"


using namespace std;

int main(){
	int pil;
	system("clear");
		cout<<"-----------------------------\n";
		cout<<"PROGRAM KOMPILASI APPLIKASI\n";
		cout<<"UAS ALGORITMA PEMROGRAMAN II\n";
		cout<<"Dosen : Frencius, MT.\n";
		cout<<"Nama  : muhamad shifa\n\n\n";
        cout<<"-----------------------------\n";
		cout<<"------------MENU-------------\n";
        cout<<"1. main\n";
      //  cout<<"2. modular2\n";
       // cout<<"3. modular3\n";
        cout<<"2. nilai_max\n";
        cout<<"3. parameter\n";
        cout<<"4. pencarianbiner\n";
        cout<<"5. tiket_kereta\n";
        cout<<"6. tugas 2-1\n";
        cout<<"7. tugas 2-2\n";
        cout<<"8. tugas 2-3\n";
        cout<<"9. tugas_array\n";
        cout<<"10. tugas_faktorial\n";
       // cout<<"13. tugas_uts\n";
        cout<<"11. tugas3\n";
       // cout<<"15. modular\n";
    
    
    
        
        cout<<"\n"<<"Masukan Pilihan :";
		cin>>pil;
		
		if(cin.fail()){
			cin.clear(); cin.ignore(); main();
		} else {		
			//seleksi data
			if(pil == 1){ a();}
			//else if(pil == 2){ bb(); }
           // else if(pil == 3){ c(); }
            else if(pil == 4){ d(); }
            else if(pil == 5){ e(); }
            else if(pil == 6){ f(); }
            else if(pil == 7){ g(); }
            else if(pil == 8){ h(); }
            else if(pil == 9){ i(); }
            else if(pil == 10){ j(); }
            else if(pil == 11){ k(); }
            else if(pil == 12){ l(); }
            //'else if(pil == 13){ m(); }
            else if(pil == 14){ nn(); }
           // else if(pil == 15){ o(); }
			else{
				//return main();
                cout<<"KESALAHAN INPUT, ULANGI!\n\n";
			}
		}		
	
}