#include <iostream>

using namespace std;
int ShowMatrix()
{
	int row=2, column=2;
	 int matrix[2][2] = { {8, -4} , {-6, 2}  };
   cout<<"The matrix is:"<<endl<<endl;
   for(int i=0; i<row; ++i) {
      for(int j=0; j<column; ++j)
      cout<<matrix[i][j]<<"\t";
      cout<<endl<<endl;
   }
}
   int showTranspose ( )
{
   int transpose[2][2], row=2, column=2, i, j;
   int matrix[2][2] = { {8, -4} , {-6, 2}  };
   
   cout<<endl;
   for(i=0; i<row; ++i)
   for(j=0; j<column; ++j) {
      transpose[j][i] = matrix[i][j];
   }
   cout<<"The transpose of the matrix is:"<<endl<<endl;
   for(i=0; i<column; ++i) {
      for(j=0; j<row; ++j)
      cout<<transpose[i][j]<<"\t";
      cout<<endl<<endl;
   }
}

int	calculateDeterminant()
{

	int  determMatrix[2][2],	determinant;
	int matrix[2][2] = { {8, -4} , {-6, 2}  };
	
	
	determinant = ((matrix[0][0] * matrix[1][1]) - 
					(matrix[0][1] * matrix[1][0]));

 	cout << "\n\nThe Determinant of given Matrix = " << determinant;	
}


int showAdjoint()
{
	  int ch,A2[2][2] = {{8,-4},{-6,2}},AD2[2][2],C2[2][2];


        C2[0][0]=A2[1][1]; C2[0][1]=-A2[1][0]; C2[1][0]=-A2[0][1]; C2[1][1]=A2[0][0];
        

        AD2[0][0]=C2[0][0]; AD2[0][1]=C2[1][0]; AD2[1][0]=C2[0][1]; AD2[1][1]=C2[1][1];
        cout<<"\n\nAdjoint of A is :- \n\n";
      	cout<<AD2[0][0]<<"\t"<<AD2[0][1]<<"\n"<<AD2[1][0]<<"\t"<<AD2[1][1]<<"\t\n";

}

int main()
{
	int choice = 0;
	cout<<"Enter your choice "<<endl;
	cout<<"Press 1 to display the matrix and its transpose"<<endl;
		cout<<	"Press 2 to find adjoint and determinant of the matrix"<<endl;
		cout<<"Press any other key to exit.\n";
		cin>>choice;
  
  if (choice ==1)

  	{
  	
  	ShowMatrix();
    showTranspose ( );
	}
    else if (choice == 2)
    {
	
    showAdjoint();	
	calculateDeterminant();
	}
	else
	
	return 0;

}

