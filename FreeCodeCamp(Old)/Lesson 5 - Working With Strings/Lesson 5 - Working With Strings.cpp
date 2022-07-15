#include <iostream>

using namespace std;

int main()
{
    cout << "First line\n";
    cout << "Second line\n";

    string phrase = "Third line";
    string phrasesubstr;

    cout << phrase.length() << endl;
    phrase[0] = 'P';
    cout << phrase << endl;

    cout << phrase.find("line", 0);

    phrasesubstr = phrase.substr(4, 5);
    cout << phrasesubstr << endl;

    return 0;
}
