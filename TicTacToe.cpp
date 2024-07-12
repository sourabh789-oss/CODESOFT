#include <iostream>
#include <cstdlib>
#include <string.h>
#include <time.h> //for getting random no and update random no again and again

char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; // this is a character array which stores a single character at index
void showBoard();
void select_x_player();   // user select x so this function works
void select_o_player();   // user select o so this function works
void getComputerchoice(); // when we player vs computer
int count_board(char symbol);
char check_winner();
void computervsplayer();
void player1vsplayer2();

using namespace std;
int main()
{

   int mode;
   cout << " Enter 1 the game between you and computer" << endl;
   cout << "Enter 2 the game between two players" << endl;
   cin >> mode;

   switch (mode)
   {
   case 1:
   {
      computervsplayer();
      break;
   }
   case 2:
   {
      player1vsplayer2();
      break;
   }
   default:
   {
      cout << "Please Select mode  Correctly" << endl;
   }
   }

   // computervsplayer();
   return 0;
}

void showBoard()
{
   // in tac toc toe game we have 9 column where we put  X or O
   cout << "   " << "   |   " << "   |   " << endl;
   // we don,t learn this structure I made and  understood | this sign gives after 6 space and then again 6 space | this sign use same this concept use in this below line
   cout << "   " << board[0] << "  |   " << board[1] << "  |   " << board[2] << endl;
   cout << "-----------------------" << endl;

   cout << "   " << "   |   " << "   |   " << endl;
   cout << "   " << board[3] << "  |   " << board[4] << "  |   " << board[5] << endl;
   cout << "-----------------------" << endl;

   cout << "   " << "   |   " << "   |   " << endl;
   cout << "   " << board[6] << "  |   " << board[7] << "  |   " << board[8] << endl;
}

void getComputerchoice() // computer choice is O
{
   srand(time(0)); // this is used to update the random continuously between 0 and 10
   int computchoice;
   do
   {
      computchoice = rand() % 10; // create the number between 0 and 9 not include 10;

   } while (board[computchoice] != ' '); // loop will work when the choice is not empty
   board[computchoice] = 'O';
}

void select_x_player()
{

   while (true)
   {
      cout << "SELECT THE POSTIION (1-9)" << endl;
      int playerchoice;
      cin >> playerchoice;
      playerchoice--; // we use decrement operator because array starts from 0

      if (playerchoice < 0 && playerchoice > 8) // if user enter the choice not between 0 to 8 so this if executes
      {
         cout << "PLEASE SELECT CORRECT POSITION" << endl;
      }

      else if (board[playerchoice] != ' ')
      { // if user try to insert data on not empty space so this condition  executes
         cout << " PLEASE SELECT AN EMPTY POSITION " << endl;
      }
      else
      { // all condition are above false then this code executes
         board[playerchoice] = 'X';
         break;
      }
   }
}

void select_o_player()
{ // if user try to insert O so this function work

   while (true)
   {
      cout << "SELECT THE POSTIION (1-9)" << endl;
      int playerchoice;
      cin >> playerchoice;
      playerchoice--; // we use decrement operator because array starts from 0

      if (playerchoice < 0 && playerchoice > 8) // if user enter the choice not between 0 to 8 so this if executes
      {
         cout << "PLEASE SELECT CORRECT POSITION" << endl;
      }

      else if (board[playerchoice] != ' ')
      { // if user try to insert the data on not empty space so this condition  executes
         cout << " PLEASE SELECT AN EMPTY POSITION " << endl;
      }
      else
      { // all condition are above false then this code executes
         board[playerchoice] = 'O';
         break;
      }
   }
}

int count_board(char symbol)
{
   int total = 0;
   for (int i = 0; i < 9; i++)
   {
      if (board[i] == symbol)
      {
         total += 1;
      }
   }
   return total;
}

char check_winner()
{ // this function returns a  character

   // check winner in horizontal matching
   if ((board[0] == board[1]) && (board[1] == board[2]) && (board[0] != ' '))

      return board[0];

   if ((board[3] == board[4]) && (board[4] == board[5]) && (board[3] != ' '))

      return board[3];

   if ((board[6] == board[7]) && (board[7] == board[8]) && (board[6] != ' '))

      return board[6];

   // check winner in vertical matching
   if ((board[0] == board[3]) && (board[3] == board[6]) && (board[0] != ' '))

      return board[0];

   if ((board[1] == board[4]) && (board[4] == board[7]) && (board[1] != ' '))

      return board[1];

   if (board[2] == board[5] && board[5] == board[8] && board[2] != ' ')

      return board[2];

   // check winner in diagonal matching

   if ((board[0] == board[4]) && (board[4] == board[8]) && (board[0] != ' ')) // board[0] !=' ' give here because any index value is empty so condn become wrong
   {
      return board[0];
   }

   if ((board[2] == board[4]) && (board[4] == board[6]) && (board[2] != ' '))
   {
      return board[2];
   }

   if (count_board('X') + count_board('O') < 9)
   {
      return 'C'; // FOR CONTINUE
   }
   else
   {
      return 'D'; // FOR DRAW
   }
}

void computervsplayer()
{

   string playername;
   cout << "Enter Your Name" << endl;
   cin.ignore();
   getline(cin, playername);
   while (true)
   {
      system("cls");

      showBoard();
      if (count_board('X') == count_board('O'))
      {
         cout << "Player Name: " << playername << "'s Turn." << endl;
         select_x_player();
      }
      else
      {
         getComputerchoice();
      }
      char winner = check_winner();
      if (winner == 'X')
      {
         system("cls");
         showBoard();
         cout << playername << " Won The Game" << endl;
         break; // if any one wins the game so we terminate the loop using break keyword
      }
      else if (winner == 'O')
      {
         system("cls");
         showBoard();
         cout << "Computer Won The Game" << endl;
         break;
      }

      else if (winner == 'D')
      {
         cout << "Game Is Draw" << endl;
         break;
      }
   }
}

void player1vsplayer2()
{
   string player1, player2;
   cout << "Enter the player1" << endl;
   cin.ignore();
   getline(cin, player1);
   cout << "Enter the player2 " << endl;
   cin.ignore();
   getline(cin, player2);

   while (true)
   {
      system("cls");
      showBoard();
      if (count_board('X') == count_board('O'))
      {
         cout << "player1 name" << player1 << "'s Turns." << endl;
         select_x_player();
      }
      else
      {
         cout << "player 2 name" << player2 << "'s Turns." << endl;
         select_o_player();
      }

      char winner = check_winner();
      if (winner == 'X')
      {
         system("cls");
         showBoard();
         cout << "Player1 " << player1 << " Won The Game" << endl;
         break;
      }
      else if (winner == 'O')
      {
         system("cls");
         showBoard();
         cout << "Player2 " << player2 << " Won The Game" << endl;
         break;
      }
      else if (winner == 'D')
      {
         cout << "Game is Draw" << endl;
         break;
      }
   }
}