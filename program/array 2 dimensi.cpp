/*//latihan subbab 5.7 nomor 5
#include<iostream>
using namespace std;

int main()
{
    int n, sp[100][100], i = 0;
    cout << "\nMasukan banyak baris dalam segitiga pascal : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        sp[0][i] = 0;
    }
    sp[0][0] = 1;
    for (i = 1; i <= n; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            sp[i][j] = sp[i - 1][j - 1] + sp[i - 1][j];
            cout << sp[i - 1][j] << " ";
        }
        cout << endl;
    }
}
*/


/*//program54.cpp: program dengan input output array 2 dimensi 
#include <iostream> 
using namespace std; 

int main( ) 
{ 
	// deklarasi array ma, mb,dan dengan 3 baris 4 kolom 
	int ma[3][4] = {{4,5,7,1}, {2,4,6,8}, {3,9,5,7}}; 
	int mb[3][4] = {4,5,7,1,2,4,6,8,3,9,5,7}; 
	int mc[3][4] = {3,8,1,9}; 
	int md[3][4] = {{2,3}, {1}, {4, 5, 6}};  
	int me[3][4]; 
	int mf[3][4]; 
	int mg[3][4]; 
	int mh[3][4]; 
	int i,j; 

	// inisiaisasi matriks md, me dan mf dengan 0 
	for (i = 0 ; i < 3 ; i++) 
	{
		for (j = 0 ; j < 4 ; j++)
		{
			me[i][j] = 0; 
			mf[i][j] = 0; 
			mg[i][j] = 0; 
			mh[i][j] = 0; 
		}
	}
	
	//Menampilkan isi array ma, mb, mc dan md ke layar 
	cout <<"Komponen array matriks ma: "<<endl; 
	for (i = 0 ; i < 3 ; i++) 
	{   
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << ma[i][j] ; 
		}
		cout << endl; 
	} 
	cout<<endl; 
	cout <<"Komponen array matriks mb: "<<endl; 
	
	for (i = 0 ; i < 3 ; i++) 
	{  
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << mb[i][j] ; 
		}
		cout << endl; 
	} 
	cout<<endl; 
	cout <<"Komponen array matriks mc: "<<endl; 
	
	for (i = 0 ; i < 3 ; i++) 
	{   
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << mc[i][j] ; 
		}
		cout << endl; 
	} 
	cout<<endl; 
	cout <<"Komponen array matriks md: "<<endl; 
	
	for (i = 0 ; i < 3 ; i++) 
	{  
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << md[i][j] ; 
		} 
		cout << endl; 
	}

	// Baris ke 2 matriks mf diisi angka 2 
	i = 1; 
	for (j = 0 ; j < 4 ; j++) 
	{
		mf[i][j] = 2; 
	}
	
	// Kolom ke 3 matriks mg diisi angka 3 
	j = 2; 
	for (i = 0 ; i < 3 ; i++) 
	{
		mg[i][j] = 3; 
	}
	
	//Membaca data dari keyboard dan menyimpannya ke array mh 
	cout <<"Masukkan 12 data : " <<endl; 
	for (i = 0 ; i < 3 ; i++) 
    {
		for (j = 0 ; j < 4 ; j++) 
		{
			cin >>mh[i][j]; 
		}
	}
		
	//Menampilkan isi array me, mf, mg dan mh ke layar 
	cout <<"Komponen array matriks me: "<<endl; 
	for (i = 0 ; i < 3 ; i++) 
	{   
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << me[i][j] ; 
		}
		cout << endl; 
	}
	cout<<endl; 
	cout <<"Komponen array matriks mf: "<<endl; 
	
	for (i = 0 ; i < 3 ; i++) 
	{   
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << mf[i][j] ; 
		}
		cout << endl; 
	}
	cout<<endl; 
	cout <<"Komponen array matriks mg: "<<endl; 
	for (i = 0 ; i < 3 ; i++) 
	{   
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << mg[i][j] ; 
		}
		cout << endl; 
	}
	cout<<endl; 
	cout <<"Komponen array matriks mh: "<<endl;
	 
	for (i = 0 ; i < 3 ; i++) 
	{   
		for (j = 0 ; j < 4 ; j++) 
		{
			cout << "   " << mh[i][j] ; 
		} 
		cout << endl; 
	}
} 
*/



