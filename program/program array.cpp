/*//program50.cpp: program dengan input output array 1 dimensi 
#include <iostream>  
using namespace std; 

int main( ) 
{ 
	//deklarasi array suhu1, suhu2, suhu3, suhu4 dengan 5 komponen 
	double suhu1[5] = {31.5, 28.7, 31.2, 30.4, 31.9}; 
	double suhu2[] = {11.5,18.7,21.2,15.3,17.5}; 
	double suhu3[5] = {29.6, 30.5};  
	double suhu4[5]; 
	int i; 

	//Menampilkan komponen array suhu1, suhu2, suhu3 dan suhu4 ke layar 
	cout <<"Komponen array suhu1: "<<endl; 
	for (i=0 ; i<5 ; i++) 
	cout <<"Data ke " <<i+1<<" = " << suhu1[i] <<endl; 
	
	cout << endl; 
	cout <<"Komponen array suhu2: "<<endl; 
	for (i=0 ; i<5 ; i++) 
	cout <<"Data ke " <<i+1<<" = " << suhu2[i] <<endl; 
	
	cout << endl; 
	cout <<"Komponen array suhu3: "<<endl; 
	for (i=0 ; i<5 ; i++) 
	cout <<"Data ke " <<i+1<<" = " << suhu3[i] <<endl; 
	
	cout << endl;  
	cout <<"Masukkan 5 data ke array suhu4: " <<endl; 
	for (i=0; i<5 ; i++) 
	cin >>suhu4[i]; 
	
	cout<<endl;
	cout << "Data yang anda masukkan untuk array suhu4:" <<endl; 
	for (i=0 ; i<5 ; i++) 
	cout <<"Data ke " <<i+1<<" = " << suhu4[i] <<endl; 
	
	cout << endl; 
}
*/




/*//program52.cpp: program mencari suhu tertinggi dengan array 1 dimensi 
#include <iostream>  
using namespace std; 

int main( ) 
{ 
	double suhu[5];// deklarasi array suhu dengan 5 komponen 
	double maks = 0, min = 100; 
	int i, k, v; 

	//Membaca data dari keyboard dan menyimpannya ke array suhu 
	cout <<"Masukkan data suhu untuk 5 hari: " <<endl; 
	for (i=0; i<5 ; i++) 
	cin >>suhu[i]; 

	//Menampilkan isi array suhu ke layar 
	cout << "\nData suhu yang anda masukkan :" <<endl;
	for (i=0 ; i<5 ; i++) 
	cout <<"Data suhu hari ke " <<i+1<<" = " << suhu[i] <<endl; 
	cout << endl; 

//Mencari suhu yang tertinggi  
for (i=0 ; i<5 ; i++) 
{
	if ( min > suhu[i])
	{
		min = suhu[i];
		v = i;
	}
	if (maks < suhu[i]) 
	{
		maks = suhu[i];
		k = i;//menyimpan indeks dari suhu tertinggi
	}
}
	// Menampilkan suhu tertinggi dan kapan terjadinya 
	cout <<"Suhu tertinggi terjadi pada hari ke "<< k+1 <<" yaitu " 
	<< maks << endl; 
	cout<<"Suhu terendah terjadi pada hari ke "<< v+1 <<" yaitu "
	<< min <<endl;
}
*/





/*//program52.cpp: program mencari suhu tertinggi dengan array 1 dimensi 
#include <iostream>  
using namespace std; 

//deklarasi fungsi 

double besar(double [], int n); 

int main( ) 
{ 
	double suhu[5];// deklarasi array suhu dengan 5 komponen 
	int maks = 0, min = 100; 
	int i, k, v; 

	//Membaca data dari keyboard dan menyimpannya ke array suhu 
	cout <<"Masukkan data suhu untuk 5 hari: " <<endl; 
	for (i=0; i<5 ; i++) 
	cin >>suhu[i]; 

	//Menampilkan isi array suhu ke layar 
	cout << "\nData suhu yang anda masukkan :" <<endl;
	for (i=0 ; i<5 ; i++) 
	cout <<"Data suhu hari ke " <<i+1<<" = " << suhu[i] <<endl; 
	cout << endl; 
	
	maks = besar(suhu, 5);
	cout<<"maks = "<<maks;
}

double besar(double [], int n)
{
	double suhu;
	while (n > 0)
	{
		if (suhu > suhu)
		suhu = suhu;
		n -= 1;
	}
	return suhu;
}
*/




