/*//struct 1
#include <iostream>  
using namespace std; 

int main( ) 
{ 
	struct tanggalan// deklarasi struct tanggalan 
	{ 
		int tahun; 
		int bulan; 
		int tanggal; 
	};
	
	struct tanggalan tanggal_lahir;//definisi variabel tanggal_lahir 

	//Mengakses member dari struct 
	cout <<"Ketikkan tanggal: "; 
	cin>>tanggal_lahir.tanggal; 
	cout <<"Ketikkan bulan: "; 
	cin>>tanggal_lahir.bulan; 
	cout <<"Ketikkan tahun: "; 
	cin>>tanggal_lahir.tahun; 
	cout <<endl; 
	cout <<"Tanggal : " << tanggal_lahir.tanggal << " / "; 
	cout <<tanggal_lahir.bulan << " / " << tanggal_lahir.tahun <<endl; 
}
*/


/*#include <iostream>  
using namespace std; 

struct persegipanjang	//deklarasi struct persegipanjang 
{ 
	int panjang; 
	int lebar; 
	int luas; 
}; 

int kali(int, int);	//deklarasi fungsi kali  

int main( ) 
{ 
	struct persegipanjang pp;	//deklarasi variabel pp 
	cout <<"Ketikkan panjang : "; 
	cin >> pp.panjang; 
	cout <<"Ketikkan lebar : "; 
	cin >> pp.lebar; 
	pp.luas = kali(pp.panjang, pp.lebar);	// panggil fungsi kali 
	cout << endl; 
	cout << "Panjang = " <<pp.panjang; 
	cout << endl; 
	cout << "Lebar = " <<pp.lebar; 
	cout << endl; 
	cout << "Maka luasnya = " <<pp.luas; 
} 

int kali(int x, int y)//definisi fungsi kali 
{ 
	int Z = x * y; 
	return (Z); 
} 
*/




/*//Program laporan.cpp 
#include<iostream> 
#include<iomanip> 
#include <conio.h> 
using namespace std; 

struct nilai 
{ 
   double uas,uts,tugas;  
   double bobot;  
   char huruf; 
}; 

struct mahasiswa 

{ 
   char namamhs[20]; 
   char nim[9]; 
   nilai hasil; 
}; 

struct mahasiswa mhs[10]; 

void garis() 
{ 
   for(int i=0;i<72;i++) 
   { 
     cout<<'-'; 
   } 
   cout<<'\n'; 
} 

int main() 
{ 
   int n; 
   char matakuliah[20]; 
   cout<<"Masukan nama matakuliah   : ";cin >>matakuliah; 
   cout<<"Masukkan jumlah mahasiswa = "; cin>>n; 
   system ("cls");
 
   for (int i=0; i<n; i++) 
   { 
	cout<<"\nNama Mahasiswa ke-"<<i+1<<" :"; 
	cin>>mhs[i].namamhs; 	
	cout<<"Nim Mahasiswa ke-"<<i+1<<" :"; 
	cin>>mhs[i].nim; 
	cout<<"Nilai UAS Matakuliah Mahasiswa ke-"<<i+1<<" :"; 
	cin>>mhs[i].hasil.uas; 
	cout<<"Nilai UTS Matakuliah Mahasiswa ke-"<<i+1<<" :"; 
	cin>>mhs[i].hasil.uts; 
	cout<<"Nilai Tugas Matakuliah Mahasiswa ke-"<<i+1<<" :"; 
  	cin>>mhs[i].hasil.tugas; 
 
  	mhs[i].hasil.bobot = 0.5*mhs[i].hasil.uas+0.3*mhs[i].hasil.uts+0.2*mhs[i].hasil.tugas; 

  if (mhs[i].hasil.bobot >= 80) mhs[i].hasil.huruf = 'A'; 

  else if (mhs[i].hasil.bobot >= 70) mhs[i].hasil.huruf = 'B'; 

   else if (mhs[i].hasil.bobot >= 56) mhs[i].hasil.huruf = 'C'; 

     else if (mhs[i].hasil.bobot >= 46) mhs[i].hasil.huruf = 'D'; 

 else mhs[i].hasil.huruf = 'E'; 

} 

   cout <<"\nDaftar Nilai mata kuliah : "<<matakuliah<<endl; 
   garis(); 
   cout<<setiosflags(ios::left); 
   cout<<setw(5)<<"No."<<setw(20)<<"Nim"<<setw(10)<<"Nama"; 
   cout<<setiosflags(ios::right); 
   cout<<setw(10)<<"Nilai"<<setw(10)<<"Huruf"<<endl; 
   garis(); 

   for (int i=0;i<n;i++) 
   { 
	cout<<setiosflags(ios::left); 
	cout<<setw(5)<<i+1<<setw(20)<<mhs[i].nim<<setw(10)<<mhs[i].namamhs; 
	cout<<setiosflags(ios::right); 
	cout<<setw(10)<<mhs[i].hasil.bobot<<setw(10)<<mhs[i].hasil.huruf<<"\n"; 
   } 

   garis(); 
}
*/



/*#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream data ("tulis.txt",ios::app);
data<<"Rumahku di Bogor"<<endl;
data<<"Adikku suka bermain bola"<<endl;
data<<"Kucingku putih warnanya"<<endl;
data.close();
}
*/


/*#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
	ofstream data("tulis.txt");
	data<<"Namaku vivi"<<endl;
	data<<"Umurku 10 tahun"<<endl;
	data<<"Hobiku makan"<<endl;
	data.close();
}
*/

