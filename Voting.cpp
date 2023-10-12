#include <iostream>
using namespace std;

class Voting
{
private:
    int bjpVotes;
    int congressVotes;
    int aapVotes;

public:
    Voting() : bjpVotes(0), congressVotes(0), aapVotes(0) {}

    void conductVoting(int numVoters)
    {
        for (int i = 0; i < numVoters; ++i)
        {

            cout << "Voter " << i + 1 << ", please choose a party (1, 2, 3): ";

            int vote;
            cin >> vote;

            // if (vote == bjpVotes)
            // {
            //     bjpVotes++;
            //     break;
            // }
            // else if (vote == congressVotes)
            // {
            //     bjpVotes++;
            //     break;
            // }
            // else if (vote == aapVotes)
            // {
            //     bjpVotes++;
            //     break;
            // }
            // else
            // {
            //     cout << "Invalid party selection. \n";
            // }
            
            switch (vote)
            {
            case 1:
                bjpVotes++;
                break;
            case 2:
                bjpVotes++;
                break;
            case 3:
                bjpVotes++;
                break;
            default:
                std::cout << "Invalid party selection.\n";
            }
        }
    }

    void displayResults()
    {
        cout << "\nVoting Results:\n";
        cout << "BJP votes: " << bjpVotes << "\n";
        cout << "Congress votes: " << congressVotes << "\n";
        cout << "AAP votes: " << aapVotes << "\n";

        // if (bjpVotes > congressVotes && bjpVotes > aapVotes)
        // {
        //     std::cout << "BJP is the winner!\n";
        // }
        // else if (congressVotes > bjpVotes && congressVotes > aapVotes)
        // {
        //     std::cout << "Congress is the winner!\n";
        // }
        // else if (aapVotes > bjpVotes && aapVotes > congressVotes)
        // {
        //     std::cout << "AAP is the winner!\n";
        // }
        // else
        // {
        //     std::cout << "It's a tie!\n";
        // }
    }
};

int main()
{
    Voting voting;

    int numVoters;
    cout << "Enter the number of voters: ";
    cin >> numVoters;

    voting.conductVoting(numVoters);

    voting.displayResults();

    return 0;
}
