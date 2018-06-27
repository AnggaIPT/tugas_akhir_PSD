#include <iostream.h>
#include <conio.h>
#include <string.h>
#define MAX 999

//int index = 0;
struct karyawan{
	char nikKaryawan[6];
	char namaKaryawan[99];
	char alamatKaryawan[99];
	char jkKaryawan[1];
};
//untuk tumpukan
struct tumpuk{
	int atas;
	karyawan kry[MAX];
}Tertumpuk;
//nilai awal
void awal(){
	Tertumpuk.atas=-1;
}
//jika kosong
bool isEmpty(){
	return Tertumpuk.atas==-1;
}
//jika penuh
bool isFull(){
	return Tertumpuk.atas==MAX-1;
}
//untuk memasukkan data
void inDataKaryawan(){
	if(isFull()){
		cout<<"Data karyawan sudah penuh"<<endl;
	}
	else{
	   do{
	   	clrscr();
					cout<<"Input Data Karyawan"<<endl;
					cout<<"============================="<<endl;
			   	cin.ignore();
					cout<<"Masukkan NIK    : ";cin.ignore();cin.getline(Tertumpuk.kry[Tertumpuk.atas]);
					cout<<"Masukkan Nama   : ";cin.ignore();cin.getline(kry[index].namaKaryawan,99);
					cout<<"Masukkan Alamat : ";cin.ignore();cin.getline(kry[index].alamatKaryawan,99);
					cout<<"Masukkan Jemis Kelamin[L/P]  : ";cin.ignore();cin.getline(kry[index].jkKaryawan,1);
	            index++;
					cout << "Ingin ulang ? [Y/N] : ";
					cin >> ulang;
	   }
	   while(ulang == 'Y' || ulang == 'y');
	}
}
// menampilkan Data
void tampilIsi(){
	if (kosong()==0) {
		for(int index=Tertumpuk.atas;i>=0;i--){
			cout<<""
		}
	}
}
void judul(){
	gotoxy(4,1);cout<<"--------------------------------------------------------------------------------------";
	gotoxy(4,2);cout<<"|";
	gotoxy(7,2);cout<<"No";
	gotoxy(11,2);cout<<"|";
	gotoxy(16,2);cout<<"NI";
	gotoxy(23,2);cout<<"|";
	gotoxy(32,2);cout<<"Nama";
	gotoxy(44,2);cout<<"|";
	gotoxy(55,2);cout<<"Alamat";
	gotoxy(70,2);cout<<"|";
	gotoxy(74,2);cout<<"Jenis Kelamin";
	gotoxy(89,2);cout<<"|";
	gotoxy(4,3);cout<<"======================================================================================";

}
void tampilData(){
	char enter;
	do{
		clrscr();
		judul();
		cout<<endl;
		cout<<"Kembali ke menu utama tekan [Y] :";
		cin>>enter;
	}while(enter == true);
}

void main(){
	int pilMenu;
	do{
		clrscr();
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
            tampilData();
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
		}while( pilMenu !=5 );
	getch();
}