/*//program contoh penggunaan library function string.h 

#include<iostream> 

#include<ctype.h> 

#include<string.h> 

using namespace std; 

int main() 

{ 

  char kata1 [20] = "C++"; 

  char kata2 [] = "Lanjut";   

  char kata3 [20]; 

  char kata4 [10]; 

  char kata5 [10]; 

  char kata6 [] = "an" ;  

  char *strp = NULL ;

  int p,q;   

  p = strlen(kata1) ;

  cout <<"Panjang string pada variabel kata1 = " << p << endl; 

  strcat(kata1,kata2);    

  strcpy(kata3,kata1); 

  strcpy(kata4,kata3); 

  p = strlen(kata1); 

  cout <<"Setelah digabung, panjang string menjadi = " << p<< endl; 

  strcpy(kata5, kata1);

  cout << "Isi variabel string: ";

  cout << kata1 << endl; 

  cout << kata2 << endl; 

  cout << kata3 << endl; 

  cout << kata4 << endl; 

  cout << kata5 << endl; 

  strcpy (kata1, kata6); 

} 
*/

 

/*//program contoh penggunaan library function ctype.h 
#include<iostream> 
#include<ctype.h> 
#include<string.h> 
using namespace std; 

int main() 
{ 
	char kalimat[100]; 
	int j=0,k=0,l=0,m=0,n=0; 
	cout<<"Masukkan Kalimat Anda = "; 
	cin.getline(kalimat,sizeof(kalimat)); 

	for(int i=0;kalimat[i];++i)  
	{ 
		if(islower(kalimat[i])) ++j; 
		else if(isupper(kalimat[i])) ++k; 
		else if(isdigit(kalimat[i])) ++l; 
		else if(ispunct(kalimat[i])) ++m; 
		else if(isspace(kalimat[i])) ++n; 
	}
	 
	cout<<"Jumlah huruf kecil = "<<j<<endl; 
	cout<<"Jumlah huruf besar = "<<k<<endl; 
	cout<<"Jumlah angka       = "<<l<<endl; 
	cout<<"Jumlah pungtuasi   = "<<m<<endl; 
	cout<<"Jumlah spasi       = "<<n<<endl; 
} 
*/




/*//subbab 5.2.4 nomor 3
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	char jwb[50];
	int i=0,a=0,b=0,c=0,d=0;
	
	cout<<"\nKetik Y (menggunakan huruf besar) jika setuju"
	<<"\nKetik T (menggunakan huruf besar jika tidak setuju"
	<<"\nKetik A (menggunakan huruf besar) jika tidak memilik opini"
	<<endl;
	
	for (i = 0 ; i < 50 ; i++)
	{
		cout<<"\nMasukan jawaban anda : ";
		cin>>jwb[i];
		
		if (jwb[i] == 'Y')
		{
			a++;
		}
		else if (jwb[i] == 'T')
		{
			b++;
		}
		else if (jwb[i] == 'A')
		{
			c++;
		}
		else 
		{
			cout<<"Anda salah memasukan kode";
			d++;
		}
	}
	
	cout<<endl;
	cout<<"\nTotal peserta yang menjawab Y = "<<a<<" = "<<a*100/50<<"%"<<endl;
	cout<<"Total peserta yang menjawab T = "<<b<<" = "<<b*100/50<<"%"<<endl;
	cout<<"Total peserta yang menjawab  A = "<<c<<" = "<<c*100/50<<"%"<<endl;
	cout<<"Total peserta yang salah menjawab = "<<d<<" = "<<d*100/50<<"%"<<endl;
}
*/




/*//subbab 5.3 nomor 4
#include<iostream> 
#include<ctype.h> 
#include<string.h> 
using namespace std; 

void jk(char kalimat[]);

int main() 
{ 
	char kalimat[100];
	cout<<"\nMasukkan Kalimat Anda = "; 
	cin.getline(kalimat,sizeof(kalimat)); 
	
	jk(kalimat);
}

void jk(char kalimat[])
{ 
	int a=1,i=0; 
	bool b=false;
	
	for(int i=0;kalimat[i];i++) 
	{
		if (isspace(kalimat[i]))
		{
			if (b)
			{
				a++;
				b = false;
			}
		}
		else 
		{
			b = true;
		}
	}
	
	cout<<"\nBanyak kata dalam kalimat tersebut = "<<a<<endl;
}
*/




