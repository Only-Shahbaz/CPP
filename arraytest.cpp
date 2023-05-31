#include<iostream>
using namespace std;

void bubbleSort(int a[])
{
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<(5-1);j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
}

int main()

{
	cout<<"Enter Five Elements"<<endl;
int array[5];
for (int i=0;i<5;i++)
{
	cin>>array[i];
}

system("cls");

cout<<"Array Before Sorting"<<endl;

for (int i=0;i<5;i++)
{
	cout<<array[i]<<"  ";
}

bubbleSort(array);

cout<<"\n\nArray After Sorting"<<endl;

for (int i=0;i<5;i++)
{
	cout<<array[i]<<"  ";
}
return 0;
}
