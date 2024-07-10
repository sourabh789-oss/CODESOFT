#include <iostream>
#include <time.h> //for getting random no and update random no again and again



char board[9] = {' ', ' ', ' ', 'X', 'O', 'X', ' ', ' ', ' '}; // this is a character array which stores a single character at index
void showBoard();
void select_x_player();//user select x so this function works 
void select_o_player();//user select o so thi function works 
void getComputerchoice();
int count_board(char symbol);
char check_winner();
void player1vsplayer2();



using namespace std;
int main()
{
   showBoard();
   return 0;
}




void showBoard()
{
   // in tac toc toe game we have 9 column where we put  X or O
   cout <<"   "<< "   |   " << "   |   " << endl;
   //we don,t learn this structure I made and  understood | this sign gives after 6 space and then again 6 space | this sign use same this concept use in this below line 
   cout<<"   " <<board[0] << "  |   " << board[1] << "  |   " << board[2] << endl;
   cout << "-----------------------" << endl;

   cout <<"   "<<"   |   " << "   |   " << endl;
   cout<<"   " <<board[3] << "  |   " << board[4] << "  |   " << board[5] << endl;
   cout << "-----------------------" << endl;

   cout <<"   "<< "   |   " << "   |   " << endl;
   cout<<"   " <<board[6] << "  |   " << board[7] << "  |   " << board[8] << endl;
  

}

void getComputerchoice(){
 srand(time(0));//this is used to update the random continuously between 0 and 10
 int computchoice;
 do{
 computchoice=rand()%10;//create the number between 0 and 9 not include 10;

 }while(board[computchoice!=' ']);//loop will work when the choice is not empty 
board[computchoice]= 'O';

}

void select_x_player(){

while(true){
cout<<"SELECT THE POSTIION (1-9)"<<endl;
int playerchoice;
cin>>playerchoice;
playerchoice--;//we use decrement operator because array starts from 0

if(playerchoice<0 && playerchoice>8)//if user enter the choice not between 0 to 8 so this if executes 
{
   cout<<"PLEASE SELECT CORRECT POSITION"<<endl;
}

else if(board[playerchoice !=' ']){//if user try to insert data on not empty space so this condition  executes 
cout<<" PLEASE SELECT AN EMPTY POSITION "<<endl;

}
else{//all condition are above false then this code executes 
   board[playerchoice]='X';
   break;
}

}

}



void select_o_player(){//if user try to insert O so this function work 

while(true){
cout<<"SELECT THE POSTIION (1-9)"<<endl;
int playerchoice;
cin>>playerchoice;
playerchoice--;//we use decrement operator because array starts from 0

if(playerchoice<0 && playerchoice>8)//if user enter the choice not between 0 to 8 so this if executes 
{
   cout<<"PLEASE SELECT CORRECT POSITION"<<endl;
}

else if(board[playerchoice !=' ']){//if user try to insert the data on not empty space so this condition  executes 
cout<<" PLEASE SELECT AN EMPTY POSITION "<<endl;

}
else{//all condition are above false then this code executes 
   board[playerchoice]='X';
   break;
}

}

}



