/*//nomor 2
#include<iostream>
using namespace std;

void data(int[], int);
void selection_sort(int[], int);
void exchange_sort(int data[], int n);
void tampilkan(int data[],int n);
void swap(int data[], int i, int j);
void hasil(int data[], int n);
void insertion_sort(int data[], int n);


int main()
{
	int bil[10] = {9,1,4,3,5,8,10,2,7,6};
	int bil1[10],bil2[10],i;
	
	for (i=0 ; i<10 ; i++)
	{
		bil1[i]=bil[i];
		bil2[i]=bil[i];
	}
	
	cout<<"selection sort"<<endl;
	data(bil,10);
	selection_sort(bil,10);
	hasil(bil,10);
	
	cout<<"exchange sort"<<endl;
	data(bil1,10);
	exchange_sort(bil1,10);
	hasil(bil1,10);
	
	cout<<"insertion sort"<<endl;
	data(bil2,10);
	insertion_sort(bil2,10);
	hasil(bil2,10);
	
}

void data(int data[], int n)
{
	cout<<"\nBilangan yang tidak terurut : ";
	tampilkan(data,n);
	cout<<endl;
	cout<<endl;
}

void hasil(int data[], int n)
{
	cout<<"\nBilangan yang sudah terurut : ";
	tampilkan(data,n);
	cout<<endl;
	cout<<endl;
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
		cout<<"Hasil loop ke "<<i<<" : ";
		tampilkan(data,n);
		cout<<endl;
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
			tampilkan(data, n);
            cout << endl;
		}
		cout << "Hasil loop " << i << ": ";
        tampilkan(data, n);
        cout << endl;
        cout << endl;
        i++;
	}
	while(tukar);
}

void tampilkan(int data[],int n)
{
	for (int i=0 ; i<n ; i++)
	{
		cout<<data[i]<<"  ";
	}
}

void swap(int data[], int i, int j)
{
    int temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void insertion_sort(int data[], int n) 
{ 
	int i, x, j; 
	for (i = 1 ; i < n ; i++) 
	{
		x = data[i]; 
		j = i-1; 
		while (x < data[j]) 
		{   
			data[j+1]= data[j]; 
        	j = j-1; 
		} 
		data[j+1] = x; 
    	cout<<"Array setelah loop ke "<< i <<" adalah  "; 
		tampilkan(data,n);
		cout<<endl;
    } 
}
*/




/*//nomor 3
#include<iostream> 
#include<ctype.h> 
#include<string.h> 
using namespace std; 

void vokal(char[], int n);

int main() 
{ 
	char kalimat[100]; 
	cout<<"\nMasukkan Kalimat Anda = "; 
	cin.getline(kalimat,sizeof(kalimat)); 
	
	vokal(kalimat,100);
}

void vokal(char kalimat[], int n)
{
	int i=0,a=0,b=0;
	for(int i=0;kalimat[i];++i)
	{
		if (kalimat[i] == 'A' || kalimat[i] == 'I' || kalimat[i] == 'U' || kalimat[i] == 'E' || kalimat[i] == 'O')
		{
			a+=1;
		}
		if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o')
		{
			b+=1;
		}
	}
	cout<<"\nJumlah huruf vokal besar = "<<a<<endl;
	cout<<"Jumlah huruf vokal kecil = "<<b<<endl;
}
*/




