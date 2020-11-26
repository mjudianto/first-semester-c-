/*//program menghitung faktorial (program while / pengulangan)
#include <iostream>
using namespace std;

int main ()
{
	int bil,fakt = 1,pengali;
	cout<<"\nMasukan sebuah bilangan bulat : ";
	cin>>bil;
	cout<<endl;
	pengali = bil;
	
	while (pengali >=1)
	{
		fakt = fakt * pengali;
		pengali = pengali - 1;
	}
	
	cout<<"faktorial dari "<<bil<< " : "<<fakt<<endl;
}
*/




/*//program 32 : menghitung rata-rata
//menggunakan instruksi while dengann counter
#include <iostream>
using namespace std;

int main()
{
	int n1,nr,i,b;
	cout<<"\nMasukan jumlah bilangan : ";
	cin>>b;
	cout<<"\nProgram untuk menghitung rata-rata dari " <<b<< " buah bilangan :"<<endl;
	cout<<"Ketikan "<<b<< " buah bilangan : "<<endl;
	i = 0;
	nr = 0;
	while (i<b)
	{
		cin>>n1;
		nr += n1;
		i += 1;
	}
	nr /= b;
	cout<<endl;
	cout<<"rata-rata dari " <<b<< " bilangan : "<<nr<<endl;
}
*/




/*//program 34 : menghitung rata-rata
//menggunakan instruksi while dengan sentinel
#include <iostream>
using namespace std;

int main()
{
	int n1,nr,i;
	cout<<"\nProgram untuk menghitung rata-rata bilangan :"<<endl;
	cout<<"Ketikkan bilangan yang akan dihitung rata-ratanya : "<<endl;
	cout<<"Kettikan angka -1 untuk berhenti"<<endl;
	i=0;
	nr=0;
	while (n1 != -1)
	{
		cin>>n1;
		if (n1 == -1)
			break;
		nr += n1;
		i++;
	}
	nr /= i;
	cout<<endl;
	cout<<"Rata-rata dari "<<i<<" bilangan = "<<nr<<endl;
}
*/



/*//program 35 : menghitung rata-rata
//menggunakan instruksi for
#include <iostream>
using namespace std;

int main ()
{
	int n1,nr,i,b;
	cout<<"\nMasukan jumlah bilangan : ";
	cin>>b;
	cout<<"\nProgram untuk menghitung rata-rata dari " <<b<< " buah bilangan :"<<endl;
	cout<<"Ketikan "<<b<< " buah bilangan : "<<endl;
	i = 0;
	nr = 0;
	for (i=0 ; i<b ; i++)
	{
		cin>>n1;
		nr += n1;
	}
	nr /= b;
	cout<<endl;
	cout<<"rata-rata dari " <<b<< " bilangan : "<<nr<<endl;
}
*/




/*//program 36 : menghitung otomatis
#include<iostream>
using namespace std;

int main()
{
	int x,y;
	
	for (x=1, y=1 ; x<=5 ; x++, y++)
	{
		cout<<x<<" tambah "<<y<<" = "<<(x+y)<<endl;
	}
}
*/




/*//program 37 : menghitung rata-rata
//menggunakan instruksi DO WHILE dengan counter
#include <iostream>
using namespace std;

int main()
{
	int n1,nr,i,b;
	cout<<"\nProgram untuk menghitung rata-rata"<<endl;
	cout<<"Ketikkan banyaknya bilangan : ";
	cin>>b;
	cout<<endl;
	cout<<"Ketikkan bilangan yang akan dihitun rata-ratanya : "<<endl;
	i=0;
	nr=0;
	do
	{
		cin>>n1;
		nr += n1;
		i++;
	}
	while (i<b);
	nr /= b;
	cout<<endl;
	cout<<"Rata-rata dari "<<b<<" bilangan = "<<nr<<endl;
}
*/



/*//program 38 : untuk memerika password
//menggunakan DO WHILE dengan sentinel
#include<iostream>
using namespace std;

int main ()
{
	long pass,input;
	pass=12345;
	do
	{
		cout<<"\nMasukan password : ";
		cin>>input;
	}
	while (input != pass);
	cout<<"Password anda benar";
}
*/




/*//program 39 : contoh program nested while
#include <iostream>
using namespace std;

int main()
{
	int i,bt,nr,nt,j,bs,sum;
	char nama[20];
	
	cout<<"\nKetikkan banyaknya siswa : ";
	cin>>bs;
	cout<<"Ketikkan banyaknya tugas : ";
	cin>>bt;
	cout<<"-----------------------------------";
	i=0;
	
	while (i<bs)
	{
		cout<<"\nKetikkan nama siswa : ";
		cin>>nama;
		cout<<endl;
		j=1;
		sum=0;
		
		while (j <= bt)
		{
			cout<<"Ketikkan nilai tugas ke " << j << " : ";
			cin>>nt;
			sum += nt;
			j++;
		}
		
		nr = sum/bt;
		
		cout<<endl;
		cout<<"Nama : "<<nama<<endl;
		cout<<"Nilai tugas rata-rata : "<<nr<<endl;
		cout<<"------------------------------------";
		i++;
	}
	cout<<endl<<"Program selesai"<<endl;
}
*/




