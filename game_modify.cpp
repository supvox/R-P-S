#include <iostream>
#include <ctime>
using namespace std;
char user();
char computer();
void showChoice(char choice);
// void winner(char player, char comp);
int main()
{
    int userPoints=0;
    int computerPoints=0;
    int v;
    cout<<"Enter the number of round you want to play";
    cin>>v;

    for (int i =1 ; i < v+1; i++)
    {
        cout<<"Round "<<i<<":\n";
        char player;
        char comp;
        player = user();
        cout << "Your choice is ";
        showChoice(player);
        comp = computer();
        cout << "Computer choice is ";
        showChoice(comp);

        // winner(player, comp);
        if(player==comp){
            cout<<"Match is Tie\n";
            i--;
            continue;
        }
        if((player == 'r' && comp == 's') || (player == 'p' && comp == 'r') || (player == 's' && comp == 'p'))
        {
            cout<<"You Win\n";
            userPoints++;
        }
        else{
            cout<<"You loose \n";
            computerPoints++;
        }
    }
    cout<<"Results\n";
    cout<<"User Points "<<userPoints<<endl;
    cout<<"Computer Points "<<computerPoints<<endl;
    

    return 0;
}
char user()
{
    char player;
    cout << "ROCK---PAPER---SCISSORS";
    do
    {
        cout << "choose one of them\nPlayer turn\n";
        cout << "'r' for Rock\n'p' for Paper\n's' for Scissors\n";
        cin >> player;

    } while (player != 'r' && player != 'p' && player != 's');
    return player;
}
char computer()
{
    srand(time(0));
    int n = rand() % 3 + 1;
    switch (n)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;

    case 'p':
        cout << "Paper\n";
        break;
    default:
        cout << "Scissors\n";
        break;
    }
}
// void winner(char player, char comp)
// {
//     switch (player)
//     {
//     case 'r':
//         if (comp == 'r')
//         {
//             cout << "Game Tie\n";
            
//         }
//         else if (comp = 'p')
//         {
//             cout << "You Loose\n";
//         }
//         else
//         {
//             cout << "You WIN\n";
//         }
//         break;
//     case 'p':
//         if (comp == 'p')
//         {
//             cout << "Game Tie\n";
//         }
//         else if (comp = 's')
//         {
//             cout << "You Loose\n";
//         }
//         else
//         {
//             cout << "You WIN\n";
//         }
//         break;
//     case 's':
//         if (comp = 's')
//         {
//             cout << "Game Tie\n";
//         }
//         else if (comp == 'r')
//         {
//             cout << "You Loose\n";
//         }
//         else
//         {
//             cout << "You WIN\n";
//         }
//         break;
//     }
// }