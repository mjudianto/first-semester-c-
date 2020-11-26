/*//535200047 mathew judianto : modul 2.3.2 nomor 7
#include<iostream>
using namespace std;

int main()
{
	int harga,jumlah,total,diskon,TA,rp,kembalian;
	char nama[20];
	cout<<"\nMasukan nama barang : ";
	cin>>nama;
	cout<<"Masukan harga barang : Rp.";
	cin>>harga;
	cout<<"Masukan jumlah barang : ";
	cin>>jumlah;
	total = harga * jumlah;
	cout<<"\n--------------------------------------";
	cout<<"\nTotal belanjaan anda : Rp."<<total;
	if	(jumlah >= 10)
	{
		diskon = 0.05 * total;
		cout<<"\nDiskon : Rp."<<diskon<<endl;
	}
	else
	{
		cout<<"\ndiskon = 0";
	}
	TA = total - diskon;
	cout<<"\nTotal yang harus dibayarkan : Rp."<<TA<<endl;
	cout<<"\n--------------------------------------";
	cout<<"\nMasukan jumlah uang yang anda pakai untuk membayar : Rp.";
	cin>>rp;
	if	(rp >= TA)
	{
		kembalian = rp - TA;
		cout<<"Kembalian anda : Rp."<<kembalian<<endl;
		cout<<"Terima kasih telah melakukan transaksi"<<endl;
	}
	else
		cout<<"Maaf uang anda tidak cukup untuk melakukan transaksi ini"<<endl;
}
*/



/*//535200047 mathew judianto : latihan  modul 2 nomor 3
#include <iostream>
using namespace std;

int main()
{
	int tagihan, diskon, total, TA, BL, PP;
	char KK = 0,jawaban;
	cout << "\nMasukan tagihan anda : Rp.";
	cin >> tagihan;
	cout<<"Apakah anda membayar menggunakan kartu kredit (ketik y / t) : ";
	cin>>jawaban;
	if	(jawaban == 'y')
	{
	cout << "Apakah anda menggunakan kartu kredit ABC (ketik y / t) : ";
	cin >> KK;
	}
	else
	{
	cout<<"Pembayaran anda bersifat tunai"<<endl;
	}
	if (tagihan < 500000)
	{
		diskon = 0;
		cout << "\n--------------------------" << endl;
		cout << "Maaf anda tidak mendapatkan diskon" << endl;
	}
	else
	{
	if (KK == 0  && jawaban == 't')
	{
		diskon = 0;
		cout << "\n--------------------------" << endl;
		cout << "Maaf anda tidak mendapatkan diskon" << endl;
	}
	else	if(KK == 't' && jawaban =='y')
	{
		diskon = 0.10 * tagihan;
		cout << "\n--------------------------" << endl;
		cout << "Diskon anda: Rp." << diskon;
	}
	else
	{
		diskon = 0.25 * tagihan;
		cout << "\n--------------------------" << endl;
		cout << "Diskon anda: Rp." << diskon;
	}
	}
	total = tagihan - diskon;
	cout << "\nTotal tagihan sebelum pajak : Rp." << total << endl;
	cout << "\n--------------------------" << endl;
	BL = 0.05 * total;
	PP = 0.11 * total;
	TA = total + BL + PP;
	cout << "Biaya Pelayanan : Rp." << BL << endl;
	cout << "Pajak Pemerintah : Rp." << PP << endl;
	cout << "Total tagihan anda setelah pajak : Rp." << TA << endl;
}
*/



//535200047 mathew judianto : latihan  modul 2 nomor 6
#include<iostream>
using namespace std;

int main()
{
	int harga,diskon,total,bunga,cicilan,waktu;
	char nomor;
	cout<<"\nMasukan harga apartement : Rp.";
	cin>>harga;
	cout<<"\n1. Pembayaran tunai"<<endl;
	cout<<"2. Pembayaran tunai bertahap (dicicil 10 kali dalam 10 bulan)"<<endl;
	cout<<"3. Pembayaran kredit pendek (dicicil dalam 30 kali dalam 30 bulan)"<<endl;
	cout<<"4. Pembayaran kredit panjang (dicicil dalam 60 kali dalam 60 bulan)"<<endl;
	cout<<"\nMasukan nomor pilihan pembayaran yang anda inginkan (ketik angkanya) : ";
	cin>>nomor;
	cout<<"\n------------------------------------------------------------------------------"<<endl;
	switch(nomor) 
	{
		case '1' : 
		{
			diskon =  0.1 * harga;
			waktu = 1;
			bunga = 0;
			cout<<"\nDiskon pembayaran : Rp."<<diskon<<endl;
			break;
		}
		case '2' :
		{
			diskon = 0.05 * harga;
			waktu = 10;
			bunga = 0;
			cout<<"\nDiskon pembayaran : Rp."<<diskon<<endl;
			break;
		}
		case '3' :
		{
			diskon = 0;
			waktu = 30;
			bunga = 0;
			cout<<"Maaf anda tidak mendapatkan diskon"<<endl;
			break;
		}
		case '4' :
		{
			bunga = 0.1 * harga;
			diskon = 0;
			waktu = 60;
			cout<<"Bunga cicilan : Rp."<<bunga<<endl;
			break;
		}
		default :
			cout<<"Anda salah memasukan kode";
			harga = 0;
			diskon = 0;
			waktu = 1;
			bunga = 0;
	}
	total = harga - diskon + bunga;
	cicilan = total / waktu;
	cout<<"Total yang harus dibayar : Rp."<<total<<endl;
	cout<<"Cicilan yang harus dibayarkan per bulan sebanyak "<<waktu<<" kali"<<" : Rp."<<cicilan<<endl;
}


