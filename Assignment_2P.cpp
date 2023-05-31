#include <iostream>

using namespace std;

int eligibleStudentCount(float a, float b, float c) 
{
	float temp[3]={a,b,c};
	int count=0;
 	for (int i=1;i<=3;i++)
 	{
 		if(temp[i]>90)
		 {
		 	count++;
			 }	
	}
 	
		return count;
}
main(){
	int SSC_Student1=971, HSSC_Student1=953, EntTest_Student1=950;
	float SSCAgg_Student1, HSSCAgg_Student1, EntTestAgg_Student1, Agg_total1, AggPer_Student1;
	
	int SSC_Student2=1052, HSSC_Student2=976, EntTest_Student2=996;
	float SSCAgg_Student2, HSSCAgg_Student2, EntTestAgg_Student2, Agg_total2, AggPer_Student2;
	
	int SSC_Student3=990, HSSC_Student3=981, EntTest_Student3=1020;
	float SSCAgg_Student3, HSSCAgg_Student3, EntTestAgg_Student3, Agg_total3, AggPer_Student3;
	
	SSCAgg_Student1=SSC_Student1/100.0*10;
	SSCAgg_Student2=SSC_Student2/100.0*10;
	SSCAgg_Student3=SSC_Student3/100.0*10;
	
	HSSCAgg_Student1=HSSC_Student1/100.0*40;
	HSSCAgg_Student2=HSSC_Student2/100.0*40;
	HSSCAgg_Student3=HSSC_Student3/100.0*40;
	
	EntTestAgg_Student1=EntTest_Student1/100.0*50;
	EntTestAgg_Student2=EntTest_Student2/100.0*50;
	EntTestAgg_Student3=EntTest_Student3/100.0*50;
	
	Agg_total1=	SSCAgg_Student1+HSSCAgg_Student1+EntTestAgg_Student1;
	Agg_total2=	SSCAgg_Student2+HSSCAgg_Student2+EntTestAgg_Student2;
	Agg_total3=	SSCAgg_Student3+HSSCAgg_Student3+EntTestAgg_Student3;
	
	AggPer_Student1=Agg_total1/1100*100;
	AggPer_Student2=Agg_total2/1100*100;
	AggPer_Student3=Agg_total3/1100*100;
	
	cout<<"***************************Merit Calculation*******************************\n\n\n\n\n";

	cout<<"Agreegate Percentage of Student One Calculate as: "<<AggPer_Student1<<endl;
	cout<<"Agreegate Percentage of Student Two Calculate as: "<<AggPer_Student2<<endl;
	cout<<"Agreegate Percentage of Student Three Calculate as: "<<AggPer_Student3<<endl;

	if(AggPer_Student1>AggPer_Student2 && AggPer_Student1>AggPer_Student3)
	{
		cout<<"Maximum Aggregate Percentage is: "<<AggPer_Student1<<endl;
	}
	 else if(AggPer_Student2>AggPer_Student1 && AggPer_Student2>AggPer_Student3) 
	{
		cout<<"Maximum Aggregate Percentage is: "<<AggPer_Student1<<endl;
	}
	else 
	{
		cout<<"\nMaximum Aggregate Percentage is: "<<AggPer_Student3<<endl;
	}
	cout<<"\nNumber of Eligible Students are :"<<eligibleStudentCount(AggPer_Student1, AggPer_Student2, AggPer_Student3)<<endl;
	double sum;
	
	sum=AggPer_Student1 + AggPer_Student2 + AggPer_Student3;
	
	cout<<"\nAggregate sum of all student marks: "<<sum<<endl;

	system ("PAUSE");
}

