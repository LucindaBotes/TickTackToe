#include <iostream>

using namespace std;
void genMap(char cell_1, char cell_2, char cell_3, char cell_4, char cell_5, char cell_6, char cell_7, char cell_8, char cell_9){
    cout<< "=================\n"
           "== Tic Tac Toe ==\n"
           "=================\n"
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
           "== Tic Tac Toe ==\n"  
           "=================\n"                        
           "     |     |     \n"                        
           "-----|-----|-----\n"                        
           "_____|_____|_____\n"                         
           "     |     |     \n"                                    
           "  4  |  5  |  6  \n"                                   
           "_____|_____|_____\n"                                    
           "     |     |     \n"                                    
           "  7  |  8  |  9  \n"                                    
           "     |     |     \n"                                    
           "=================\n "                         
           "Congratulations on winning\n!" ;                                              
}
void winB(){
    cout <<"=================\n"
           "== Tic Tac Toe ==\n"                        
           "=================\n"                        
           "     |     |     \n"                        
           "  1  |  2  |  3  \n"                        
           "_____|_____|_____\n"                         
           "     |     |     \n"                                    
           "-----|-----|-----\n"                                   
           "_____|_____|_____\n"                                    
           "     |     |     \n"                                    
           "  7  |  8  |  9  \n"                                    
           "     |     |     \n"                                    
           "=================\n"                          
           "Congratulations on winning\n!";                        
}
void winC(){
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
           "-----|-----|-----\n"
           "     |     |     \n"
           "=================\n"
           "Congratulations on winning\n!";
}
void winD(){
    cout<< "=================\n"
           "== Tic Tac Toe ==\n"
           "=================\n"
           "\\    |     |     \n"
           "  \\  |  2  |  3  \n"
           "____\\|_____|_____\n"
           "     |\\    |     \n"
           "  4  |  \\  |  6  \n"
           "_____|____\\|_____\n"
           "     |     |\\    \n"
           "  7  |  8  |  \\  \n"
           "     |     |    \\\n"
           "=================\n"
           "Congratulations on winning\n!";
}
void winE(){
    cout<< "=================\n"
           "== Tic Tac Toe ==\n"
           "=================\n"
           "     |     |    /\n"
           "  1  |  2  |  /  \n"
           "_____|_____|/____\n"
           "     |    /|     \n"
           "  4  |  /  |  6  \n"
           "_____|/____|_____\n"
           "    /|     |     \n"
           "  /  |  8  |  9  \n"
           "/    |     |     \n"
           "=================\n"
           "Congratulations on winning\n!";
}
void winF(){
    cout<< "=================\n"
           "== Tic Tac Toe ==\n"
           "=================\n"
           "  |  |     |     \n"
           "  |  |  2  |  3  \n"
           "__|__|_____|_____\n"
           "  |  |     |     \n"
           "  |  |  5  |  6  \n"
           "__|__|_____|_____\n"
           "  |  |     |     \n"
           "  |  |  8  |  9  \n"
           "  |  |     |     \n"
           "=================\n"
           "Congratulations on winning\n!";
}
void winG(){
    cout<< "=================\n"
           "== Tic Tac Toe ==\n"
           "=================\n"
           "     |  |  |     \n"
           "  1  |  |  |  3  \n"
           "_____|__|__|_____\n"
           "     |  |  |     \n"
           "  4  |  |  |  6  \n"
           "_____|__|__|_____\n"
           "     |  |  |     \n"
           "  7  |  |  |  9  \n"
           "     |  |  |     \n"
           "=================\n"
           "Congratulations on winning\n!";
}
void winH(){
    cout<< "=================\n"
           "== Tic Tac Toe ==\n"
           "=================\n"
           "     |     |  |  \n"
           "  1  |  2  |  |  \n"
           "_____|_____|__|__\n"
           "     |     |  |  \n"
           "  4  |  5  |  |  \n"
           "_____|_____|__|__\n"
           "     |     |  |  \n"
           "  7  |  8  |  |  \n"
           "     |     |  |  \n"
           "=================\n"
           "Congratulations on winning\n!";
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
    genMap(cell_1, cell_2, cell_3, cell_4, cell_5, cell_6, cell_7, cell_8, cell_9);
    int value;
        while( value < 10 ){
                cout << "Please make your move." << endl;
                cin >> value;
                switch(value){
                    case 1:
                        if (cell_1 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_1 = 'X';
                        }
                        break;
                    case 2:
                        if (cell_2 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_2 = 'X';
                        }
                        break;
                    case 3:
                        if (cell_3 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_3 = 'X';
                        }
                        break;
                    case 4:
                        if (cell_4 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_4 = 'X';
                        }
                        break;
                    case 5:
                        if (cell_5 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_5 = 'X';
                        }
                        break;
                    case 6:
                        if (cell_6 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_6 = 'X';
                        }
                        break;
                    case 7:
                        if (cell_7 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_7 = 'X';
                        }
                        break;
                    case 8:
                        if (cell_8 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_8 = 'X';
                        }
                        break;
                    case 9:
                        if (cell_9 == 'X'){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
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
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_4 =='X' && cell_5 =='X' && cell_6 =='X') {
                            win = true;
                            winB();                     
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_7 == 'X' && cell_8 == 'X' && cell_9 == 'X') {
                            win = true;
                            winC();                       
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == 'X' && cell_5 == 'X' && cell_9 == 'X') {
                            win = true;
                            winD();                       
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == 'X' && cell_5 == 'X' && cell_7 == 'X') {
                            win = true;
                            winE();                     
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_1 == 'X' && cell_4 == 'X' && cell_7 == 'X') {
                            win = true;
                            winF();                       
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_2 == 'X' && cell_5 == 'X' && cell_8 == 'X') {
                            win = true;
                            winG();                       
                            break;
                        }
                        else {
                            win = false;
                    }
                    if (cell_3 == 'X' && cell_6 == 'X' && cell_9 == 'X') {
                            win = true;
                            winH();                       
                            break;
                        }
                        else {
                            win = false;
                    }
                }
    return 0;
}