/*// program55.cpp  
# include <iostream> 
# include <iomanip> 
using namespace std; 

//inisialisasi array matrik_a 
int matrik_a[3][4] = {{4,5,7,1}, {2,4,6,8}, {3,9,5,7}}; 
int i, j, sum, r; 

int main() 
{ 
	// print array perbaris 
	cout <<"Isi dari matriks A: "<<endl; 
	for (i = 0 ; i < 3 ; i++) 
	{
		for (j = 0 ; j < 4 ; j++) 
			{
				cout << setw(8) << matrik_a[i][j]; 
			} 
		cout<<endl; 
	}
	cout<<endl; 

	// menjumlahkan kolom 
	for (j = 0; j < 4 ; j++) 
	{
		sum = 0; 
		for (int i = 0 ; i < 3 ; i++) 
		{
			sum = sum + matrik_a[i][j];
		}
		cout<<"Jumlah dari kolom ke "<< j <<" = " << sum << endl; 
	} 
	cout << endl; 

	// mencari rata-rata baris 
	for (i = 0; i < 3 ; i++) 
	{
		sum = 0; 
		for (int j = 0 ; j < 4 ; j++) 
		{
			sum = sum + matrik_a[i][j]; 
		}
		r = sum/4; 
		cout<<"Rata-rata dari baris ke "<< i <<" = " << r << endl; 
	} 
} 
*/



/*// program56.cpp  
# include <iostream> 
# include <iomanip> 
using namespace std; 

//inisialisasi array matrik_a 
const int b = 3; 
const int k = 4; 
int matrik_a[3][4] = {{4,5,7,1}, {2,4,6,8}, {3,9,5,7}}; 
int i, j; 

//deklarasi fungsi cetak dan fungsi maksimum 
void cetak(int mat[][k], int b); 
void besarbaris(int mat[][k], int b); 

int main() 
{ 
	// print array perbaris 
	cout <<"Isi dari matriks A: "<<endl; 
	cetak(matrik_a, b); 
	cout<<endl; 
	cout<<"Menampilkan bilangan yang terbesar dari tiap baris"<< endl; 
	besarbaris(matrik_a, b); 
} 

//definisi fungsi mencetak matriks 
void cetak(int mat[][k], int b) 
{ 
	for (int i = 0 ; i < b ; i++) 
	{
		for (int j = 0 ; j < k ; j++) 
		{
			cout << setw(8) << mat[i][j]; 
		} 
		cout<<endl; 
	} 
} 

// definisi fungsi mencari bilangan terbesar dari tiap baris 
void besarbaris(int mat[][k], int b) 
{
	for (int i = 0; i < b ; i++) 
	{
		int besar = 0; 
		for (int j = 0 ; j < k ; j++) 
		{
			if (besar < mat[i][j]) 
        	{
				besar = mat[i][j];
			}
		}
	cout<<"Bilangan terbesar dari baris ke "<< i <<" = "  
	<< besar << endl; 
	} 
} 
*/




/*//535200047 - Mathew Judianto
//subbab 5.4 nomor 3
#include<iostream>
#include <cstdlib>
#include<ctime>
#include<math.h>
using namespace std;

void random(int a[], int b);
void exchange_sort(int data[], int n);
void swap(int data[], int i, int j);
void tampilkan(int data[],int n);
void exchange(int b);
void insertion(int a);
void selection_sort(int data[],int n);

int main()
{
	srand(time(NULL));
	int i=10000;
	for (i=10000 ; i <= 80000 ; i*=2)
	{
		exchange(i);
		cout<<endl;
	}
}

void exchange(int b)
{
	int a[b];
	int c[b];
	int i=b;
	int start,end, start1, end1;
	random(a,b);
	for (i=0 ; i<b ; i++)
	{
		c[i] = a[i];
	}
	start =  clock();
	exchange_sort(a,b);
	end = clock ();
	cout<<"\nrun time exchange sort = "<<end-start<<" ms ";
	start1 = clock();
	selection_sort (c,b);
	end1 = clock();
	cout<<"\nrun time selection sort = "<<end1-start1<<" ms ";
	cout<<endl;
	cout<<"Selisih run Time "<<i<< " data : "<<(end-start) - (end1-start1)<<" ms ";
	if (end-start < end1-start1)
	{
		cout<<"\nexchange sort lebih cepat";
	}
	else
	{
		cout<<"\nselection sort lebih cepat";
	}
}

void random(int a[], int b)
{
	int hsl_rand,i=0;
	for (i=0 ; i<b ; i++)
	{
		a[i] = rand()%(2*b-i);
	}
}

void selection_sort(int data[],int n)
{
	int i=0, j=0, pos;
	double min, temp;
	for (i=0 ; i<n-1 ; i++)
	{
		min = data[i];
		pos = i;
		for (j = i+1 ; j<n ; j++)
		{
			if (min >  data[j])
			{
				min = data[j];
				pos = j;
			}
		}
		temp = data[i];
		data[i] = data[pos];
		data[pos] = temp;	
	}
}

void exchange_sort(int data[], int n)
{
	bool tukar;
	int temp, i;

	i=0;
	do
	{
		tukar = false;
		for (int j=n-1 ; j>0 ; j--)
		{
			if (data[j-1] > data[j])
			{
				swap(data,j,j-1);
				tukar = true;
			}
		}
	}
	while(tukar);
}

void swap(int data[], int i, int j)
{
    int temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}
*/



