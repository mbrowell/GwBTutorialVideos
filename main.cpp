#include <iostream>

using namespace std;

int main()
{
    float playerDamage = 100.0f;
    float zombieHealth = 200.0f;

    zombieHealth = zombieHealth - playerDamage;

    cout << "The zombie has " << zombieHealth << " health left.\n";

    return 0;
}
