/*//program 41.cpp 
#include <iostream> 
#include <math.h> 
#include <stdlib.h> 
#include <conio.h> 
using namespace std; 

int main() 
{ 
	int x; 
	double u,v; 
	
	u = 4.2; 
	v = 3.0; 
	cout << " " << u <<" pangkat " << v << " = " << pow(u,v) << endl <<endl; 
	cout << " 5.0 pangkat 4 = " << pow(5.0, 4) << endl<< endl; 
	u = u + pow(3.0, 3); 
	cout << " u = " << u << endl; 
	cout <<endl; 
	x = -15; 
	cout << " nilai absolut dari " << x << " = " << abs(x) << endl; 
	//system (“pause”); 
	return 0; 
} 
*/




/*//program42.cpp 
#include <iostream>  
#include <iomanip> 
using namespace std; 

long pangkat3 (int k); //deklarasi fungsi kuadrat 

int main( ) 
{ 
	cout << "Bilangan   Pangkat3 bilangan" << endl; 
	for (int bil =200; bil<=1000; bil+=200) 
	cout <<setw(8)<<bil<<setw(12)<< pangkat3(bil) << endl; 
	//system ("pause"); 
} 

long pangkat3 (int k) 
{ 
	return(k*k*k); 
} 
*/




/*// program43.cpp 
// mencari bilangan yang lebih besar dari 2 bilangan 
#include <iostream>  
using namespace std; 

double besar(double x, double y); //deklarasi fungsi besar 

int main( ) 
{ 
	double i = 50; 
	double j = 75; 
	double a, b, max; 
	
	cout << " Diketahui I = " << i << " dan J = " << j << endl; 
	cout << " Bilangan yang lebih besar adalah: " << besar(i,j)<< endl;  
	cout <<" Ketikkan 2 buah bilangan : "; 
	cin >> a; 
	cin >> b; 
	max = besar(a,b);// memanggil fungsi besar 
	cout << " Bilangan yang lebih besar adalah : " << max <<endl; 
	//system(“pause”); 
	return 0; 
} 

//definisi fungsi besar: menghasilkan bilangan yang terbesar dari 2 bilangan 
double besar(double x, double y) 
{ 
	if (x >= y) 
	return(x); 
	else 
	return(y); 
} 
*/




/*// program44.cpp 
// mencari bilangan yang lebih besar dari 3 bilangan 
#include <iostream>  
using namespace std; 

double besar(double x, double y); //deklarasi fungsi besar 
double besar3(double x, double y, double z); //deklarasi fungsi besar3 

int main( ) 

{ 
	double i = 50; 
	double j = 75; 
	double k = 60; 
	double a, b, c, max; 

	cout <<" Diketahui I = " << i << " , J = " << j << " dan K = " << k << endl; 
	cout << " Bilangan yang terbesar adalah: " << besar3(i,j,k) << endl;  
	cout <<" Ketikkan 3 buah bilangan : "; 
	cin >> a; 
	cin >> b; 
	cin >> c; 
	max = besar3(a,b,c);// memanggil fungsi besar 
	cout << " Bilangan yang terbesar adalah : " << max <<endl; 
	//system(“pause”); 
	return 0; 
} 

//definisi fungsi besar: menghasilkan bilangan yang terbesar dari 2 bilangan 
double besar(double x, double y) 
{ 
	if (x >= y) 
	return(x); 
	else 
	return(y); 
} 

//definisi fungsi besar3: menghasilkan bilangan yang terbesar dari 3 bilangan, 
// dengan menggunakan fungsi besar 
double besar3(double x, double y, double z) 
{ 
	return besar(x, besar(y,z)); 
} 
*/




/*//submodul 4.2.1 nomor 1
#include <iostream>
using namespace std;

int besar(int x, int y); 

int main()
{
	int n=0,bil,a,b,c;
	cout<<"\nMasukan 2 buah bilangan : ";
	cin>>a;
	cin>>b;
	c = besar(a,b);
	while (n<10)
	{
		cout<<"Masukan sebuah bilangan : ";
		cin>>bil;
		c = besar(c,bil);
		n++;
	}
	cout << "Bilangan yang terbesar adalah : " << c <<endl; 
	return 0; 
}

int besar(int x, int y)
{ 
	if (x >= y) 
	return(x); 
	else 
	return(y); 
}
*/




/*//program45.cpp 
#include <iostream> 
using namespace std; 

int tambah(int x,int y)  // definisi function dengan return 
{ 
  int hasil; 
  hasil=x+y; 
  return hasil; 
} 

void kurang(int x, int y)// definisi void function dengan parameter 
{ 
  cout<<"Hasil pengurangan bilangan  "<<x<<" - "<<y<<" = "<<x-y; 
} 

int main() 
{ 
  int bil,a,b; 
  cout<<"Masukkan bilangan A : ";cin>>a; 
  cout<<"Masukkan bilangan B : ";cin>>b; 
  cout <<endl; 
  bil=tambah(a,b);//pemanggilan fungsi tambah(a,b) 
  cout<<"Hasil penambahan bilangan " <<a<<" + "<<b<<" = "<<bil<<endl; 
  kurang(a,b);//pemanggilan fungsi kurang(a,b) 
}
*/





