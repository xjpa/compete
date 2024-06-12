#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int p1 = s1.find('|');
    int p2 = s2.find('|');

    string result1 = s1.substr(0, p1) + s2.substr(0, p2);
    string result2 = s1.substr(p1 + 1) + s2.substr(p2 + 1);

    cout << result1 << " " << result2 << endl;

    return 0;
}
