#include <iostream>
using namespace std;

int main()
{
    int t;
    int *n;
    int **d;
    int *c;
    cin >> t;
    n = new int[t];
    d = new int *[t];
    c = new int[t];

    for (int i = 0; i < t; i++)
    {
        cin >> n[i];
        d[i] = new int[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            c[i] = 0;
            cin >> d[i][j];
            if (d[i][j] > 360)
            {
                while (d[i][j] > 360)
                {
                    d[i][j] -= 360;
                }
            }
        }
    }

    /*
        cout<<endl;
        for(int i = 0;i <t;i++)
        {
            cout<<n[i];
            for (int j = 0;j < n[i]; j++)
                cout<<d[i][j];
            cout<<endl;
        }
    */

    return 0;
}