/*//program 3..10 : contoh program nested for
#include <iostream>
using namespace std;

int main()
{
		int i,bt,nr,nt,j,bs,sum;
	char nama[20];
	
	cout<<"\nKetikkan banyaknya siswa : ";
	cin>>bs;
	cout<<"Ketikkan banyaknya tugas : ";
	cin>>bt;
	cout<<"-----------------------------------";
	i=0;
	
	for (i = 0 ; i <bs ; i++)
	{
		cout<<"\nKetikkan nama siswa : ";
		cin>>nama;
		cout<<endl;
		sum=0;
		
		for (j = 1 ; j <= bt ; j++)
		{
			cout<<"Ketikkan nilai tugas ke " << j << " : ";
			cin>>nt;
			sum += nt;
		}
		nr = sum/bt;
		
		cout<<endl;
		cout<<"Nama : "<<nama<<endl;
		cout<<"Nilai tugas rata-rata : "<<nr<<endl;
		cout<<"------------------------------------";
	}
	cout<<endl<<"Program selesai"<<endl;
}
*/




/*//program 3.11 : menampilkan hasil pangkat
//menggunakan statement break
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n,c;
	char p;
	cout<<"\nKetikkan sembarang bilangan : ";
	cin>>n;
	cout<<"Program untuk menghitung pangkat bilangan "<<n;
	cout<<"Mulai dari 0 sampai 10"<<endl;
	
	for (c = 0 ; c < 10 ; c++)
	{
		cout<<n<<" dipangkatkan "<<c<<" = ";
		cout<< pow (n,c);
		cout<<endl;
		cout<< "Tekan S atau s untuk berhenti, atau tombol lain untuk lanjut ";
		cin>>p;
		if (p == 'S' || p == 's')
			break;
	}
	cout<<endl;
	cout<<"Program selesai";
}
*/




/*//program 3.12 menghitung biaya rental
// tiap pinjam 2 dvd gatirs 1, tiap film baru kena biaya Rp.500
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,total,c=1,baru=0,biaya=0;
	char jawab;
	cout<<"\nKetikkan banyak DVD : ";
	cin>>n;
	
	do
	{
		cout<<"\nApakah  film baru ? (y/t) : ";
		cin>>jawab;
		if	((jawab == 'y') || (jawab == 'Y'))
			baru += 500;
		if	((c % 3) == 0)
		{
			cout<<"DVD ini gratis biaya sewa"<<endl;
			continue;
		}
		biaya += 2000;
	}
	while (c++ < n);
	total = biaya + baru;
	cout<<endl;
	cout<<"Banyaknya DVD = "<<n<<endl;
	cout<<"Total biaya sewa = Rp."<<total<<endl;
}
*/




/*//latihan modul 3
//menghitung banyak kalori dari lari 10 - 60 menit
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float kecepatan,kalori=0,jarak=0;
	int waktu=10;
	cout<<"\nMasukan kecepatan berjalan anda (3.5 / 5 / 6km/jam): ";
	cin>>kecepatan;
	
	for (waktu = 10 ; waktu <=60 ; waktu += 5)
	{
	if	(kecepatan == 3.5)
		kalori = waktu * 2.8;
	else	if	(kecepatan == 5)
				kalori = waktu * 4.3;
		else	if	(kecepatan = 6.5)
				{	kalori = waktu * 5.1;	}
	cout<<setw(5)<<waktu<<" menit |"<<setw(5)<<kalori<<" Kalori "<<endl;
	}
}
*/




/*//PR 3 : subbab 3.3 nomor 4
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int cm=0,m=0;
	float inch,ft,yard;
	cout<<setw(10)<<" centimeter "<<setw(12)<<" inch "<<endl;
	for	(cm = 0 ; cm <= 100 ; cm += 5)
	{
		inch = cm * 0.393701;
		cout<<setw(5)<<cm<<" cm | "<<setw(7)<<inch<<" inch"<<endl;
	}
	cout<<endl<<endl;
	cout<<setw(9)<<" meter "<<setw(14)<<" feet "<<setw(15)<<" yard "<<endl;
	for (m = 0 ; m <= 100 ; m +=5)
	{
		ft = m * 3.28084;
		yard = m * 1.09361;
		cout<<setw(5)<<m<<" m | "<<setw(7)<<ft<<" feet | "<<setw(7)<<yard<<" yard"<<endl;
	}
}
*/




