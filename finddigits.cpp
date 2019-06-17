#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int count=0;
    int x=n;
    while(x!=0)
    {
        cout<<"n="<<n<<" x="<<x<<" entering if"<<endl;
        if (x%10 == 0)
        {
            goto label1;
        }
        if (n% (x%10) == 0)
        {
            count++;
            cout<<"count="<<count<<endl;
        }
        label1: x=x/10;
        cout<<"n="<<n<<" x="<<x<<" exit"<<endl;
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
