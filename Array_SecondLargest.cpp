#include<iostream>
using namespace std;
int main()
{
	int size;
	int arr[size];
	cout<<"Enter the size of array:";
	cin>>size;
	
	for (int i = 0; i<size;i++){
		cin>>arr[i];
	}
	// logic to find second largest
	int largest=INT_MIN;
	int secondlarge=INT_MIN;
	for (int i = 0; i<size;i++){
		if(arr[i]>largest)
		{
			secondlarge=largest;
			largest=arr[i];
		}
		else
		{
			if(arr[i]>secondlarge)
			secondlarge=arr[i];
		}
	}
	cout<<"SECOND LARGEST IS "<<secondlarge;
	return 0;
}
