#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> data;
    int a;
    cin >> a;
    int input;
    while (cin >> input)
    {
        data.push_back(input);
    }

    sort(data.begin(), data.end(), greater<int>());

    cout << data[a - 1] << endl;

    return 0;
}
