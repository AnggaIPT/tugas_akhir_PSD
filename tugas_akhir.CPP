#include <iostream.h>
#include <conio.h>

struct karyawan{
	char nikKaryawan[99];
	char namaKaryawan[99];
	char alamatKaryawan[99];
	char jkKaryawan[2];
};
void inDataKaryawan(){
	karyawan kry[99];
	clrscr();
	cout<<"Input Data Karyawan"<<endl;
	cout<<"============================="<<endl;
	for(int dataKry=0;dataKry<99;dataKry++){
		cout<<"Masukkan NIK    : ";cin.ignore();cin.getline(kry[dataKry].nikKaryawan,6);
		cout<<"Masukkan Nama   : ";cin.ignore();cin.getline(kry[dataKry].namaKaryawan,99);
		cout<<"Masukkan Alamat : ";cin.ignore();cin.getline(kry[dataKry].alamatKaryawan,99);
		cout<<"Masukkan Jemis Kelamin[L/P]  : ";cin.ignore();cin.getline(kry[dataKry].jkKaryawan,1);
	}
}

void main(){
	int pilMenu;
	do{
   	cout<<"Pilihan Menu: "<<endl;
      cout<<"1. Input data karyawan"<<endl;
      cout<<"2. Menampilkan data berdasarkan NIK secara ascending (sorting)"<<endl;
      cout<<"3. Cari data karyawan(searcing)"<<endl;
      cout<<"4. Keluar"<<endl;
      cout<<"=============================="<<endl;
      cout<<"Masukkan pilihan [1-4]: ";
      cin>>pilMenu;
      switch(pilMenu){
      	case 1:
            inDataKaryawan();
         	break;
         case 2:
            //code...
         	break;
         case 3:
            //code...
         	break;
         case 4:
            cout<<"Tekan enter untuk keluar....";
         	break;
         default:
         	cout<<"Pilihan tidak ada!!";
            break;
      }
   }while(pilMenu !=5);
	getch();
}
