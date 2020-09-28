

#include <iostream>
#include <string>

int game();
char board [3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
char answer;
bool flag = true;

void drawBoard() {
    std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
    

}

//int main() {
//    
//    std::cout << "Ready to play? Y/N " << std::endl;
//        std::cin >> answer;
//
//    switch (answer) {
//    case 'Y':
//        game();
//    case 'N':
//        std::cout << "Eh" << std::endl;
//    default:
//        std::cout << "Not option" << std::endl;
//    }
//}
//
//int game() {
//    std::cout << "Hello" << std::endl;
//    return 0;
//}

int main()
{
    std::cout << "Welcome!" << std::endl;
    std::cout << " " << std::endl;
    
    while (flag == true) {
        std::cout << "Ready to play? Y/N " << std::endl;
    std::cin >> answer;

    switch (answer) {
    case 'Y': case 'y':
       game();
        //std::cout << "Hello" << std::endl;
       
        break;
    case 'N': case 'n':
        std::cout << "Okay" << std::endl;
        flag = false;
        break;

    default:
        std::cout << "Not an option" << std::endl;
        break;


    }
    }

}

int game() {
    
    drawBoard();
    std::cout << "Player 1 pick a number " << std::endl;
    return 0;
}