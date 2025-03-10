//Random Enemy Generator //2025
#include <iostream>  //Input and output library
#include <vector>
#include <cstdlib>
using namespace std;

//Definition of the Enemy class
class Enemy {
    /*

Private: Can only be accessed from within the class.
Public: Can be accessed by anyone. */

private:
    string enemyName;
    int enemyHealth;
    int enemyShield;
    int enemyAttack;
    int enemySpeed;

    //List for possible enemy names
    vector<string> possibleEnemyNames = { "Goblin", "Orc", "Troll", "Bandit", "Skeleton", "Assassin" }; //Starts at position 0

public:

    //Constructor of the Enemy class, must have the same name as the class
    Enemy() {
        //Select a random name from the vector
        enemyName = possibleEnemyNames.at(1 + rand() % 5);
        enemyHealth = rand() % (150 - 50) + 50; // Generate a random number between 50 and 150.
        enemyShield = 100;
        enemyAttack = rand() % (200 - 80) + 80;
        enemySpeed = rand() % (15 - 5) + 5;
    }

    //Method to display the enemy's info on the screen
    void showEnemyInfo() const {
        cout << "Enemy generated " << endl;
        cout << "Enemy name: " << enemyName << endl;
        cout << "Enemy health: " << enemyHealth << endl;
        cout << "Enemy shield: " << enemyShield << endl;
        cout << "Enemy attack: " << enemyAttack << endl;
        cout << "Enemy speed: " << enemySpeed << endl;
    }

};

int main()
{
    std::srand(std::time(0));
    Enemy enemyX; //Generate the first enemy

    int enemyCount;

    cout << "Enter the number of enemies you want, and I will give you their stats: ";
    cin >> enemyCount;

    for (int i = enemyCount; i < enemyCount; i++)
    {
        enemyX.showEnemyInfo();
    }

    //Request the number of enemies from the user
    //Optimization = use the least code possible

    //Save the enemies for future use
    return 0;
}
