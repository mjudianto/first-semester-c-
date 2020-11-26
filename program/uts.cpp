/*#include<iostream>
using namespace std;

int main()
{
    int b,total,jual,beli,satuan;
    char mu;
    char a;

    cout<<"Masukan jenis uang yang anda miliki : "<<endl;
    cout<<"1. AUD"<<"\n2. CNY"<<"\n3. EUR"<<"\n4. HKD"<<"\n5. JPY"<<"\n6. IDR";
    cout<<"\nPilihan anda : ";
    cin>>mu;

    if (mu != '6')
    {
        cout<<"covert to IDR"<<endl;
        cout<<"Anda menjual mata uang asing"<<endl;
        a = 'T';
    }
    else 
    {
        cout<<"Mata uang apa yang anda inginkan : ";
        cin>>mu;
        cout<<"Anda membeli mata uang asing"<<endl;
        a = 'Y';
    }

    switch (mu)
    {
        case '1' :
        {
            jual = 10525.33;
            beli = 10634.08;
            satuan = 1.00;
            break;
        }
        case '2' :
        {
            jual = 2180.74;
            beli = 2202.99;
            satuan = 1.00;
            break;
        }
        case '3' :
        {
            jual = 17263.13;
            beli = 17438.11;
            satuan = 1.00;
            break;
        }
        case '4' :
        {
            jual = 1892.02;
            beli = 1911.06;
            satuan = 1.00;
            break;
        }
        case '5' :
        {
            jual = 13849.00;
            beli = 13989.51;
            satuan = 100.00;
            break;
        }
        default :
        {
            cout<<"Anda salah memasukan kode";
            satuan = 0;
            jual = 0;
            beli = 0;
            break;
        }
    }

    cout<<"Berapa jumlah uang anda : ";
    cin>>b;
   
    if (a == 'Y')
    {
        total = b/beli*satuan;
    }
    else 
    {
        total = b/satuan*jual;
    }

    cout<<"total = "<<total;
    cout<<endl;

    system("pause");
}
*/




/*#include<iostream>
using namespace std;

void hari(int n);

int main()
{
    int pegawai[500][6];
    char golongan;
    int n,jk,i=0,j=0,total,sum=0;
    int upah,lembur,sum_minggu=0;

    cout<<"Masukan banyak pegawai : ";
    cin>>n;

    for (i=0 ; i<n ; i ++)
    {
        cout<<"\nPegawai no. "<<i+1<<endl;
        cout<<"golongan 1   Rp.10.000/jam   Rp.12.000/jam lembur"
        <<"\ngolongan 2   Rp.12.500/jam   Rp.14.500/jam lembur"
        <<"\ngolongan 3   Rp.15.000/jam   Rp.16.500/jam lembur";
        cout<<"\nmasukan Golongan upah anda : ";
        cin>>golongan;
        switch (golongan)
        {
            case '1' : 
            {
                upah = 10000;
                lembur = 12000;
                break;
            }
            case '2' :
            {
                upah = 12500;
                lembur = 14500;
                break;
            }
            case '3' : 
            {
                upah = 15000;
                lembur = 16500;
                break;
            }
            default :
            {
                cout<<"\nAnda salah memasukan kode "<<endl;
                upah = 0;
                lembur = 0;
                break;
            }
        }
        
        for (j=0; j<6 ; j++)
        {
            cout<<"Masukan jam kerja pada hari ";
            hari(j+1);
            cout<< " : ";
            cin>>pegawai[i][j];
            if(pegawai[i][j] > 8)
            {
                total = 8*upah + (pegawai[i][j]-8)*lembur;
            }
            else 
            {
                total = pegawai[i][j] * upah;
            }
            sum += total;
        }
        cout<<"gaji pegawai no "<<i+1<<" : Rp."<<sum;
        sum_minggu += sum;
        cout<<endl;
        sum = 0;
    }
    cout<<"\ntotal gaji yang harus dibayarkan minggu ini : Rp."<<sum_minggu;
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
*/





