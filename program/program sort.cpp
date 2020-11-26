/*//program selection sort
#include<iostream>
using namespace std;

void selection_sort(int[],int);
void tampilkan(int[],int);

int main()
{
	int bil[9] = {7, 2, 5, 1, 4, 9, 6, 8, 3};
	cout<<"\nBilangan yang tidak terurut : ";
	tampilkan(bil,9);
	cout<<endl;
	cout<<endl;
	selection_sort(bil,9);
	cout<<"Bilangan yang sudah terurut : ";
	tampilkan(bil,9);
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

//fungsi tampilkan
void tampilkan(int data[],int n)
{
	for (int i=0 ; i<n ; i++)
	{
		cout<<data[i]<<"  ";
	}
}
*/



/*//program exchange sort
#include<iostream>
using namespace std;

void exchange_sort(int[],int);
void tampilkan(int[],int);
void swap(int [], int , int );

int main()
{
	int bil[9] = {7, 2, 5, 1, 4, 9, 6, 8, 3};
	cout<<"\nBilangan yang tidak terurut : ";
	tampilkan(bil,9);
	cout<<endl;
	cout<<endl;
	exchange_sort(bil,9);
	cout<<"Bilangan yang sudah terurut : ";
	tampilkan(bil,9);
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
			tampilkan(data, 9);
            cout << endl;
		}
		cout << "Hasil loop " << i << ": ";
        tampilkan(data, 9);
        cout << endl;
        cout << endl;
        i++;
	}
	while(tukar);
}

//fungsi tampilkan
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
*/



/*//program selection sort
#include<iostream>
using namespace std;

void insertion_sort(int[],int);
void tampilkan(int[],int);

int main()
{
	int bil[9] = {7, 2, 5, 1, 4, 9, 6, 8, 3};
	cout<<"\nBilangan yang tidak terurut : ";
	tampilkan(bil,9);
	cout<<endl;
	cout<<endl;
	insertion_sort(bil,9);
	cout<<endl;
	cout<<"Bilangan yang sudah terurut : ";
	tampilkan(bil,9);
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

void tampilkan(int data[],int n)
{
	for (int i=0 ; i<n ; i++)
	{
		cout<<data[i]<<"  ";
	}
}
*/
