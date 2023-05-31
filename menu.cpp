#include<iostream>
using namespace std;
int main ()
{
    int a[4], sum=0, pro=1, o, avg;
    cout<<"Enter Four Values ="<<endl;
    for (int i = 0; i<4;i++){
            cin>>a[i]; 
     }
          for (int i = 0; i<4;i++){
                        sum = sum + a[i];
            pro = pro * a[i]; 
            avg = sum/4;
     }
     cout<<"Enter your options:"<<endl;
     cout<<"Select one for sum"<<endl;
     cout<<"Select two for product"<<endl;
     cout<<"Select Three for Average"<<endl;
     cin>>o;
     if (o==1){
     cout<<"Sum of Values are= "<<sum;
     }
     else if (o==2){

         cout<<"Product of Values are= "<<pro;
     }
     else if(o==3)
     {

         cout<<"Average of Values are= "<<avg;
     }
     else {
         cout<<"You enter a invalid option";
     }
return 0;
}