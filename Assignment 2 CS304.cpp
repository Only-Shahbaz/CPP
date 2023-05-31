# include <iostream>
using namespace std;
class TicTacToe

{
	private:
		char htd[3][3];
	public:
		TicTacToe();
		void makeMove();
		void printBoard();
		int validMove();
		int gameStatus();
		void startGame();
};
	
int TicTacToe::validMove()
{
	int move, player = 1, i;
	char mark = 'X';
	do
	{
		player = (player%2) ? 1 : 2;
		printBoard();
		mark=(player == 1) ? 'X' : 'O';
		cout << "Player " << mark << " enter move: ";
		cin >>move;	
		mark=(player == 1) ? 'X' : 'O';
		if(move == 1 && htd[0][0] == ' ')
		{
			htd[0][0] = mark;
		}
		else if(move == 2 && htd[0][1] == ' ')
		{
			htd[0][1] = mark;
		}
		else if(move == 3 && htd[0][2] == ' ')
		{
			htd[0][2] = mark;
		}
		else if(move == 4 && htd[1][0] == ' ')
		{
			htd[1][0] = mark;
		}
		else if(move == 5 && htd[1][1] == ' ')
		{
			htd[1][1] = mark;
		}
		else if(move == 6 && htd[1][2] == ' ')
		{
			htd[1][2] = mark;
		}
		
		else if(move == 7 && htd[2][0] == ' ')
		{
			htd[2][0] = mark;
		}
		else if(move == 8 && htd[2][1] == ' ')
		{
			htd[2][1] = mark;
		}
		else if(move == 9 && htd[2][2] == ' ')
		{
			htd[2][2] = mark;
		}
		else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
	    i=gameStatus();
	
		player++;
    }while(i==-1);
    printBoard();
    if(i==1){
    	--player;
        cout<<"\n==>\aPlayer "<<mark<<" win " << endl;
        for(int hs = 0; hs < 3; hs++)
		{
			for(int sk = 0; sk < 3; sk++)
			{
				htd[hs][sk] = ' ';
			}
		}
	}
        
	else
	{
		cout<<"\n==>\aGame Draw" << endl;
		for(int hs = 0; hs < 3; hs++)
		{
			for(int sk = 0; sk < 3; sk++)
			{
				htd[hs][sk] = ' ';
			}
		}
	}
}

TicTacToe::TicTacToe()
{
	for(int hs = 0; hs < 3; hs++)
	{
		for(int sk = 0; sk < 3; sk++)
		{
			htd[hs][sk] = ' ';
		}
	}
}
int TicTacToe::gameStatus()
{
	if (htd[0][0] == htd[0][1] && htd[0][1] == htd[0][2] && htd[0][0] != ' ')

        return 1;
    else if (htd[1][0] ==htd[1][1] && htd[1][1] == htd[1][2] && htd[1][0] != ' ')

        return 1;
    else if (htd[2][0] == htd[2][1] && htd[2][1] == htd[2][2] && htd[2][0] != ' ')

        return 1; 
        
    else if (htd[0][0] == htd[1][0] &&htd[1][0] ==htd[2][0] && htd[0][0] != ' ')

        return 1;
    else if (htd[0][1] == htd[1][1] && htd[1][1] == htd[2][1] && htd[0][1] != ' ')

        return 1;
    else if (htd[0][2] == htd[1][2] && htd[1][2] == htd[2][2] && htd[0][2] != ' ')

        return 1;
    else if (htd[0][0] == htd[1][1] && htd[1][1] == htd[2][2] && htd[0][0] != ' ')

        return 1;
    else if (htd[0][2] == htd[1][1] && htd[1][1] == htd[2][0] && htd[0][2] != ' ')

        return 1;
    else if (htd[0][0] != ' ' && htd[0][1] != ' ' && htd[0][2] != ' ' 
                    && htd[1][0] != ' ' && htd[1][1] != ' ' && htd[1][2] != ' ' 
                  && htd[2][0] != ' ' && htd[2][1] != ' ' &&htd[2][2] != ' ')

        return 0;
    else
        return -1;
}
void TicTacToe::makeMove()
{
	validMove();        
}

void TicTacToe::startGame()
{
	makeMove();
}
void TicTacToe::printBoard()
{
	cout << " 0\t1\t2" << endl << endl;
	cout << "0     :     :   " << endl;
	cout << "   "<< htd[0][0] << "  :  "<< ""<< htd[0][1] << "  :" << "  "<<htd[0][2] << endl;
	cout << " _____:_____:_____" << endl;
	cout << "1     :     :" << endl;
	cout << "   "<< htd[1][0] << "  :  "<< ""<< htd[1][1] << "  :" << "  "<< htd[1][2] << endl;
	cout << " _____:_____:_____" << endl;
	cout << "      :     :   " << endl;
	cout << "   "<< htd [2][0] << "  :  "<< ""<< htd[2][1] << "  :" << "  "<< htd[2][2] << endl;
	cout << "2     :     :   " << endl << endl;
	cout << "\n";	
}

int main()
{
	TicTacToe myGame;

	int run = 1;
	char choice;
	do
	{
		myGame.startGame();
		cout << "\nDo You Want to Play Again[y/n]: ";
		cin >> choice;
		cout <<"\n";
		if(choice == 'y' || choice == 'Y')
		{
			run = 1;			
		}
		else
		{
			run = 0;
		}
	}while(run == 1);
	return 0;
}

