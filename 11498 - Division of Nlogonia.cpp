// Must Accepted
#include <iostream>
#include <stdio.h>
using namespace std;

int K, N, M, a, b;

int main()
{
    for (;;)
    {
        scanf("%d", &K);
        if (K == 0)
            break;
        scanf("%d %d", &N, &M);
        for (int i = 0; i < K; i++)
        {
            scanf("%d %d", &a, &b);
            if (a == N || b == M)
                printf("divisa\n");
            else if (a > N && b > M)
                printf("NE\n");
            else if (a < N && b > M)
                printf("NO\n");
            else if (a > N && b < M)
                printf("SE\n");
            else
                printf("SO\n");
        }
    }
}

// for upderstanding
/*
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int time, n, m;
    cin >> time;

    while (time == 0)
    {
        if (time == 0)
        {
            break;
        }

        cin >> n >> m;
        for (int i = 0; i < time; i++)
        {

            if (x > n && y > m)
            {
                cout << "NE" << endl;
            }
            else if (x < n && y < m)
            {
                cout << "SO" << endl;
            }
            else if (x > n && y < m)
            {
                cout << "SE" << endl;
            }
            else if (x < n && y > m)
            {
                cout << "NO" << endl;
            }
            else if (x == n || y == m)
            {
                cout << "divisa" << endl;
            }
        }
    }
}

// Another submission:::
//
/*
*/
