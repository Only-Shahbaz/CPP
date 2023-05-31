#include<iostream>
using namespace std;

class TicTacToe
{
private:
 	char No[3][3];
 	
 public:
 	TicTacToe(){ }
 	
 	void printBoard(){
		system("cls");
	
	cout<<"\t --------TICK CROSS GAME--------\n\n\n";
	cout<<"Player 1 (X)\n\n";
	cout<<"Player 2 (O)\n\n";
	char No[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	cout<<"\t\t   "<<No[0][0]<<" |  "<<No[0][1]<<"  |  "<<No[0][2]<<"  \n";  
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t   "<<No[1][0]<<" |  "<<No[1][1]<<"  |  "<<No[1][2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t   "<<No[2][0]<<" |  "<<No[2][1]<<"  |  "<<No[2][2]<<"  \n";
	
	cout<<"\n\n\n";
}

void makeMove(){
	int row, col;
	int choice;
 	char turn = 'X';
 	
	
if(turn=='X'){
	cout<<"Player 1 (X) Turn:";}
	else if (turn=='O'){
	cout<<"Player 2 (O) Turn:";
}
	
	cin>>	choice;
	switch (choice){
	case 1: row=0;col=0; break;
	case 2: row=0;col=1; break;
	case 3: row=0;col=2; break;
	case 4: row=1;col=0; break;
	case 5: row=1;col=1; break;
	case 6: row=1;col=2; break;
	case 7: row=2;col=0; break;
	case 8: row=2;col=1; break;
	case 9: row=2;col=2; break;
	default:
		cout<<"Invalid Entry\n"; break;
	}

	if (turn=='X'&& No[row][col]!='X'&&No[row][col]!='O')
	{No[row][col]='X'; turn = 'O';}
	else if (turn=='O'&& No[row][col]!='X'&&No[row][col]!='O')
	{No[row][col]='O';	turn = 'X';}
	else {cout<<"Box Alreay Filled\n";
	makeMove();
	}
}

bool gameStatus(){
	for (int i=0;i<3;i++)
	if(No[i][0] == No[i][1] && No[i][0] == No[i][2] || No[0][i] == No[1][i] && No[0][i] == No[2][i])
	return false;
	
	for (int i=0;i<3;i++)
	for (int j=0;j<3;j++)
	if (No[i][j]!='X'&& No[i][j]!='O')
	return true;	
}
}; 
int main()
{
	TicTacToe obj;
	while(true){
	
	obj.printBoard();
	obj.makeMove();	
	
	}
	
	
	
	
	
	return 0;
}
