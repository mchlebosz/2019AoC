#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sum = 0;
    int temp;
    for (short i = 0; i < 100; i++)
    {
        cin >> temp;
        temp = temp / 3;
        temp = temp - 2;
        sum += temp;
    }

    cout << sum;

    return 0;
}
