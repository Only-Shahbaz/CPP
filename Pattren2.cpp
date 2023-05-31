#include <iostream>
using namespace std;
int main(){
	int x=5;
	
	for (int i=x;i>=1;i--){
		for (int j=1;j<=i;j++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
	int m=5;
	for (int i=1;i<=m;i++){
		for (int j=1; j<=m;j++)
		{
			if (j<=i){
				cout<<" ";
			}
			else {
				cout<<" *";
			}
		}
	cout<<endl;
	}
	
	int n=5;
	
	for (int j=1;j<=n;j++){
		for (int i=n;i>=j;i--)
		{
			cout<<"*";
		}
	cout<<endl;

}
int num=5;
for (int i=1; i<=num;++i){
	for (int j=1; j<=i;++j){
		cout<<i;
	}cout<<endl;
}

int c=5; 
int count=1;
for (int i=1;i<=c;i++){
	for(int j=1;j<=i;j++){
		cout<<count<<" ";
		count++;
	}cout<<endl;
}
	return 0;		
}
