#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerName = "Mike";

    cout << "Your name is " << playerName << endl;
    cout << "Your name is " << playerName.length() << " letters long.\n";

    playerName = "Fred";

    cout << "Your name is " << playerName << endl;

    return 0;
}
