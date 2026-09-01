#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int level = 1;

class Entity
{
private:
    string name;
    int health;
    int level;
    string type;

public:
    Entity& setName(const string& name)
    {
        this->name = name;
        return *this;
    }

    Entity& setHealth(int health)
    {
        this->health = health;
        return *this;
    }

    Entity& setLevel(int level)
    {
        this->level = level;
        return *this;
    }

    Entity& setType(const string& type)
    {
        this->type = type;
        return *this;
    }

    string getName() const
    {
        return name;
    }

    int getHealth() const
    {
        return health;
    }

    int getLevel() const
    {
        return level;
    }

    string getType() const
    {
        return type;
    }

    void displayInfo() const
    {
        cout << "Name   : " << name << endl;
        cout << "Health : " << health << endl;
        cout << "Level  : " << level << endl;
        cout << "Type   : " << type << endl;
        cout << "-----------------------------" << endl;
    }
};

namespace Physics
{
    double clamp(double val, double min, double max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}

namespace GameMath
{
    int clamp(int val, int min, int max)
    {
        if (val < min)
            return min;

        if (val > max)
            return max;

        return val;
    }

    double lerp(double a, double b, double t)
    {
        return a + (b - a) * t;
    }
}

namespace Engine
{
    namespace Audio
    {
        void playSound(string name)
        {
            cout << "Playing: " << name << endl;
        }
    }
}

int main()
{
    cout << "===== ENTITY INFORMATION =====" << endl;

    Entity player;

    player
        .setName("Aragorn")
        .setHealth(100)
        .setLevel(10)
        .setType("Player");

    Entity enemy;

    enemy
        .setName("Orc")
        .setHealth(60)
        .setLevel(5)
        .setType("Enemy");

    Entity item;

    item
        .setName("HealthPotion")
        .setHealth(0)
        .setLevel(1)
        .setType("Item");

    player.displayInfo();
    enemy.displayInfo();
    item.displayInfo();

    cout << "\n===== NAMESPACE FUNCTIONS =====" << endl;

    double velocity = 125.5;

    cout << "Physics Clamp : "
         << Physics::clamp(velocity, 0.0, 100.0)
         << endl;

    int health = 150;

    cout << "GameMath Clamp : "
         << GameMath::clamp(health, 0, 100)
         << endl;

    cout << "Physics Lerp : "
         << Physics::lerp(0.0, 100.0, 0.5)
         << endl;

    cout << "GameMath Lerp : "
         << GameMath::lerp(0.0, 100.0, 0.25)
         << endl;

    {
        using namespace Physics;

        cout << "Using Physics namespace locally : "
             << clamp(150.0, 0.0, 100.0)
             << endl;
    }

    cout << "\n===== SCOPE RESOLUTION =====" << endl;

    int level = 10;

    cout << "Local level  : "
         << level
         << endl;

    cout << "Global level : "
         << ::level
         << endl;

    cout << "\n===== AUDIO =====" << endl;

    Engine::Audio::playSound("sword_clash");

    int R, C;

    cout << "\nEnter number of rows: ";
    cin >> R;

    cout << "Enter number of columns: ";
    cin >> C;

    if (R <= 0 || C <= 0)
    {
        cout << "Invalid map size." << endl;
        return 1;
    }

    int** gameMap = new int*[R];

    for (int i = 0; i < R; i++)
    {
        gameMap[i] = new int[C];
    }

    srand(time(0));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            gameMap[i][j] = rand() % 5;
        }
    }

    cout << "\n===== GAME MAP ("
         << R << " x " << C
         << ") =====" << endl;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << gameMap[i][j] << " ";
        }

        cout << endl;
    }

    cout << "\nLegend:" << endl;
    cout << "0 = Grass" << endl;
    cout << "1 = Water" << endl;
    cout << "2 = Mountain" << endl;
    cout << "3 = Forest" << endl;
    cout << "4 = Dungeon" << endl;

    int grass = 0;
    int water = 0;
    int mountain = 0;
    int forest = 0;
    int dungeon = 0;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            switch (gameMap[i][j])
            {
                case 0:
                    grass++;
                    break;

                case 1:
                    water++;
                    break;

                case 2:
                    mountain++;
                    break;

                case 3:
                    forest++;
                    break;

                case 4:
                    dungeon++;
                    break;
            }
        }
    }

    cout << "\nTile Count:" << endl;

    cout << "Grass    : " << grass << endl;
    cout << "Water    : " << water << endl;
    cout << "Mountain : " << mountain << endl;
    cout << "Forest   : " << forest << endl;
    cout << "Dungeon  : " << dungeon << endl;

    for (int i = 0; i < R; i++)
    {
        delete[] gameMap[i];
    }

    delete[] gameMap;

    gameMap = nullptr;

    return 0;
}