/*//nomor 4
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

void slip(char a[], int b, char c, int d, char e[]);

	struct pelanggan
	{
		int id;
		char nama[100];
		char paket;
		int pemakaian;
        char tanggal[100];
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
		<<"\nPaket A 1.000mb	200.000,00/bulan	100/per mb(biaya kelebihan)"
		<<"\nPaket B 2.000mb	175.000,00/bulan	100/per mb(biaya kelebihan)"
		<<"\nPaket C 4.000mb	300.000,00/bulan	100/per mb(biaya kelebihan)"
        <<"\nPaket D 8.000mb	500.000,00/bulan	100/per mb(biaya kelebihan)";
		cout<<"\n\nPelanggan ke-"<<i+1;
		cout<<"\nMasukan nama pelanggan : ";
		cin.getline(data[i].nama,sizeof(data[i].nama));
		cin.getline(data[i].nama,sizeof(data[i].nama));
		cout<<"Masukan nomor id pelanggan : ";
		cin>>data[i].id;
		cout<<"Masukan pilihan paket data internet (A/B/C/D menggunakan huruf besar) : ";
		cin>>data[i].paket;
		cout<<"Masukan pemakaian internet anda bulan ini (mb) : ";
		cin>>data[i].pemakaian;
        cout<<"Masukan tanggal pencatatan : ";
        cin.getline(data[i].tanggal,sizeof(data[i].tanggal));
        cin.getline(data[i].tanggal,sizeof(data[i].tanggal));
		cout<<endl;
		cout<<setw(35)<<"SLIP PEMBAYARAN"<<endl;;
		cout<<"---------------------------------------------------------------"<<endl;;
		slip(data[i].nama, data[i].id, data[i].paket, data[i].pemakaian, data[i].tanggal);
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
}

void slip(char a[], int b, char c, int d, char e[])
{
	int i=0,batas=0, biaya, kelebihan, total, pph;
	
	switch (c)
	{
		case 'A' : 
			{
				batas = 1000;
				biaya = 100000;
				kelebihan = 100;
				break;
			}
		case 'B' :
			{
				batas = 2000;
				biaya = 175000;
				kelebihan = 100;
				break;
			}
		case 'C' :
			{
				batas = 4000;
				biaya = 300000;
				kelebihan = 100;
				break;
			}
            case 'D' : 
            {
                batas = 8000;
                biaya = 500000;
                kelebihan = 100;
                break;
            }
            default :
            {
                cout<<"\nAnda salah memasukan kode";
                batas = 0;
                biaya = 0;
                kelebihan = 0;
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
    cout<<"\nTanggal pencatatan"<<setw(6)<<" : "<<e;
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




/*#include <iostream>
using namespace std;

int main () {
    int lat[5] = {10, -15, 5}; 
    int lon[5] = {-5, 25, -30};
    for (int i=0 ; i<3 ; i++) 
    {
        if (lat[i] > 0) cout << lat[i] << " LU " ;
        else if (lat[i] < 0) 
        cout <<lat [i] << " LS "; 
        else cout << " L0 ";
        if (lon[i] > 0) 
        cout << lon[i] << " BT " << endl;
        else if (lon[i] < 0)   
        cout << lon[i] << " BB " << endl; 
        else  cout << " B0 " << endl;
    }

    system("pause");
}
*/




/*#include <iostream>
using namespace std;
int main() 
{ 
    int j, m, d, i=0; 
    int a[3][3]= {12,17,23,59,30,30,7,8,24};
    for (int i=0; i<3 ; i++)
    { 
        if ((a[i][0]<=59) && (a[i][1]<=59) && (a[i][2]<=24))
        {
            d = a[i][0];
            m = a[i][1];
            j = a[i][2]; 
            cout<<"Jam = "<< j <<" : " << m << " : "<< d;
            cout <<endl<<endl; 
        }
        else
        cout <<"input tidak valid" << endl<<endl;
    } 
    system("pause");
}
*/




/*#include<iostream>
using namespace std;

int main()
{
    int i=0,a,c=0;
    char b;
    cout<<"\nAda berapa apel dipohon anda ? ";
    cin>>a;
    for (i=0 ; i<a ; i++)
    {
        cout<<"ingin memetik apel (Y/N) ? ";
        cin>>b;
        if (b == 'Y')
        {
            c++;
        }
        else 
        {
            d++;
        }
    }
    cout<<"Total apel yang anda petik : "<<c<<endl
    <<"Sisa apel dipohon anda : "<<a-c<<endl;

    system("pause");
}
*/




/*#include<iostream>
using namespace std;

void kirim(char a, int b);

int main()
{
    double b;
    char a;
    cout<<"Kategori : \n1. <=20 km   Rp.10.000/kg \n2. s/d 50 km  Rp.20.000/kg"
    <<"\n3. s/d 250 km Rp.50.000/kg"
    <<"\n4. s/d 1000 km    Rp.100.000/kg"
    <<"\n5. >1000 km   Rp.250.000/kg"<<endl;
    cout<<"\nMasukan pilihan kategori anda : ";
    cin>>a;
    cout<<"Masukan berat paket anda (kg) : ";
    cin>>b;
    if (b<1)
    {
        a = '1';
        b = 1;
    }

    kirim (a,b);

    system("pause");
}

void kirim(char a, int b)
{
    char i;
    int biaya,total;
    cout<<"\n1. Layanan ekspress \n2. Layanan reguler"<<endl;
    cout<<"Masukan pilihan anda : ";
    cin>>i;
    switch (a)
    {
        case '1' :
        {
            biaya = 10000;
            break;
        }
        case '2' :
        {
            biaya = 20000;
            break;
        }
        case '3' : 
        {
            biaya = 50000;
            break;
        }
        case '4' :
        {
            biaya = 100000;
            break;
        }
        case '5' : 
        {
            biaya = 250000;
            break;
        }
        default :
        {
            cout<<"\nMaaf anda salah memasukan kode";
            biaya = 0;
            break;
        }
    }
    if (i == '1')
    {
        total = biaya*b + (biaya*80/100*b);
    }
    else
    {
        total = biaya*b;
    }
     cout<<"Total biaya pengiriman barang seberat "<<b<<"kg = Rp."<<total<<endl;
}
*/



