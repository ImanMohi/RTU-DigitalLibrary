#include <iostream>

using namespace std;

float Scale(float v)
{
    return (v + 10) / 6;
}

int main()
{
    float velocity;

    cout << "Enter knots velocity:";
    cin >> velocity;

    cout << "Beaufort scale velocity:" << Scale(velocity) << endl;
    return 0;
}