/*//program star.cpp 
#include <iostream> 
using namespace std; 

void printst(int blank, int starline); 

int main() 
{ 
	int baris, k, sumblank; 
	cout<<"Ketikkan banyaknya baris bintang yang dicetak(1 - 20): "; 
	cin>> baris; 

	while (baris <0 || baris > 20) 
	{ 
		cout<<"Banyaknya baris antara 1 - 20" <<endl; 
		cin >> baris; 
	} 
	
	cout <<endl << endl; 
	sumblank = 30; 

	for (k = 1; k <= baris; k++) 
	{
		printst(sumblank, k); //memanggil fungsi printst  
		sumblank--; 
	} 
} 

void printst(int b, int s) 
// fungsi untuk mencetak sebaris blank dan * 
{ 
	int j; 
	for (j = 1; j <= b; j++) 
	cout <<' '; 
	for (j = 1; j <= s; j++) 
	cout <<" * "; 
	cout<<endl;
} 
*/



/*//program46.cpp: value parameter 
#include <iostream> 
using namespace std; 

//deklarasi fungsi nilai 
void nilai(int n); 

int main() 
{ 
	int angka = 8; 
	cout <<"Sebelum pemangilan fungsi: " 
	<<"\nIsi variabel angka = " <<angka <<endl; 

	// memanggil fungsi nilai 
	nilai(angka); 
	cout <<"Setelah pemangilan fungsi: " 
	<<"Isi variabel angka = " <<angka <<endl; 

	return 0; 
} 

//definisi fungsi nilai 
void nilai(int n) 
{ 
	cout <<endl<<"Di dalam fungsi: " 
	<<"Isi variabel angka mula-mula = " <<n <<endl; 
	
	// nilai variabel diubah 
	n = 15; 
	cout <<"Di dalam fungsi: " 
	<<"Isi variabel angka setelah diubah = " <<n <<endl<<endl; 
}
*/




/*//program48.cpp: value & reference paremeter 
#include <iostream> 
using namespace std; 

//deklarasi fungsi  
void fsatu(int a, int& b, char c); 
void fdua(int& x, int y, char& z); 

int main() 
{ 
	int n1, n2; 
	char kar; 

	n1 = 10; 
	n2 = 15; 
	kar = 'A'; 

	cout <<"  Pada program utama, kondisi awal : "<<endl 
	<<"  bil1 = "<< n1 <<" , bil2 = "<< n2  
	<<" dan karakter = " << kar <<endl; 
	cout <<endl; 

	fsatu(n1, n2, kar); 
	cout <<"  Pada program utama, setelah fungsi fsatu : " <<endl 
	<<"  bil1 = "<< n1 <<" , bil2 = "<< n2  
	<<" dan karakter = " << kar <<endl; 
	cout<<endl; 

	fdua(n1, n2, kar); 
	cout <<"  Pada program utama, setelah fungsi fdua : " << endl 
	<<"  bil1 = "<< n1 <<" , bil2 = "<< n2  
	<<" dan karakter = " << kar <<endl; 
	return 0; 
} 

void fsatu(int a, int& b, char c) 
{ 
	int s; 

	s = a; 
	a++; 
	b = b * 2; 
	c = 'B'; 

	cout <<"Di dalam fungsi fsatu, hasil fungsi : " << endl 
	<<"bil1 = "<< a <<" , bil2 = "<< b  
	<<" karakter = " << c  <<" dan s = " << s <<endl; 
	cout <<endl; 
} 

void fdua(int& x, int y, char& z) 
{ 
	x++; 
	y = y * 2; 
	z = 'C'; 

	cout <<"Di dalam fungsi fdua, hasil fungsi : " << endl 
	<<"bil1 = "<< x <<" , bil2 = "<< y <<" dan karakter = " << z <<endl; 
	cout <<endl; 
} 
*/