/*//nomor 4
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

void slip(char a[], int b, char c, int d);

	struct pelanggan
	{
		int id;
		char nama[100];
		char paket;
		int pemakaian;
	};

int main()
{
	int i=0,n;
	pelanggan data[100];
	cout<<"\nMasukan jumlah pelangaan : ";
	cin>>n;
	system("cls");
	
	for(i=0 ; i<n ; i++)
	{
		cout<<"\nPilihan paket data internet : "
		<<"\nPaket A 1.000mb	200.000,00/bulan	300/per mb(biaya kelebihan)"
		<<"\nPaket B 2.000mb	375.000,00/bulan	250/per mb(biaya kelebihan)"
		<<"\nPaket C 3.000mb	525.000,00/bulan	200/per mb(biaya kelebihan)";
		cout<<"\n\nPelanggan ke-"<<i+1;
		cout<<"\nMasukan nama pelanggan : ";
		cin.getline(data[i].nama,sizeof(data[i].nama));
		cin.getline(data[i].nama,sizeof(data[i].nama));
		cout<<"Masukan nomor id pelanggan : ";
		cin>>data[i].id;
		cout<<"Masukan pilihan paket data internet (A/B/C menggunakan huruf besar) : ";
		cin>>data[i].paket;
		cout<<"Masukan pemakaian internet anda bulan ini (mb) : ";
		cin>>data[i].pemakaian;
		cout<<endl;
		cout<<setw(35)<<"SLIP PEMBAYARAN"<<endl;;
		cout<<"---------------------------------------------------------------"<<endl;;
		slip(data[i].nama, data[i].id, data[i].paket, data[i].pemakaian);
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
}

void slip(char a[], int b, char c, int d)
{
	int i=0,batas=0, biaya, kelebihan, total, pph;
	
	switch (c)
	{
		case 'A' : 
			{
				batas = 1000;
				biaya = 200000;
				kelebihan = 300;
				break;
			}
		case 'B' :
			{
				batas = 2000;
				biaya = 375000;
				kelebihan = 250;
				break;
			}
		case 'C' :
			{
				batas = 3000;
				biaya = 525000;
				kelebihan = 200;
				break;
			}
	}
	
	if (d <= batas)
	{
		total = biaya;
	}
	else
	{
		total = biaya + (kelebihan*(d-batas));
	}
	pph = total*10/100;
	
	cout<<"Nama pelanggan"<<setw(10)<<" : "<<a;
	cout<<"\nId pelanggan"<<setw(12)<<" : "<<b;
	cout<<"\nPaket dipilih"<<setw(17)<<" : Paket "<<c;
	if (d > batas)
	{
		cout<<"\nKelebihan pemakaian"<<setw(5)<<" : "<<d-batas<<" mb";
		cout<<"\nBiaya pemakaian"<<setw(12)<<" : Rp."<<biaya<<" + "<<d-batas<<" * Rp."<<kelebihan<<" = Rp."<<total;
	}
	else
	{
		cout<<"\nBiaya pemakaian"<<setw(12)<<" : Rp."<<biaya;
	}
	cout<<"\nPph 10%"<<setw(20)<<" : Rp."<<pph;
	cout<<"\nTotal pembayaran"<<setw(11)<<" : Rp."<<total+pph;
}
*/



/*//nomor 5
#include<iostream>
using namespace std;

void hitung(int data[], int n);

int main()
{
	int data[1000];
	int i=0,n;

	cout<<"\nMasukan banyak data : ";
	cin>>n;
	cout<<endl;

	for (i=0 ; i<n ; i++)
	{
		cout<<"Masukan data ke-"<<i+1<<" : ";
		cin>>data[i];
	}
	hitung(data,n);

	system("pause");
}

void hitung(int data[], int n)
{
	int i=0,total;
	int maks=0, min=100;

	for(i=0 ; i<n ; i++)
	{
		if (data[i] > maks)
		{
			maks = data[i];
		}
		
		if (data[i] < min)
		{
			min = data[i];
		}

		total += data[i];
	}
	cout<<"\nMaks = "<<maks;
	cout<<"\nMin = "<<min;
	cout<<"\nRata-rata = "<<total/n<<endl;
}
*/


	

//nomor 7
#include<iostream>
using namespace std;

void hari(int n);

int main()
{
	int kelas[20][7];
	int i=0,j=0,n,sum_hari=0,sum_minggu=0,sum=0,maks=0;
	int temp;

	cout<<"\nMasukan jumlah ruang kelas : ";
	cin>>n;

	for (i=0 ; i<n ; i++)
	{
		cout<<"\nKelas 10"<<i+1<<endl;
		
		for(j=0 ; j<7 ; j++)
		{
			cout<<"Banyak sesi di hari ";
			hari(j+1);
			cout<<" : ";
			cin>>kelas[i][j];
			sum_minggu += kelas[i][j];
		}
	}
	cout<<endl;

	for (j = 0; j < 7 ; j++) 
	{
		sum = 0;
		sum_hari = 0;
		for (int i = 0 ; i < n ; i++) 
		{
			sum_hari += kelas[i][j];
			if(maks < sum_hari)
			{
				maks = sum_hari;
				temp = j;
			}
		}
		cout<<"Jumlah sesi pada hari ";
		hari(j+1);
		cout<<" = " << sum_hari << endl; 
		if (sum_hari < 4*n)
		{
			sum = 4*n - sum_hari;
			cout<<"Kelas yang masih bisa diadakan pada hari ";
			hari(j+1);
			cout<<" : "<<sum;
		}
		cout<<endl;
	} 

	cout<<endl;
	cout<<"Kelas terbanyak pada hari ";
	hari(temp+1);
	cout<<endl;
	cout<<"Total kelas dalam seminggu : "<<sum_minggu<<endl;
	cout<<endl;

	system("pause");
}

void hari(int n)
{
	switch (n)
	{
		case 1 : 
		{
			cout<<"Senin";
			break;
		}
		case 2 :
		{
			cout<<"Selasa";
			break;
		}
		case 3 : 
		{
			cout<<"Rabu";
			break;
		}
		case 4 :
		{
			cout<<"Kamis";
			break;
		}
		case 5 :
		{
			cout<<"Jumat";
			break;
		}
		case 6 :
		{
			cout<<"Sabtu";
			break;
		}
		case 7 :
		{
			cout<<"Minggu";
			break;
		}
		default :
		{
			cout<<n;
			break;
		}
	}
}





