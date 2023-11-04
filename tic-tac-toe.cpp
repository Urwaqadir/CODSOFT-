#include <iostream>
using namespace std;

char Board[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkWin()
{
    if (Board[1] == Board[2] && Board[2] == Board[3])
        return 1;
    else if (Board[4] == Board[5] && Board[5] == Board[6])
        return 1;
    else if (Board[7] == Board[8] && Board[8] == Board[9])
        return 1;
    else if (Board[1] == Board[4] && Board[4] == Board[7])
        return 1;
    else if (Board[2] == Board[5] && Board[5] == Board[8])
        return 1;
    else if (Board[3] == Board[6] && Board[6] == Board[9])
        return 1;
    else if (Board[1] == Board[5] && Board[5] == Board[9])
        return 1;
    else if (Board[3] == Board[5] && Board[5] == Board[7])
        return 1;
    else if (Board[1] != '1' && Board[2] != '2' && Board[3] != '3' 
                    && Board[4] != '4' && Board[5] != '5' && Board[6] != '6' 
                    && Board[7] != '7' && Board[8] != '8' && Board[9] != '9')
        return 0;
    else
        return -1;
}
void printBoard()
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << Board[1] << "  |  " << Board[2] << "  |  " << Board[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Board[4] << "  |  " << Board[5] << "  |  " << Board[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << Board[7] << "  |  " << Board[8] << "  |  " << Board[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int main()
{
    int currentPlayer = 1, i, choice;

    char playerMarker;
    do
    {
        printBoard();
        currentPlayer = (currentPlayer % 2) ? 1 : 2;

        cout << "Player " << currentPlayer << ", enter a number:  ";
        cin >> choice;

        playerMarker = (currentPlayer == 1) ? 'X' : 'O';

        if (choice >= 1 && choice <= 9 && Board[choice] == '0' + choice)
        {
            Board[choice] = playerMarker;
        }
        else
        {
            cout << "Invalid move or Space Occupied. ";
            currentPlayer--;
            cin.ignore();
            cin.get();
        }

        i = checkWin();
        currentPlayer++;
    } while (i == -1);

    printBoard();
    if (i == 1){
        cout << "Player " << --currentPlayer << " wins!";
        
    }
    else{
        cout << "Game draw";
    }
    cin.ignore();
    cin.get();
    return 0;
}

//int checkWin()
//{
//    if (Board[1] == Board[2] && Board[2] == Board[3])
//        return 1;
//    else if (Board[4] == Board[5] && Board[5] == Board[6])
//        return 1;
//    else if (Board[7] == Board[8] && Board[8] == Board[9])
//        return 1;
//    else if (Board[1] == Board[4] && Board[4] == Board[7])
//        return 1;
//    else if (Board[2] == Board[5] && Board[5] == Board[8])
//        return 1;
//    else if (Board[3] == Board[6] && Board[6] == Board[9])
//        return 1;
//    else if (Board[1] == Board[5] && Board[5] == Board[9])
//        return 1;
//    else if (Board[3] == Board[5] && Board[5] == Board[7])
//        return 1;
//    else if (Board[1] != '1' && Board[2] != '2' && Board[3] != '3' 
//                    && Board[4] != '4' && Board[5] != '5' && Board[6] != '6' 
//                    && Board[7] != '7' && Board[8] != '8' && Board[9] != '9')
//        return 0;
//    else
//        return -1;
//}

//void printBoard()
//{
//    system("cls");
//    cout << "\n\n\tTic Tac Toe\n\n";
//
//    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
//    cout << endl;
//
//    cout << "     |     |     " << endl;
//    cout << "  " << Board[1] << "  |  " << Board[2] << "  |  " << Board[3] << endl;
//
//    cout << "_____|_____|_____" << endl;
//    cout << "     |     |     " << endl;
//
//    cout << "  " << Board[4] << "  |  " << Board[5] << "  |  " << Board[6] << endl;
//
//    cout << "_____|_____|_____" << endl;
//    cout << "     |     |     " << endl;
//
//    cout << "  " << Board[7] << "  |  " << Board[8] << "  |  " << Board[9] << endl;
//
//    cout << "     |     |     " << endl << endl;
//}