/*//pr praktikum 3 : subbab 3.3 no 6
//535200047 mathew judianto
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
	int b=9999,i=0,bil=0;
	while	(bil <= b)
	{
		i++;
		bil = i*i;
		if (bil>b)
	{
		break;
	}
		cout<<setw(7)<<i<<" dikuadrat = "<<bil<<endl;
	}
}
*/




/*//pr praktikum 3 : subbab 3.5 nomor 2
//menampilkan segitiga
#include <iostream>
using namespace std;

int main ()
{
	int n=0,b=0;
	cout<<"\nMasukan jumlah tingkat segitiga : ";
	cin>>n;
	while (n >= 0)
	{
		cout<<endl;;
		n -= 1;
		b=n;
		{
			while (b >= 0)
			{
				cout<<" * ";
				b -= 1;
			}
		}
	}
}
*/




/*//pr praktikum 3 : modul 3 nomor 3
//menampilkan laporan toko
#include <iostream>
using namespace std;

int main()
{
	int pdt,i=0,t=0;
	char ntk[20];
	cout<<"\nMasukan jumlah toko : ";
	cin>>i;
	cout<<"\nLaporan Penjualan"<<endl;
	cout<<"------------------------------------"<<endl;
	cout<<"(tiap x mewakili Rp. 1.000.000,-)"; 
	for	(i=i ; i > 0 ; i -= 1)
	{
		cout<<"\n\nMasukan nama toko : ";
		cin>>ntk;
		cout<<"Masukan pendapatan toko : Rp.";
		cin>>pdt;
		t = pdt/1000000;
		cout<<"Pendapatan toko "<<ntk<<" = ";
		for	(t=t ; t > 0 ; t -= 1)
		{
			cout<<"x";
		}
	}
}
*/




/*//bab 3 nomor 8 : menghitung gaji
#include <iostream>
using namespace std;

int main()
{
	int gaji,i=0,k,t;
	char nama[20];
	for	(i=0 ; i<20 ; i++)
	{
		cout<<"\n\nMasukan nama pemain : ";
		cin>>nama;
		cout<<"Masukan gaji : Rp.";
		cin>>gaji;
		if	(gaji <= 10000000)
		{
			k = gaji*0.2;
		}
		else	if	(gaji <= 15000000)
		{
			k = gaji*0.1;
		}
			else	if	(gaji <= 20000000)
			{
				k = gaji*0.05;
			}
				else
				{
					k = 0;
				}
		t = gaji + k;
		cout<<"\nPemain "<<nama<<" dengan gaji Rp."<<gaji<<endl;
		cout<<"Kenaikan gaji anda : Rp."<<k;
		cout<<"\nTotal gaji setelah kenaikan : Rp."<<t;
	}
}
*/




/*//bab 3 nomor 13 : menghitung belanjaan
#include<iostream>
using namespace std;

int main()
{
	int harga,jumlah,total,diskon,TA,rp,kembalian,jb,th=0;
	char nama[20];
	cout<<"\nKetikkan banyak jenis belanjaan anda : ";
	cin>>jb;
	for	(jb=jb ; jb>0 ; jb -=1)
	{
		cout<<"\nMasukan nama barang : ";
		cin>>nama;
		cout<<"Masukan harga barang : Rp.";
		cin>>harga;
		cout<<"Masukan jumlah barang : ";
		cin>>jumlah;
		total = harga * jumlah;
		cout<<"total harga : Rp."<<total;
		
		if	(jumlah < 10)
		{
			diskon = 0;
		}
		else	if	(jumlah < 25)
		{
			diskon = 0.05 * total;
		}
		else	if	(jumlah < 50)
		{
			diskon = 0.1 * total;
		}
		else	if	(jumlah < 100)
		{
			diskon =	0.15 * total;
		}
		else
		{
			diskon = 0.2 * total;
		}
		cout<<"\nDiskon : Rp."<<diskon;
		TA = total - diskon;
		cout<<"\nTotal harga setelah diskon : Rp."<<TA<<endl;
		th += TA;
	}
		cout<<"\nTotal belanjaan yang harus dibayarkan : Rp."<<th<<endl;
		cout<<"\n--------------------------------------";
		cout<<"\nMasukan jumlah uang yang anda pakai untuk membayar : Rp.";
		cin>>rp;
		if	(rp >= th)
		{
			kembalian = rp - th;
			cout<<"Kembalian anda : Rp."<<kembalian<<endl;
			cout<<"Terima kasih telah melakukan transaksi ini"<<endl;
		}
		else
			cout<<"Maaf uang anda tidak cukup untuk melakukan transaksi ini"<<endl;
}
*/



#include <iostream>
using namespace std;

int main(){
	string nama = "";
	cout<<"name : ";
	cin>>nama;
	if (nama == "vella"){
		cout<<nama<<" bobrok";
	}
	else{
		cout<<"hi "<<nama;
	}

	cout<<endl<<endl;
	system("pause");
}