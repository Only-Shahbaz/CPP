#include <iostream>
using namespace std;
int main(){
    int No, Range;
    cout<<"Enter your Table Number:";
    cin>>No;
    cout<<"Enter your table Range";
    cin>>Range;

    for(int i=1; i<=Range;i++)
        {cout<<No<<"X"<<i<<"="<<i*No<<endl;}
return 0;
}
