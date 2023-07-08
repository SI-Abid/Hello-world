#include <bits/stdc++.h>
using namespace std;

void drive(int n)
{
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }
    set<int> s;
    do
    {
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            for (int j = 0; j <= i; j++)
            {
                x += a[j];
            }
            s.insert(x % n);
        }
        if (s.size() == n and *s.begin() == 0)
        {
            cout << n << " => ";
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << "\n";
            break;
        }
        s.clear();
    } while (next_permutation(a.begin(), a.end()));
}

signed main()
{
    {
        clock_t tStart = clock();

        for (int i = 1; i <= 10; i++)
        {
            drive(i);
        }

        clock_t tEnd = clock();
        double time = (tEnd - tStart) / (double)CLOCKS_PER_SEC;
        printf("Time taken: %.10lf seconds\n", time);
    }

    return 0;
}