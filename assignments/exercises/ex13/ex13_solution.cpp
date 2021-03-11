#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

struct Player {
    std::string fullName;
    int jerseyNumber;
    int goalsMade;
};

int getJerseyNumber();
int getGoals();
Player getPlayerData();
void displayTable(const std::vector<Player>& players);

int main() {
    std::vector<Player> players;

    do {
        players.push_back(getPlayerData());
        std::cout << std::endl;
    }
    while( players.back().fullName != "zzz" );
    players.pop_back();

    displayTable(players);

    return 0;
}

Player getPlayerData() {
    Player newPlayer;
    std::cout << "Enter player's first name (zzz to end): "; 
    std::cin >> newPlayer.fullName; 
    if( newPlayer.fullName != "zzz" ) {
        std::string lastName;
        std::cout << "Enter player's last name: ";
        std::cin >> lastName;
        newPlayer.fullName = lastName + ", " + newPlayer.fullName;

        newPlayer.jerseyNumber = getJerseyNumber();

        newPlayer.goalsMade = getGoals();        
    }

    return newPlayer;
}

int getJerseyNumber() {
    int number;
    std::cout << "Enter player's jersey number: ";
    std::cin >> number;
    if( number < 0 || number > 99 )
        number = getJerseyNumber();
    return number;
}

int getGoals() {
    int number;
    std::cout << "Enter number of goals made by player: ";
    std::cin >> number;
    if( number < 0 )
        number = getGoals();
    return number;
}

void displayTable(const std::vector<Player>& players) {
    int totalGoals = 0;
    std::cout << std::left << std::setw(20) << "Player Name"
              << std::right << std::setw(15) << "Jersey Number"
              << std::setw(7)  << "Goals"
              << std::endl << "------------------------------------------\n";
    for( Player player : players ) {
        std::cout << std::left << std::setw(20) << player.fullName
                  << std::right << std::setw(15) << player.jerseyNumber
                  << std::setw(7)  << player.goalsMade
                  << std::endl;
        totalGoals += player.goalsMade;
    }

    std::cout << std::endl << "Total Goals: " << totalGoals << std::endl;
}