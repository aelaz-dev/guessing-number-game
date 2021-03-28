#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print_array(int array[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << "\t";
    }
    cout << "\n";
}

void play_game()
{
    int random = rand() % 251;
    cout << random << "\n";
    cout << "Guess the number (0 - 250) :\n";
    int guess;

    int guesses[251];
    int count_guess = 0;

    while (true)
    {
        cin >> guess;
        guesses[count_guess++] = guess;
        if (guess == random)
        {
            cout << "Yeaaaa You win\n";
            break;
        }
        else if (guess < random)
        {
            cout << "Too Low\n";
        }
        else
        {
            cout << "Too High\n";
        }
    }
    print_array(guesses, count_guess);
}

int main()
{

    srand(time(NULL));
    cout << "0.Quit\n1.Play Game\n";
    int play;
    cin >> play;
    switch (play)
    {
    case 0:
        cout << "Thanks for nothingr";
        break;

    case 1:
        play_game();
        break;
    }
}
