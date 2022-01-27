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
    cout<< "     |     |     \n"
           "  "<<cell_1<<"  |  "<<cell_2<<"  |  "<<cell_3<<"  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "  "<<cell_4<<"  |  "<<cell_5<<"  |  "<<cell_6<<"  \n"
           "_____|_____|_____\n"
           "     |     |     \n"
           "  "<<cell_7<<"  |  "<<cell_8<<"  |  "<<cell_9<<"  \n"
           "     |     |     \n";
}
void winA(){
    cout <<"     |     |     \n"                        
           "-----|-----|-----\n"                        
           "_____|_____|_____\n"                         
           "     |     |     \n"                                    
           "  4  |  5  |  6  \n"                                   
           "_____|_____|_____\n"                                    
           "     |     |     \n"                                    
           "  7  |  8  |  9  \n"                                    
           "     |     |     \n";                                              
}
void winB(){
    cout <<"     |     |     \n"                        
           "  1  |  2  |  3  \n"                        
           "_____|_____|_____\n"                         
           "     |     |     \n"                                    
           "-----|-----|-----\n"                                   
           "_____|_____|_____\n"                                    
           "     |     |     \n"                                    
           "  7  |  8  |  9  \n"                                    
           "     |     |     \n";                        
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
           "     |     |     \n";
}
void winD(){
    cout<< "\\    |     |     \n"
           "  \\  |  2  |  3  \n"
           "____\\|_____|_____\n"
           "     |\\    |     \n"
           "  4  |  \\  |  6  \n"
           "_____|____\\|_____\n"
           "     |     |\\    \n"
           "  7  |  8  |  \\  \n"
           "     |     |    \\\n";
}
void winE(){
    cout<< "     |     |    /\n"
           "  1  |  2  |  /  \n"
           "_____|_____|/____\n"
           "     |    /|     \n"
           "  4  |  /  |  6  \n"
           "_____|/____|_____\n"
           "    /|     |     \n"
           "  /  |  8  |  9  \n"
           "/    |     |     \n";
}
void winF(){
    cout<< "  |  |     |     \n"
           "  |  |  2  |  3  \n"
           "__|__|_____|_____\n"
           "  |  |     |     \n"
           "  |  |  5  |  6  \n"
           "__|__|_____|_____\n"
           "  |  |     |     \n"
           "  |  |  8  |  9  \n"
           "  |  |     |     \n";
}
void winG(){
    cout<< "     |  |  |     \n"
           "  1  |  |  |  3  \n"
           "_____|__|__|_____\n"
           "     |  |  |     \n"
           "  4  |  |  |  6  \n"
           "_____|__|__|_____\n"
           "     |  |  |     \n"
           "  7  |  |  |  9  \n"
           "     |  |  |     \n";
}
void winH(){
    cout<< "     |     |  |  \n"
           "  1  |  2  |  |  \n"
           "_____|_____|__|__\n"
           "     |     |  |  \n"
           "  4  |  5  |  |  \n"
           "_____|_____|__|__\n"
           "     |     |  |  \n"
           "  7  |  8  |  |  \n"
           "     |     |  |  \n";
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
    bool win = false;
    startGame();
    int value;
        for (int i = 1; i<6; i++) {
            while( value < 10 ){
            cout<< "Round"<< i << endl;
                cout << "Player 1 please make your move." << endl;
                cin >> value;
                switch(value){
                    case 1:
                        if (cell_1 == 'X' || cell_1 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_1 = 'X';
                        }
                        break;
                    case 2:
                        if (cell_2 == 'X' || cell_2 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_2 = 'X';
                        }
                        break;
                    case 3:
                        if (cell_3 == 'X' || cell_3 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_3 = 'X';
                        }
                        break;
                    case 4:
                        if (cell_4 == 'X' || cell_4 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_4 = 'X';
                        }
                        break;
                    case 5:
                        if (cell_5 == 'X' || cell_5 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_5 = 'X';
                        }
                        break;
                    case 6:
                        if (cell_6 == 'X' || cell_6 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_6 = 'X';
                        }
                        break;
                    case 7:
                        if (cell_7 == 'X' || cell_7 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_7 = 'X';
                        }
                        break;
                    case 8:
                        if (cell_8 == 'X' || cell_8 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_8 = 'X';
                        }
                        break;
                    case 9:
                        if (cell_9 == 'X' || cell_9 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_9 = 'X';
                        }
                        break;
                    default:
                        cout << "You have input an invalid block." << endl;
                        break;
                    }
                    genMap(cell_1, cell_2, cell_3, cell_4, cell_5, cell_6, cell_7, cell_8, cell_9);
                    
                    if (cell_1 == 'X' && cell_2 == 'X' && cell_3 == 'X') {
                            win = true;
                            winA();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_4 =='X' && cell_5 =='X' && cell_6 =='X') {
                            win = true;
                            winB();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_7 == 'X' && cell_8 == 'X' && cell_9 == 'X') {
                            win = true;
                            winC();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == 'X' && cell_5 == 'X' && cell_9 == 'X') {
                            win = true;
                            winD();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == 'X' && cell_5 == 'X' && cell_7 == 'X') {
                            win = true;
                            winE();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == 'X' && cell_4 == 'X' && cell_7 == 'X') {
                            win = true;
                            winF();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_2 == 'X' && cell_5 == 'X' && cell_8 == 'X') {
                            win = true;
                            winG();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == 'X' && cell_6 == 'X' && cell_9 == 'X') {
                            win = true;
                            winH();
                            cout << "Player 1 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if ((cell_1 =='X' || cell_1 =='O') && (cell_2 =='X'|| cell_2 =='O') && (cell_3 =='X'|| cell_3 =='O') && (cell_4 == 'X'|| cell_4 =='O') && (cell_5 =='X' || cell_5 =='O') && (cell_6 =='X' || cell_6 =='O') && (cell_7 =='X' || cell_7 =='O') && (cell_8 =='X' || cell_8 =='O') && (cell_9 =='X' || cell_9 =='O')) {
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
                        if (cell_1 == 'X' || cell_1 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_1 = 'O';
                        }
                        break;
                    case 2:
                        if (cell_2 == 'X' || cell_2 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_2 = 'O';
                        }
                        break;
                    case 3:
                        if (cell_3 == 'X' || cell_3 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_3 = 'O';
                        }
                        break;
                    case 4:
                        if (cell_4 == 'X' || cell_4 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_4 = 'O';
                        }
                        break;
                    case 5:
                        if (cell_5 == 'X' || cell_5 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_5 = 'O';
                        }
                        break;
                    case 6:
                        if (cell_6 == 'X' || cell_6 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_6 = 'O';
                        }
                        break;
                    case 7:
                        if (cell_7 == 'X' || cell_7 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_7 = 'O';
                        }
                        break;
                    case 8:
                        if (cell_8 == 'X' || cell_8 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_8 = 'O';
                        }
                        break;
                    case 9:
                        if (cell_9 == 'X' || cell_9 == 'O'){
                            cout << "This block cannot be played." << endl;
                        }
                        else {
                            cell_9 = 'O';
                        }
                        break;
                    default:
                        cout << "You have input an invalid block." << endl;
                        break;
                    }
                    genMap(cell_1, cell_2, cell_3, cell_4, cell_5, cell_6, cell_7, cell_8, cell_9);
                    
                    if (cell_1 == 'O' && cell_2 == 'O' && cell_3 == 'O') {
                            win = true;
                            winA();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_4 =='O' && cell_5 =='O' && cell_6 =='O') {
                            win = true;
                            winB();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_7 == 'O' && cell_8 == 'O' && cell_9 == 'O') {
                            win = true;
                            winC();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == 'O' && cell_5 == 'O' && cell_9 == 'O') {
                            win = true;
                            winD();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == 'O' && cell_5 == 'O' && cell_7 == 'O') {
                            win = true;
                            winE();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == 'O' && cell_4 == 'O' && cell_7 == 'O') {
                            win = true;
                            winF();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_2 == 'O' && cell_5 == 'O' && cell_8 == 'O') {
                            win = true;
                            winG();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == 'O' && cell_6 == 'O' && cell_9 == 'O') {
                            win = true;
                            winH();
                            cout << "Player 2 wins!"<< endl;
                            break;
                        }
                        else {
                            win = false;
                    }
                    if ((cell_1 =='X' || cell_1 =='O') && (cell_2 =='X'|| cell_2 =='O') && (cell_3 =='X'|| cell_3 =='O') && (cell_4 == 'X'|| cell_4 =='O') && (cell_5 =='X' || cell_5 =='O') && (cell_6 =='X' || cell_6 =='O') && (cell_7 =='X' || cell_7 =='O') && (cell_8 =='X' || cell_8 =='O') && (cell_9 =='X' || cell_9 =='O')) {
                    cout<< "End of game. Both players lose."<< endl;
                        break;
                    }
                    else {
                        win = true;
                    }
                    i = i+1;
                }
        }
    return 0;
}
