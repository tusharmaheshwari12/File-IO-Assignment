#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string line;
    ifstream file("file.txt");
    while (getline(file, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == 'a'|line[i]=='A')
                count++;
        }
    }
    cout << "The Number 'A' Occourence " << count << "\n";

    return 0;
}
