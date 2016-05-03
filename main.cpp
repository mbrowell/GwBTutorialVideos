#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerName;
    int age;

    cout << "What is your name, Sir Knight?\n";
    cin >> playerName;
    cout << "Hello, Sir " << playerName << ".\n\n";

    cout << "How old are you?\n";
    cin >> age;

    if (age >= 100)
    {
        cout << "You are way to old to play.\n";

        return 0;
    }

    if (age == 69)
    {
        cout << "haha\n";
    }

    return 0;
}
