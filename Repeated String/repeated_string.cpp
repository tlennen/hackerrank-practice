#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long count=0;
    long more = n%s.size();
    long less = round(n/s.size());
    for (long i = 0; i < s.size(); i++)
    {
      if(s[i]=='a')
      {
          count+=1;
      }
    }
    count=count*less;
    for (int i = 0; i < more; i++) {
      if (s[i] == 'a') {
        count += 1;
      }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
