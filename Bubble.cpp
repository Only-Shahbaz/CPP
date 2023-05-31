#include<iostream>
using namespace std;
void BubbleSort(int a[])
{
	for (int i = 0; i<5; i++)
	{
		for (int j=0; j<5-1;j++)
		{
			if (a[j]>a[j+1])
			{
				int temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
					
			}
			
		}
	}
}
int main()
{

int arr[5];
cout<<"Enter Five Elements"<<endl;
for (int i=0;i<5;i++)
{
	cin>>arr[i];
}
system ("cls");

cout<<"Before Sorting "<<endl;
for (int i=0;i<5;i++)
{
	cout<<arr[i]<<" ,";
}

BubbleSort(arr);
cout<<"\n After Sorting "<<endl;

for (int i=0;i<5;i++)
{
	cout<<arr[i]<<" ,";
}	
	
return 0;
}
