#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void guessNumber(int guessno, int actualnum, int nguesses)
{

    while (guessno != actualnum)
    {
        if (guessno > actualnum)
        {
            cout << "enter the lower number please" << endl;
            cin >> guessno;
        }
        else
        {
            cout << "enter the higher number please" << endl;
            cin >> guessno;
        }

        nguesses++;
    }

    cout << "Congratulation You guess the Number " << actualnum << " in " << nguesses << " attempts" << endl;
}



int main()
{
    srand(time(0));               // srand(time(0))is used to update the random number value in 0s
    int num = (rand() % 100) + 1; // generate number random between 1 and 101

    int nguesses = 1;
    int guessno;

    cout << "Guess the number between 1 and 100" << endl;
    cin >> guessno;

    guessNumber(guessno, num, nguesses);

    return 0;
}
