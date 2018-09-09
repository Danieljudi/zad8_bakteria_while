#include <iostream>

using namespace std;

int bakterie=1;
int godziny=0;
int main()
{
    while (bakterie<=1000000000)
    {
        godziny++;
        bakterie=bakterie*2;

    }
    cout << "W godzinie "<<godziny<<" populacja jest rowna:"<<bakterie << endl;
    return 0;
}
