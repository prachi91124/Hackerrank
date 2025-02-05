#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string ans;
    if (s.find("PM") != string::npos)
    {
        int t = stoi(s.substr(0, 2));
        if (t != 12)
        {
            t += 12;
        }
        ans.append(to_string(t));
        ans.append(":");
        ans.append(s.substr(3, 5));
    }
    else
    {

        int t = stoi(s.substr(0, 2));
        if (t == 12)
        {
            t = 0;
        }
        ans.append("0");
        ans.append(to_string(t));
        ans.append(":");
        ans.append(s.substr(3, 5));
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}