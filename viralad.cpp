#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.

int viral(int n)
{
  if (n > 1) {
    return viral(n - 1) * 3 / 2;
  }
  return 2;
}

int viralAdvertising(int n) {
    
        int ans=0;
        for (int i=1;i<=n;i++)
        {
            ans = ans + viral(i);
        }

        return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