/*//modul 5 nomor 5
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int grade[100][100];
	int bobot[100];
	int akhir[100];
	int n,m,j=0,i=0,sum;
	
	cout<<"\nPROGRAM MENGHITUNG NILAI AKHIR SISWA"<<endl;
	akhir[0]=0;
	cout<<"\nMasukan jumlah siswa : ";
	cin>>n;
	cout<<"Masukan jumlah soal : ";
	cin>>m;
	bobot[m+1] = 0;
	cout<<"\nMasukan bobot untuk setiap soal"<<endl;
	for (i=0 ; i<m ; i++)
	{
		cout<<"Masukan bobot soal ke-"<<i+1<<" : ";
		cin>>bobot[i];
		bobot[m+1] += bobot[i];
	}
	for (i=0 ; i<n ; i++)
	{
		cout<<"\nNilai siswa ke-"<<i+1<<endl;
		
		for (j=0 ; j<m ; j++)
		{
			cout<<"Masukan nilai soal ke-"<<j+1<<" : ";
			cin>>grade[i][j];
			sum  =  grade[i][j]*bobot[j];
			akhir[i] += sum;
		}
		akhir[i] = akhir[i]/bobot[m+1];
		cout<<"Nilai akhir murid ke-"<<i+1<<" = "<<akhir[i]<<endl;
	}
}
*/




/*//subbab 5.7 nomor 10
#include<iostream>
using namespace std;

void blending( int p[100][100], int q[100][100], int r[100][100], float x , int b, int k);
void data(int a[100][100], int b, int k);

int main ()
{
	int p[100][100], q[100][100], r[100][100];
	int b,k;
	float x;
	
	cout<<"\nMasukan banyaknya baris pixel : ";
	cin>>b;
	cout<<"Masukan banyaknya kolom dalam pixel : ";
	cin>>k;
	cout<<endl;
	
	cout<<"Gambar ke-1";
	data(p,b,k);
	cout<<endl;
	cout<<"Gambar ke-2";
	data(q,b,k);
	
	cout<<endl;
	cout<<"Masukan nilai transparansi gambar yang akan berada di atas (maks 100): ";
	cin>>x;
	if (x > 100)
	{
		cout<<"\n\nMaaf sistem tidak bisa melakukan blending";
	}
	else
	{
		blending(p,q,r,x,b,k);
	}
}

void data(int a[100][100], int b, int k)
{
	int i=0, j=0;
	
	for(i=0 ; i<b ; i++)
	{
		cout<<endl;
		cout<<"\Nilai value dari baris ke-"<<i+1;
		cout<<endl;
		for (j=0 ; j<k ; j++)
		{
			cout<<"Masukan value (maks 255) dari baris ke-"<<i+1<<" kolom ke-"<<j+1<<" : ";
			cin>>a[i][j];
		}
	}
}

void blending(int p[100][100], int q[100][100], int r[100][100], float x, int b, int k)
{
	int i=0, j=0;
	for (i=0 ; i<b ; i++)
	{
		for (j=0 ; j<k ; j++)
		{
			r[i][j] = x * q[i][j] + (1-x/100) * p[i][j];
			cout<<r[i][j]<<"  ";
		}
		cout<<endl;
	}
}
*/