/*//subbab 4.2.1 nomor 8
//535200047 mathew judianto
//praktikum 4
#include <iostream>
using namespace std;

float konversi(float a, char b);

int main()
{
	float x,z;
	char y;
	cout<<"PROGRAM KONVERSI SUHU"<<endl;
	cout<<"\nKode konversi : " <<endl
	<< "R = reamur" <<endl
	<< "F = Fahrenheit" <<endl
	<< "K = Kelvin";
	cout <<"\nMasukan suhu (dalam celcius) serta kode konversi (ketikkan kode menggunakan huruf besar) : ";
	cin >> x;
	cin >> y;
	
	z = konversi(x,y);
	cout << x << " derajat Celcius setara dengan " << z << " derajat " << y;
}

float konversi(float a, char b) 
{
	float hasil;
	switch (b)
	{
		case 'R' : 
		{
			hasil = 0.8 * a;
			break;
		}
		case 'F' :
		{
			hasil = 1.8 * a + 32;
			break;
		}
		case 'K' :
		{
			hasil = a + 273;
			break;	
		}
		default :
		{
			hasil = 0;
			a = 0;
			cout<<"\nAnda salah memasukan kode" << endl;
			break;
		}
	}
	return hasil;
}
*/



/*//modul 4.2.2 nomor 4
//535200047 mathew judianto
//praktikum 4
#include <iostream>
#include <math.h>
using namespace std;

void rumus_d();

int main ()
{
	cout<<"\nPROGRAM RUMUS LINGKARAN"<<endl;
	rumus_d();
}

void rumus_d()
{
	int x1,y1,x2,y2;
	float d,j,k,l;
	cout<<"\nMasukan koordinat kartesius pertama : ";
	cin>>x1;
	cin>>y1;
	cout<<"Masukan koordinat kartesius kedua : ";
	cin>>x2;
	cin>>y2;
	d = sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
	cout<<"\njarak = "<<d;
	j = d/2;
	cout<<"\nRadius = "<<j;
	k = 22/7 * d;
	cout<<"\nKeliling = "<<k;
	l = 22/7 * j*j;
	cout<<"\nLuas = "<<l;
}
*/




/*//subbab 4.3 nomor 5
//535200047 mathew judianto
//praktikum 4
#include <iostream>
using namespace std;

void kembalian(int &a, int b, int c);

int main()
{

    float h;
    int koin1 = 25, koin2 = 10, koin3 = 5, koin4 = 1;
    int bk = 0;
    cout << "\nPROGRAM MENGHITUNG KEMBALIAN" << endl;
    cout << "\nMasukan harga barang (maksimal 1$) = ";
    cin >> h;
    cout << "Uang yang dipakai untuk membayar = 1$ " << endl;
    int harga = h*100;
    harga = 100 - harga;
    cout << "\nKembalian anda = " << harga*1.0/100 << " $" << endl;
    kembalian(harga, koin1, bk);
    kembalian(harga, koin2, bk);
    kembalian(harga, koin3, bk);
    kembalian(harga, koin4, bk);
}

void kembalian(int &a, int b, int c)
{
    while (a >= b)
    {
        a -= b;
        c++;
    }
    cout << c << " koin " << b*1.0/100 << "$" << endl;
}
*/




/*//PR 4 bab 4 nomor 5
#include <iostream>
#include <math.h>
using namespace std;

void bola();

int main ()
{
	bola();
}

void bola()
{
	double diameter;	
	int d=0,e=0,f=0,g=0,p,l,t,i=0;
	while (i < 10)
	{
		cout<<"\nMasukan panjang kotak : ";
		cin>>p;
		cout<<"Masukan lebar kotak : ";
		cin>>l;
		cout<<"Masukan tinggi kotak : ";
		cin>> t;

		diameter = sqrt((p^2) + (l^2) +(t^2));
		if (diameter >= 10)
		{
			d++;
		}
		else if (diameter >= 15)
		{
			e++;
		}
		else if (diameter >= 20 && diameter < 25)
		{
			f++;
		}
		else 
		{
			g++;
		}
		i++;
	}
	cout<<"\nBanyak bola berukuran 10cm = "<<g;
	cout<<"\nBanyak bola berukuran 15cm = "<<d;
	cout<<"\nBanyak bola berukuran 20cm = "<<e;
	cout<<"\nBanyak bola berukuran 25cm = "<<f;
}
*/





/*//Algoritma Rumus pangkat dengan fungsi Return
#include <iostream>
#include <math.h>
using namespace std;

float rumus(float x, int n);

int main ()
{
	float i=-1, hasil;
 	int j;
 	cout <<"Masukkan pangkat (n) : ";
 	cin >> j;
 
 	cout <<"  X \t | \tHASIL "<<endl;
 	cout <<"============================="<<endl;
 	
 	for(i = -1 ; i <= 1 ; i += 0.1)
 	{
 		hasil = rumus(i,j);
 		cout << i <<"\t | \t"<<hasil<<endl;
	}
}

float rumus(float x, int n)
{
 	float h;
 	if (x>0)
 	{
 		h = x + (pow (x,n) /n)-( pow(x,n+2) /(n+2));
 	}
 	else 
 	{
	 	h = -(pow (x,n-1) /(n-1)) + (pow(x,n+1) /(n+1));
	}	
 	return(h);
}
*/




