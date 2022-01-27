#include <iostream>

using namespace std;
void genMap(){
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
int main(){
    bool cell_1 = false;
    bool cell_2 = false;
    bool cell_3 = false;
    bool cell_4 = false;
    bool cell_5 = false;
    bool cell_6 = false;
    bool cell_7 = false;
    bool cell_8 = false;
    bool cell_9 = false;
    bool win = false;
    genMap();
    int value;
        while( value < 10 ){
                cout << "Please make your move." << endl;
                cin >> value;
                switch(value){
                    case 1:
                        if (cell_1 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_1 = true;
                        }
                        break;
                    case 2:
                        if (cell_2 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_2 = true;
                        }
                        break;
                    case 3:
                        if (cell_3 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_3 = true;
                        }
                        break;
                    case 4:
                        if (cell_4 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_4 = true;
                        }
                        break;
                    case 5:
                        if (cell_5 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_5 = true;
                        }
                        break;
                    case 6:
                        if (cell_6 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_6 = true;
                        }
                        break;
                    case 7:
                        if (cell_7 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_7 = true;
                        }
                        break;
                    case 8:
                        if (cell_8 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_8 = true;
                        }
                        break;
                    case 9:
                        if (cell_9 == true){
                            cout << "You have already played this block." << endl;
                        }
                        else {
                            cout << "You have successfully played this block." << endl;
                            cell_9 = true;
                        }
                        break;
                    default:
                        cout << "You have input an invalid block." << endl;
                        break;
                    }
                if ((cell_1 && cell_2 && cell_3) || (cell_4 && cell_5 && cell_6) || (cell_7 && cell_8 && cell_9) ||(cell_1 && cell_5 && cell_9) ||(cell_3 && cell_5 && cell_7) ||(cell_1 && cell_4 && cell_7) ||(cell_3 && cell_5 && cell_8) || (cell_3 && cell_6 && cell_9)) {
                    win = true;
                    cout << "Congratulations on winning!" << endl;
                    break;
                }
                else {
                    win = false;
                }
            
        }
    return 0;
}
