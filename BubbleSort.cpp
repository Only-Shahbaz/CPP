#include <iostream>
using namespace std;
void bubbleSort(int a[], int size)
{
	for (int i = 0; i<size; i++)
	{
		for (int j =0; j<size-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]= temp;
			}
		}
	}
	
}
int main()
{
	int size=0;
	int array[size];

	cout<<"Enter your size"<<endl;cin>>size;
	cout<<"Enter your Element to Sort"<<endl;
	for (int i = 0; i<size; i++)
	{
		cin>>array[i];
	}
	 cout<<"\n\nbefore sorting"<<endl;
	for (int i = 0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
	 bubbleSort(array, size);
	
	cout<<"\n\nAfter sorting"<<endl;
	for (int i = 0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
