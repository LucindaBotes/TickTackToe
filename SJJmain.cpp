#include <iostream>
#include <array>
using namespace std;

/*
         |     |
      1  |  2  |  3
    _____|_____|_____
         |     |
      4  |  5  |  6
    _____|_____|_____
         |     |    
      7  |  8  |  9
         |     |    

*/

/*
    ===================================================
        Generate the next iterations of the map here
    ===================================================
*/
void genMap(char* cells, int winCase){
    if ( winCase == -1 || winCase == -2 ) {
        cout << "     |     |     \n"
        "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
        "_____|_____|_____\n"
        "     |     |     \n"
        "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
        "_____|_____|_____\n"
        "     |     |     \n"
        "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"  \n"
        "     |     |     \n";
    }
    else if ( winCase == 0 ) {
        cout << "\\    |     |     \n"
                "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
                "____\\|_____|_____\n"
                "     |\\    |     \n"
                "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
                "_____|____\\|_____     \n"
                "     |     |\\ \n"
                "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"   \n"
                "     |     |    \\ \n";
    }
    else if ( winCase == 1 ) {
        cout << "     |     |    /\n"
                "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
                "_____|_____|/____\n"
                "     |    /|     \n"
                "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
                "_____|/____|_____\n"
                "    /|     |     \n"
                "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"  \n"
                "/    |     |     \n";
    }
    else if ( winCase == 2 ) {
        cout << "     |     |     \n"
                "--"<<cells[0]<<"--|--"<<cells[1]<<"--|--"<<cells[2]<<"--\n"
                "_____|_____|_____\n"
                "     |     |     \n"
                "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
                "_____|_____|_____\n"
                "     |     |     \n"
                "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"  \n"
                "     |     |     \n";
    }
    else if ( winCase == 3 ) {
        cout << "     |     |     \n"
                "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
                "_____|_____|_____\n"
                "     |     |     \n"
                "--"<<cells[3]<<"--|--"<<cells[4]<<"--|--"<<cells[5]<<"--\n"
                "_____|_____|_____\n"
                "     |     |     \n"
                "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"  \n"
                "     |     |     \n";
    }
    else if ( winCase == 4 ) {
        cout << "     |     |     \n"
                "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
                "_____|_____|_____\n"
                "     |     |     \n"
                "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
                "_____|_____|_____\n"
                "     |     |     \n"
                "--"<<cells[6]<<"--|--"<<cells[7]<<"--|--"<<cells[8]<<"--\n"
                "     |     |     \n";
    }
    else if ( winCase == 5 ) {
        cout << "  |  |     |     \n"
                "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
                "__|__|_____|_____\n"
                "  |  |     |     \n"
                "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
                "__|__|_____|_____\n"
                "  |  |     |     \n"
                "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"  \n"
                "  |  |     |     \n";
    }
    else if ( winCase == 6 ) {
        cout << "     |  |  |     \n"
                "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
                "_____|__|__|_____\n"
                "     |  |  |     \n"
                "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
                "_____|__|__|_____\n"
                "     |  |  |     \n"
                "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"  \n"
                "     |  |  |     \n";
    }
    else if ( winCase == 7 ) {
        cout << "     |     |  |  \n"
                "  "<<cells[0]<<"  |  "<<cells[1]<<"  |  "<<cells[2]<<"  \n"
                "_____|_____|__|__\n"
                "     |     |  |  \n"
                "  "<<cells[3]<<"  |  "<<cells[4]<<"  |  "<<cells[5]<<"  \n"
                "_____|_____|__|__\n"
                "     |     |  |  \n"
                "  "<<cells[6]<<"  |  "<<cells[7]<<"  |  "<<cells[8]<<"  \n"
                "     |     |  |  \n";
    }
}

/*
    ===================================================
        Check if the last move has won the game
    ===================================================
*/
int hasWon( char* cells, char symbol ) {
    //Start as not winning
    int won = -1;
    //Create all possible win conditions
    int w[8][3] = { { 1, 5, 9 }, { 3, 5, 7 }, { 1, 2, 3 }, { 4, 5, 6 },
                     { 7, 8, 9 }, { 1, 4, 7 }, { 2, 5, 8 }, { 3, 6, 9 } };
    //Loop through all win conditions to see if won
    for ( int i = 0; i < 8; i++ ) {
        if ( cells[ w[i][0]-1 ] == symbol && cells[ w[i][1]-1 ] == symbol && cells[ w[i][2]-1 ] == symbol ) {
            //Store which set won
            won = i;
        }
    }
    //Check if stalemate
    char cellTypes[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool stalemate = true;
    int count = 0;
    while ( stalemate ) {
        for ( int i = 0; i < 9; i++ ) {
            if ( cells[count] == cellTypes[i] ) {
                stalemate = false;
                break;
            }
        }
        count++;
        if ( count == 8 ) {
            won = -2;
            break;
        }
    }

    //Return whether or not the move caused a win
    return won;
}
/*
    ===================================================
        Each player's move is worked through here
    ===================================================
*/
bool makeMove(char* cells, const int size, char move, char symbol){
    bool next = true;
    for ( int i = 0; i < size; i++ ) {
        if ( cells[i] == move ) {
            cells[i] = symbol;
            next = false;
        }
    }
    return next;
}

int main() {
    /*                                                          
                                                                ============================
                                                                    Instantiate the game
                                                                ============================
    */  
    //Setting up the board
    const int NUM_CELLS = 9;
    char cells [NUM_CELLS] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    int r = 1;
    //No one has won the game yet
    bool play = true;
    int winCase = -1;
    int winPlayer = -1;
    //Reusable variable for each user's move
    char move;
    
    //Each player's symbol
    char symbol[2] = { '~', '~' };
    
    //Welcome to the game
    cout << "=================\n"
            "== Welcome to ===\n"
            "== Tic Tac Toe ==\n"
            "=================\n";
    //Generate the map initially
    genMap( cells, winCase );
    
    //Allow players to decide on their own symbols
    cout << "Player 1 please enter your symbol: ";
    cin >> symbol[0];
    do {
        cout << "Player 2 please enter your symbol: ";
        cin >> symbol[1];
    } while (symbol[0] == symbol[1]);
    /*                                                          
                                                                ============================
                                                                        Play the game
                                                                ============================
    */  
    while ( play ) {
        cout << "============================\n"
                "========= Round "<<r<<" ==========\n"
                "============================\n";
        for ( int i = 0; i < 2; i++ ) {
                cout << "\n"
                        " Player "<<i+1<<" ==================\n"
                        "\n";
            do {
                cout << "Please enter your move: ";
                cin >> move;
            } while ( makeMove( cells, NUM_CELLS, move, symbol[i] ) );
            
            winCase = hasWon( cells, symbol[i] );
            //winCase not -1 means either the game is a draw or someone won
            if ( winCase != -1 ) {
                winPlayer = i;
                play = false;
                break;
            } 
            else if ( winCase == -2 ) {
                winPlayer = -2;
                play = false;
                break;
            }
            else {
                genMap( cells, winCase );
            }
        }
    r++;
    }
    genMap( cells, winCase );
    
    if ( winCase == -2 ) {
        cout << "\n===========================================\n"
        "========= Winner of this game is ==========\n"
        "================= No one ==================\n"
        "===========================================\n";
    }
    else {
        cout << "\n===========================================\n"
                "========= Winner of this game is ==========\n"
                "================ Player "<< ( winPlayer + 1 ) <<" =================\n"
                "===========================================\n";
    }

    return 0;
}
