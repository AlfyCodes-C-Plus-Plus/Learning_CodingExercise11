#include <iostream>

using namespace std;

int main()
{

    const int minAge{16};
    int age;

    cout << "How old are you?";
    cin >> age;

    if (age >= minAge)
    {
        cout << "Yes - you can drive!";
    }
    else
    {
        cout << "Sorry, come back in " << minAge - age << " years";
    }

    return 0;
}