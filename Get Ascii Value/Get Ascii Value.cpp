#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

void SpaceLine();

int main()
{
    char keyEnter;
    int asciiValue;

    SpaceLine();

    cout << "Press a key you would like to know its AsciiValue" << endl;

    keyEnter = _getch();
    asciiValue = keyEnter;

    cout << "The Ascii Value for that key is: " << asciiValue << endl;

    SpaceLine();
}

void SpaceLine()
{
    cout << "--------------------------------------------------------\n";
}
