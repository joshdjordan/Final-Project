#include <iostream>

void menu()
{
    std::cout << "-- Welcome To Battle Ship --" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "1) Rules & Instructions" << std::endl;
    std::cout << "2) Play" << std::endl;
    std::cout << "3) Exit" << std::endl;
}

void rules()
{
    std::cout << "----- Rules / Instructions -----" << std::endl;
    std::cout << "You will first be prompted to place your three ships. The orientation of the ships can be " << std::endl;
    std::cout << "placed in either vertical or horizontal orientation, however diagonal will not be accepted." << std::endl;
    std::cout << "Once all your ships have been placed & accepted the game will begin. You will then be " << std::endl;
    std::cout << "prompted to choose enter a number (either 1 or 2). This will replicate flipping a coin to " << std::endl;
    std::cout << "determine how will start off the game. IF you guess correctly you will go first. Once it " << std::endl;
    std::cout << "is your turn you will enter the 'index' on the board map you wish to send your hits. Direct " << std::endl;
    std::cout << "hits will replace the index with a 'X' and misses will replace the index wit ha 'o'. Once a " << std::endl;
    std::cout << "ship has been hit in all locations a message will be displayed alerting you that either your " << std::endl;
    std::cout << "or your enemies ship has been sunk. Once all ships have been sunk a message will be " << std::endl;
    std::cout << "displayed stating the victor of the match." << std::endl;
}

void PrintBoard(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{
    char a = 'A';
    int MenuDecision;
    const int size = 10;
    int BattleShip[size][size];

    void menu();

    if (MenuDecision == 1)
    {
        rules();
    }
    else if (MenuDecision == 2)
    {
        for (int i = 0; i < size; i++)
        {
            //BattleShip[i] = a++;
            for (int j = 0; j < size; j++)
            {
                //BattleShip[j] = j + 1;
            }
        }
        PrintBoard(BattleShip, size);
    }
}