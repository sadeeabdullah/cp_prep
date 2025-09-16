#include <bits/stdc++.h>
using namespace std;
int main()
{
    // we are taking a 10*10 grid here when i get a X then the arrow has hitted on the location for pointing the outer level has point 1 and sequentcially the inner level has point 5
    // for denoting the level what we can do is when the i and j is:
        // (i == 0 or i == 9)  and (j == 0 or j == 9) then level is one
        // (i == 1 or i == 8) and (j == 1 or j == 8) level is 2
        // (i == 2 or i == 7) and (j == 2 or j == 7) level is 3
        // (i == 3 or i == 6 )and (j == 3 or j == 6) level is 4
        // (i == 4 or i == 5) and (j == 4 or j == 5) level is 5;

    int tc;
    cin >> tc;
    while (tc--)
    {
        int level1 = 0;
        int level2 = 0;
        int level3 = 0;
        int level4 = 0;
        int level5 = 0;
        char grid[10][10];
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'X')
                {
                    if ((i == 0 || i == 9) || (j == 0 || j == 9))
                    {
                        level1++;
                    }
                    else if ((i == 1 || i == 8) || (j == 1 || j == 8))
                    {
                        level2++;
                    }
                    else if ((i == 2 || i == 7) || (j == 2 || j == 7))
                    {
                        level3++;
                    }
                    else if ((i == 3 || i == 6) || (j == 3 || j == 6))
                    {
                        level4++;
                    }
                    else if ((i == 4 || i == 5) || (j == 4 || j == 5))
                    {
                        level5++;
                    }
                    
                }
        
            
                // test comment
            }
            int total = (level1 * 1) + (level2 * 2) + (level3 * 3) + (level4 * 4) + (level5 * 5);

            cout << total << endl;

            level1 = level2 =  level3 = level4 = level5 = 0;
    }
    return 0;
}