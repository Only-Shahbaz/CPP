#include<iostream>
using namespace std;

int main()
{
	int max;
	int arr[6]={4,9,7,10,56,87};
	for (int i=0;i<6;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<max;
	return 0;
}