/*#include<iostream>
using namespace std;

double pph(int a);
int gaji_bersih(int c,int d, int e);

int main()
{
    int a[100][10];
    int i=0,j=0,n;
    int b,gaji=0,transport=0,c=0,total=0,hari=0;
    char nama[100];
    int w=0,z=0,x=0;
    cout<<"\nMasukan jumlah karyawan : ";
    cin>>n;
    for (i=0 ; i<n ; i++)
    {
        cout<<"\nKaryawan nomor "<<i+1<<endl;
        cout<<"\nMasukan nama : ";
        cin.getline(nama, sizeof(nama));
        cin.getline(nama, sizeof(nama));
        for(j=0 ; j<5 ; j++)
        {
            if (j == 0)
            {
                cout<<"Gaji Pokok   Uang transport/hari \n1. Rp.2.000.000    Rp. 50.000"
                <<"\n2. Rp.2.500.000    Rp. 60.000"
                <<"\n3. Rp. 3.000.000   Rp. 75.000"
                <<"\n4. Rp. 4.000.000   Rp. 100.000"
                <<"\nMasukan golongan anda (1/2/3/4): ";
                cin>>a[i][0];
                switch (a[i][0])
                {
                    case 1 :
                    {
                        gaji = 2000000;
                        transport = 50000;
                        break;
                    }
                    case 2 :
                    {
                        gaji = 2500000;
                        transport = 60000;
                        break;
                    }
                    case 3 :
                    {
                        gaji = 3000000;
                        transport = 75000;
                        break;
                    }
                    case 4 :
                    {
                        gaji = 4000000;
                        transport = 100000;
                        break;
                    }
                    default :
                    {
                        cout<<"\nAnda salah memasukan kode";
                        gaji = 0;
                        transport = 0;
                        break;
                    }
                }
            }
                if (j == 1)
                {
                    cout<<"Masukan banyak hari kerja dalam sebulan : ";
                    cin>>a[i][1];
                    hari = a[i][1];
                }
                if (j == 2)
                {
                    total = gaji_bersih(hari,gaji,transport);
                    a[i][2] = total;
                    w += total;
                }
                if (j == 3)
                {
                    a[i][3] = pph(total);
                    x += a[i][3];

                }
                if (j == 4)
                {
                    a[i][4] = a[i][2] - a[i][3];
                    z += a[i][4];
                }
            }
        }

        cout<<"\nnomor    golongan    hari    gaji kotor  pajak   gaji bersih"<<endl;
        for (i=0 ; i<n ; i++)
        {
            cout<<i+1<<"           ";
            for (j=0 ; j<5 ; j++)
            {
                cout<<a[i][j]<<"        ";
            }
            cout<<endl;
        }

        cout<<"\n\ntotal gaji kotor : "<<w;
        cout<<"\nTotal pajak : "<<x;
        cout<<"\nTotal gaji bersih : "<<z<<endl;

        system ("pause");
    }

double pph(int a)
{
    double pajak;
    int total;
    if (a <= 3500000)
    {
        pajak = 0;
    }
    else if (a <= 10000000)
    {
        pajak = 0.05;
    }
    else if (a <= 25000000)
    {
        pajak = 0.1;
    }
    else 
    {
        pajak = 0.15;
    }

    total = pajak * a;
    return total;
}

int gaji_bersih(int c,int d, int e)
{
    int sum;
    sum = d + e*c;
    return sum;
}
*/



/*#include<iostream>
using namespace std;

int main()
{
    int angka[100];
    int i=0, total=0,n;
    cout<<"Masukan digit bilangan : ";
    cin>>n;

    cout<<"\nMasukan bilangan : ";
    for (i=0 ; i<n ; i++)
    {
        cin>>angka[i];
        total += angka[i];
    }

    for (i=0 ; i<n ; i++)
    {
        cout<<angka[i]<<" ";
    }
    cout<<"\njumlahnya = "<<total<<endl;

    system ("pause");

}
*/

#include<iostream>
using namespace std;

int main() {
    int numbers[5] = {5, 2, 5, 2, 2};
    int i = 0, j=0;
    for (i = 0 ; i<5 ; i++){
        for (j=0 ; j<numbers[i] ; j++){
            cout<<"x";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
system("pause");
}
