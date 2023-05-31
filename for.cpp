#include<iostream>
using namespace std;

int main()
{

    for (int i=0;i<5;i++)
{
    if (i==2){

        //continue; // skips second step of iteration
        break; // skips the interation after the condition get true
    }
    cout<<i<<endl;

}

    return 0;
}