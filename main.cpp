#include <iostream>

using namespace std;

void startGame(){
    cout<< "=================\n"
           "== Tic Tac Toe ==\n"
           "=================\n"
           "     |     |     \n"
           "  1  |  2  |  3  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "  4  |  5  |  6  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "  7  |  8  |  9  \n"
           "     |     |     \n"
           "=================\n";
}

void genMap(char cell_1, char cell_2, char cell_3, char cell_4, char cell_5, char cell_6, char cell_7, char cell_8, char cell_9){
    cout<< "=================\n"
           "     |     |     \n"
           "  "<<cell_1<<"  |  "<<cell_2<<"  |  "<<cell_3<<"  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "  "<<cell_4<<"  |  "<<cell_5<<"  |  "<<cell_6<<"  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "  "<<cell_7<<"  |  "<<cell_8<<"  |  "<<cell_9<<"  \n"
           "     |     |     \n"
           "=================\n";
}
void winA(){
    cout <<"=================\n"
           "     |     |     \n"                        
           "-----|-----|-----\n"                        
           "_____|_____|_____\n"                         
           "     |     |     \n"                                    
           "  4  |  5  |  6  \n"                                   
           "_____|_____|_____\n"                                    
           "     |     |     \n"                                    
           "  7  |  8  |  9  \n"                                    
           "     |     |     \n"
           "=================\n";
}
void winB(){
    cout <<"=================\n"
           "     |     |     \n"                        
           "  1  |  2  |  3  \n"                        
           "_____|_____|_____\n"                         
           "     |     |     \n"                                    
           "-----|-----|-----\n"                                   
           "_____|_____|_____\n"                                    
           "     |     |     \n"                                    
           "  7  |  8  |  9  \n"                                    
           "     |     |     \n"
           "=================\n";
}
void winC(){
    cout<< "=================\n"
           "     |     |     \n"
           "  1  |  2  |  3  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "  4  |  5  |  6  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "-----|-----|-----\n"
           "     |     |     \n"
           "=================\n";
}
void winD(){
    cout<< "=================\n"
           "\\    |     |     \n"
           "  \\  |  2  |  3  \n"
           "____\\|_____|_____\n"
           "     |\\    |     \n"
           "  4  |  \\  |  6  \n"
           "_____|____\\|_____\n"
           "     |     |\\    \n"
           "  7  |  8  |  \\  \n"
           "     |     |    \\\n"
           "=================\n";
}
void winE(){
    cout<< "=================\n"
           "     |     |    /\n"
           "  1  |  2  |  /  \n"
           "_____|_____|/____\n"
           "     |    /|     \n"
           "  4  |  /  |  6  \n"
           "_____|/____|_____\n"
           "    /|     |     \n"
           "  /  |  8  |  9  \n"
           "/    |     |     \n"
           "=================\n";
}
void winF(){
    cout<< "=================\n"
           "  |  |     |     \n"
           "  |  |  2  |  3  \n"
           "__|__|_____|_____\n"
           "  |  |     |     \n"
           "  |  |  5  |  6  \n"
           "__|__|_____|_____\n"
           "  |  |     |     \n"
           "  |  |  8  |  9  \n"
           "  |  |     |     \n"
           "=================\n";
}
void winG(){
    cout<< "=================\n"
           "     |  |  |     \n"
           "  1  |  |  |  3  \n"
           "_____|__|__|_____\n"
           "     |  |  |     \n"
           "  4  |  |  |  6  \n"
           "_____|__|__|_____\n"
           "     |  |  |     \n"
           "  7  |  |  |  9  \n"
           "     |  |  |     \n"
           "=================\n";
}
void winH(){
    cout<< "=================\n"
           "     |     |  |  \n"
           "  1  |  2  |  |  \n"
           "_____|_____|__|__\n"
           "     |     |  |  \n"
           "  4  |  5  |  |  \n"
           "_____|_____|__|__\n"
           "     |     |  |  \n"
           "  7  |  8  |  |  \n"
           "     |     |  |  \n"
           "=================\n";
}
int main(){
    char cell_1 = '1';
    char cell_2 = '2';
    char cell_3 = '3';
    char cell_4 = '4';
    char cell_5 = '5';
    char cell_6 = '6';
    char cell_7 = '7';
    char cell_8 = '8';
    char cell_9 = '9';
    char player_1;
    char player_2;
    int mPlayer;
    
    bool win = false;
    
    int value;
    
    startGame();
    
        cout << "1. Multiplayer.\n"
                "2. Single player." << endl;
        cin >> mPlayer;
            
            if (mPlayer = 1){
     cout << "STARTING GAME!!!" << endl;
     cout << "Player 1, choose your weapon." << endl;
     cout << "X or O" << endl;
     cin >> player_1;

         if (player_1 == 'X'){
             player_2 = 'O';
         }
         else {
             player_1 = 'O';
             player_2 = 'X';
         }
        for (int i = 1; i<6; i++) {
            while( value < 10 ){
            cout<< "Round"<< i << endl;
                cout << "Player 1 please make your move." << endl;
                cin >> value;
                switch(value){
                    case 1:
                        if (cell_1 == player_1 || cell_1 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_1 = player_1;
                        }
                        break;
                    case 2:
                        if (cell_2 == player_1 || cell_2 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_2 = player_1;
                        }
                        break;
                    case 3:
                        if (cell_3 == player_1 || cell_3 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_3 = player_1;
                        }
                        break;
                    case 4:
                        if (cell_4 == player_1 || cell_4 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_4 = player_1;
                        }
                        break;
                    case 5:
                        if (cell_5 == player_1 || cell_5 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_5 = player_1;
                        }
                        break;
                    case 6:
                        if (cell_6 == player_1 || cell_6 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_6 = player_1;
                        }
                        break;
                    case 7:
                        if (cell_7 == player_1 || cell_7 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_7 = player_1;
                        }
                        break;
                    case 8:
                        if (cell_8 == player_1 || cell_8 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_8 = player_1;
                        }
                        break;
                    case 9:
                        if (cell_9 == player_1 || cell_9 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_9 = player_1;
                        }
                        break;
                    default:
                        cout << "You have input an invalid block." << endl;
                        break;
                    }
                    genMap(cell_1, cell_2, cell_3, cell_4, cell_5, cell_6, cell_7, cell_8, cell_9);
                    
                    if (cell_1 == player_1 && cell_2 == player_1 && cell_3 == player_1) {
                            win = true;
                            winA();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_4 ==player_1 && cell_5 ==player_1 && cell_6 ==player_1) {
                            win = true;
                            winB();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_7 == player_1 && cell_8 == player_1 && cell_9 == player_1) {
                            win = true;
                            winC();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == player_1 && cell_5 == player_1 && cell_9 == player_1) {
                            win = true;
                            winD();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == player_1 && cell_5 == player_1 && cell_7 == player_1) {
                            win = true;
                            winE();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == player_1 && cell_4 == player_1 && cell_7 == player_1) {
                            win = true;
                            winF();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_2 == player_1 && cell_5 == player_1 && cell_8 == player_1) {
                            win = true;
                            winG();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == player_1 && cell_6 == player_1 && cell_9 == player_1) {
                            win = true;
                            winH();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if ((cell_1 ==player_1 || cell_1 ==player_2) && (cell_2 ==player_1|| cell_2 ==player_2) && (cell_3 ==player_1|| cell_3 ==player_2) && (cell_4 == player_1|| cell_4 ==player_2) && (cell_5 ==player_1 || cell_5 ==player_2) && (cell_6 ==player_1 || cell_6 ==player_2) && (cell_7 ==player_1 || cell_7 ==player_2) && (cell_8 ==player_1 || cell_8 ==player_2) && (cell_9 ==player_1 || cell_9 ==player_2)) {
                    cout<< "End of game. Both players lose."<< endl;
                        break;
                    }
                    else {
                        win = true;
                    }
                cout << "Player 2 please make your move." << endl;
                cin >> value;
                switch(value){
                    case 1:
                        if (cell_1 == player_1 || cell_1 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_1 = player_2;
                        }
                        break;
                    case 2:
                        if (cell_2 == player_1 || cell_2 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_2 = player_2;
                        }
                        break;
                    case 3:
                        if (cell_3 == player_1 || cell_3 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_3 = player_2;
                        }
                        break;
                    case 4:
                        if (cell_4 == player_1 || cell_4 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_4 = player_2;
                        }
                        break;
                    case 5:
                        if (cell_5 == player_1 || cell_5 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_5 = player_2;
                        }
                        break;
                    case 6:
                        if (cell_6 == player_1 || cell_6 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_6 = player_2;
                        }
                        break;
                    case 7:
                        if (cell_7 == player_1 || cell_7 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_7 = player_2;
                        }
                        break;
                    case 8:
                        if (cell_8 == player_1 || cell_8 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_8 = player_2;
                        }
                        break;
                    case 9:
                        if (cell_9 == player_1 || cell_9 == player_2){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_9 = player_2;
                        }
                        break;
                    default:
                        cout << "You have input an invalid block." << endl;
                        break;
                    }
                    genMap(cell_1, cell_2, cell_3, cell_4, cell_5, cell_6, cell_7, cell_8, cell_9);
                    
                    if (cell_1 == player_2 && cell_2 == player_2 && cell_3 == player_2) {
                            win = true;
                            winA();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_4 ==player_2 && cell_5 ==player_2 && cell_6 ==player_2) {
                            win = true;
                            winB();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_7 == player_2 && cell_8 == player_2 && cell_9 == player_2) {
                            win = true;
                            winC();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == player_2 && cell_5 == player_2 && cell_9 == player_2) {
                            win = true;
                            winD();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == player_2 && cell_5 == player_2 && cell_7 == player_2) {
                            win = true;
                            winE();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == player_2 && cell_4 == player_2 && cell_7 == player_2) {
                            win = true;
                            winF();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_2 == player_2 && cell_5 == player_2 && cell_8 == player_2) {
                            win = true;
                            winG();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == player_2 && cell_6 == player_2 && cell_9 == player_2) {
                            win = true;
                            winH();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if ((cell_1 ==player_1 || cell_1 ==player_2) && (cell_2 ==player_1|| cell_2 ==player_2) && (cell_3 ==player_1|| cell_3 ==player_2) && (cell_4 == player_1|| cell_4 ==player_2) && (cell_5 ==player_1 || cell_5 ==player_2) && (cell_6 ==player_1 || cell_6 ==player_2) && (cell_7 ==player_1 || cell_7 ==player_2) && (cell_8 ==player_1 || cell_8 ==player_2) && (cell_9 ==player_1 || cell_9 ==player_2)) {
                    cout<< "End of game. Both players lose."<< endl;
                        break;
                    }
                    else {
                        win = true;
                    }
                    
                    if (win = true){
                        break;
                    }
                }
        }
    }
    return 0;
}