/*//subbab 5.3 nomor 6
#include<iostream> 
#include<ctype.h> 
#include<string.h> 
#include<conio.h>
#include <cstdio>
using namespace std;

void capt(char kalimat[], int i);

int main()
{
	char kalimat[100],c; 
	int a=1,i=0; 
	bool b=false;
	cout<<"\nMasukkan Kalimat Anda = "; 
	cin.getline(kalimat,sizeof(kalimat)); 
	
	for(int i=0;kalimat[i];i++) 
	{
		if (isspace(kalimat[i]))
		{
			if (b)
			{
				a++;
				b = false;
			}
			capt(kalimat,i+1);
		}
		else 
		{
			b = true;
		}
	}
	
	if (kalimat[0] >= 'a' && kalimat[0] <= 'z')
	{
		capt(kalimat,i=0);
	}
	cout<<endl;
	cout<<"Output = "<<kalimat<<endl;
}

void capt(char kalimat[], int i)
{
	kalimat[i] = toupper(kalimat[i]);
}
*/




/*//algoritma
//subbab 5.4 nomor 6
#include<iostream> 
#include<ctype.h> 
#include<string.h> 
#include<iomanip>
using namespace std; 

void ac(char kalimat[]);

int main() 
{ 
	char kalimat[120];
	cout<<"\nMasukkan Kalimat Anda "<<endl; 
	cin.getline(kalimat,sizeof(kalimat));
	
	ac(kalimat);
}

void ac(char kalimat[])
{
		int a;
		
		a = (kalimat,sizeof(kalimat));
		if (a <= 120)
		{
			cout<<setw((120-a)/2)<<kalimat<<setw((120-a)/2)<<endl;
		}
}
*/

	
	
	
/*//subbab 5.4 nomor 9b
#include<iostream>
#include<math.h>
using namespace std;

void MH(double n, double x[]);

int main ()
{
	int n,i=0;
	double x[100];
	cout<<"\nMasukan banyaknya komponen (n) = ";
	cin>>n;
	cout<<endl;
	while (i < n)
	{
		cout<<"Masukan nilai x ke-"<<i+1<<" = ";
		cin>>x[i];
		i++;
	}
	
	MH(n,x);
}

void MH(double n, double x[])
{
	int i=0;
	double a,b=0,hasil;
	
	for(i=0 ; i<n ; i++)
	{
		a = (1/x[i]);
		b += a;
	}
	
	hasil = n/b;
	cout<<"\nHasil dari rumus Harmonic Mean = "<<hasil<<endl;
}
*/




/*//suubab 5.4 nomor 12
#include<iostream>
#include<math.h>
using namespace std;

void smoothing(double B[], double V[], int n);

int main()
{
	double b[100],v[100];
	int i=0,n;
	
	cout<<"\nMasukan banyak data = ";
	cin>>n;
	cout<<endl;
	while (i < n)
	{
		cout<<"Masukan hasil pengukuran ke-"<<i+1<<" = ";
		cin>>b[i];
		i++;
	}
	
	smoothing(b,v,n);
}

void smoothing(double B[], double V[], int n)
{
	int i=0;
	double hasil;
	
	V[0] = B[0];
	V[n] = B[n];
	
	for (i=0 ; i<n ; i++)
	{
		V[i]  =  (B[i-1] + B[i] + B[i+1])/3 ;
		cout<<"\nHasil smoothing pengukuran ke-"<<i+1<<" = "<<V[i];
	}
}
*/




#include <iostream>
using namespace std;

long faktorial(int n) 
	{
		long z = 1;
		int i = 1;
		while(i<=n)
		{
			z=z*i;
			i++;
		}
  		return z;
	}
	
int main() 
{
	int a, i, j;
	cout<<"Masukkan nilai: ";
	cin >> a;
	for (i=0; i<a; i++) 
	{
		for (j=0; j<a-i-1; j++)
		{
			cout <<" ";
		}
		for (j=0; j<=i; j++)
		{
			cout << faktorial(i) / (faktorial(j) * faktorial(i - j)) << " ";
		}
		cout << endl;
	}
}




