//program perpustakaan C++

#include<iostream.h>
#include<conio.h>
#include<windows.h>

char *daftar[5]={"Borland C++", "Algoritma", "Matematika Diskrit", "Kalkulus", "Komputer Aplikasi"};

void menu_utama();
void pemilihan_berulang();
void anggota();
void pinjam_buku();
void pengembalian_buku();
void keluar_program();

// fungsi untuk menampilkan loading sementara

void loading ()
{
	cout<<endl;
	cout<<"\t\t\t\tPlease wait";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\tLoading";
	for (int i=0;i<20;i++)
	{
		cout<<".";
		Sleep (100);
	}
cout<<endl;
clrscr();
}

//fungsi untuk menampilkan menu utama
void menu utama ()
{
clrscr();
loading();

	cout<<"\t============================|"<<endl; Sleep (200);
	cout<<"\t|                           |"<<endl; Sleep (200);
	cout<<"\t\tPROGRAM PERPUSTAKAAN C++\t"<<endl; Sleep (200);
	cout<<"\t|                           |"<<endl; Sleep (200);
	cout<<"\t/===========================|"<<endl; Sleep (200);
	cout<<"\t***** PROGRAMMED BY AGS *****"<<endl; Sleep (200);
	cout<<endl;
	cout<<"\tSelamat datang di perpustakaan kami! "<<endl;
	cout<<endl;
	cout<<"\tPilihan Menu: "<<endl;
	cout<<"\tl. Anggota"<<endl;
	cout<<"\t2. Pinjam Buku"<<endl;
	cout<<"\t3. Pengembalian Buku"<<endl;
	cout<<"\t4. Tutup Program"<<endl;
	cout<<endl;

int pilihan;
	cout<<"\tMasukkan Pilihan: "; cin>>pilihan;
	cout<<endl;
switch (pilihan)

{
	case 1:
	anggota();
	break;
	case 2:
	pinjam buku();
	break;
	case 3:
	pengembalian buku();
	break;
	case 4:
	keluar_program();
	break;
	default:
	clrscr();
	cout<<endl;
	cout<<"\t\t Tolong Pilih Salah Satu dan Ulangi Kembali!";
	cout<<endl;
	cout<<endl;
	loading();
	break;
}

//fungsi pemilihan berulang
void pemilihan berulang ()

{
	char pilih;
	cout<<endl;
	cout<<"\tInputkan [Y] Untuk Kembali Ke Menu Utama."<<endl;
	cout<<"\tInputkan [N] Untuk Keluar Dari Program."<<endl;
	cout<<"\t[Y/N]...?\t: "; cin>>pilih;
if (pilih=='Y' || pilih=='y')
	{ menu utama(); }
else if (pilih=='N' || pilih=='n')
	{ keluar_program(); }
else
{	clrscr();
	cout<<endl;
	cout<<"\t\tSilahkan Ulangi Kembali! Terima Kasih!"<<endl;
	cout<<endl;
	cout<<endl;
	loading();
	}

//fungsi menampilkan anggota
void anggota ()
{
clrscr();
	cout<<"\t============================"<<endl;
	cout<<"\t\t\t\t ANGGOTA\t\t\t"<<endl;
	cout<<"\t============================"<<endl;
	cout<<endl;
	cout<<"\t\t\t\t N@"<<endl;
	cout<<endl;
	cout<<"\tNAMA:                                        NIM:"<<endl;
	cout<<"\tl.Aulia                                      111111***"<<endl;
	cout<<"\t2.Prayoga                                    111111***"<<endl;
	cout<<"\t3.Dewa                                       111111***"<<endl;
	cout<<"\t4.Mayang                                     111111***"<<endl;
	cout<<"\t5.Damar                                      111111***"<<endl;
pemilihan_berulang();
}

//fungsi untuk menampilkan menu peminjaman buku
void pinjam_buku()
{
clrscr();
	cout<<"\t===================="<<endl;
	cout<<"\t\t\t\tPINJAM BUKU\t\t\t"<<endl;
	cout<<"\t===================="<<endl;
	cout<<endl;
	cout<<"\tKode\tJudul Buku"<<endl;
	cout<<"\t===================="<<endl;
	cout<<endl;
for (int i=0;i<5;i++)
	{ cout<<"\t"<<(i+1)<<"\t"<<daftar [i]<<endl; }
	cout<<"\t===================="<<endl;
	cout<<endl;
char nama [10];
	cout<<"\tNama: ";
cin>>nama;
unsigned int tanggal, tgl=0;
	cout<<"\tMasukkan tanggal pinjam (1-31): ";
cin>>tanggal;
if ((tanggal<0) || (tanggal>31))
{
	cout<<"\tInput tanggal salah!"<<endl;
}
else
{
if (tanggal<25)
{ tgl=tanggal+7; }
if (tanggal>=25)
{ tgl=(tanggal+7)-30; }
}
	cout<<endl;
int x, jumlah;
	cout<<"\tJumlah Buku Yang Ingin Anda Pinjam: "; cin>>jumlah;
	cout<<"\t------------------------------------";
	cout<<endl;
for (x=0;x<jumlah; x++)
{
int kode;
	cout<<endl;
	cout<<"\tInputkan Kode Buku: "; cin>>kode;
switch (kode)
	{ case 1:
	cout<<"\tAnda Telah Meminjam Buku: "<<daftar [0]<<endl;
	break;
	case 2:
	cout<<"\tAnda Telah Meminjam Buku: "<<daftar [1]<<endl;
	break;
	case 3:
	cout<<"\tAnda Telah Meminjam Buku: "<<<daftar [2]<<endl;
	break;
	case 4:
	cout<<"\tAnda Telah Meminjam Buku: "<<daftar [3]<<endl;
	break;
	case 5:
	cout<<"\tAnda Telah Meminjam Buku: "<<daftar [4]<<endl;
	break;
	default:
	cout<<"\tBuku dengan kode tersebut tidak tersedia. "<<endl;
	break;
	}
}
	cout<<endl;
	cout<<"\t";
for (int i=0;i<=56;1++)
{ cout<<"-";
Sleep (30); }
	cout<<endl;
	cout<<"\tDetail: "<<endl;
	cout<<"\tNama Peminjam: "<<nama<<endl;
	cout<<"\tJumlah buku yang dipinjam: "<<jumlah<<endl;
	cout<<"\tTanggal kembali (7 hari): "<<tgl<<endl;
	cout<<endl;
pemilihan berulang();
}
//fungsi untuk menampilkan menu pengembalian buku
void pengembalian buku ()
{
clrscr();
	cout<<"\t=========="<<endl;
	cout<<"\t\t\tPENGEMBALIAN BUKU\t\t"<<endl;
	cout<<"\t================="<<endl;
	cout<<endl;
	cout<<"\tKode\tJudul Buku"<<endl;
	cout<<"\t================"<<endl;
	cout<<endl;
for (int i=0;i<5;i++)
	{ cout<<"\t"<<(i+1)<<"\t"<<daftar[i]<<endl; }
	cout<<"\t================="<<endl;
	cout<<endl;
char nama [10];
	cout<<"\tNama: ";
cin>>nama;
unsigned int tanggal, tgl=0;
	cout<<"\tMasukkan tanggal kembali (1-31): ";
cin>>tanggal;
if ((tanggal<0) || (tanggal>31))
{
cout<<"\tInput tanggal salah!"<<endl;
}
else
tgl=tanggal;
cout<<endl;
int x, jumlah, kode;
	cout<<"\tJumlah Buku Yang Ingin Anda Kembalikan " ; cin>>jumlah;
	cout<<"\t----------------------------------";
	cout<<endl;
for (x=0;x<jumlah;x++)
{
	cout<<endl;
	cout<<"\tInputkan Kode Buku: "; cin>>kode;
switch (kode)
{ case 1:
	cout<<"\tAnda Telah Mengembalikan Buku: "<<daftar [0]<<endl;
	break;
	case 2:
	cout<<"\tAnda Telah Mengembalikan Buku: "<<daftar [1]<<endl;
	break;
	case 3:
	cout<<"\tAnda Telah Mengembalikan Buku: "<<daftar [2]<<endl;
	case 4:
	cout<<"\tAnda Telah Mengembalikan Buku: "<<daftar [3]<<endl;
	break;
	case 5:
	cout<<"\tAnda Telah Mengembalikan Buku: "<<daftar [4]<<endl;
	break;
	default:
	cout<<"\tBuku dengan kode tersebut tidak tersedia. "<<endl;
	break;
	}
}
cout<<endl;
cout<<"\t";
for (int i=0;i<=48;i++)
	{ cout<<"-";
	Sleep (30); }
	cout<<endl;
	cout<<"\tDetail: "<<endl;
	cout<<"\tNama Peminjam: "<<nama<<endl;
	cout<<"\tJumlah buku yang dikembalikan: "<<jumlah<<endl;
	cout<<"\tTanggal dikembalikan: "<<tgl<<endl;
pemilihan berulang();
}
//fungsi untuk keluar program
void keluar_program()
{
clrscr();
	cout<<endl;
	cout<<"\t============================="<<endl;
	cout<<"\t                            |"<<endl;
	cout<<"\t\tPROGRAM PERPUSTAKAAN C++\t"<<endl;
	cout<<"\t                            |"<<endl;
	cout<<"\t============================="<<endl;
//fungsi untuk keluar program
void keluar_program()
{
clrscr();
	cout<<endl;
	cout<<"\t============================="<<endl;
	cout<<"\t                            |"<<endl;
	cout<<"\t\tPROGRAM PERPUSTAKAAN C++\t"<<endl;
	cout<<"\t                            |"<<endl;
	cout<<"\t============================="<<endl;
	cout<<"\t*** PROGRAMMED BY AGS **"<<endl;
	cout<<endl;
	cout<<"\t--- Terima Kasih Atas Kunjungan Anda! ---"<<endl;
	cout<<endl;
	cout<<"\tPlease wait ";
for (int i=0;i<15;i++)
{
	cout<<". ";
	Sleep (100);
	}
}
int main ()
{
menu utama ();
return 0;
}
