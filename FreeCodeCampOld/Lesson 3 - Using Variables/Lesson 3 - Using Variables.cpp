#include <iostream>

using namespace std;

int main()
{

    string CharacterName = "John";
    string CharacterGender = "man";
    int CharacterAge = 25;

    cout << "There is a " << CharacterGender << " named " << CharacterName << endl;
    cout << "He is " << CharacterAge << " years old" << endl;
    cout << "He likes the name " << CharacterName << endl;
    cout << "But he does not like being " << CharacterAge << endl;

    CharacterName = "Joe";
    CharacterAge = 30;


    return 0;
}
