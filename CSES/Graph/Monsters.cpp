#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
        }
    }

    auto isvalid = [&](int i, int j)
    {
        return i >= 0 && i < n && j >= 0 && j < m && s[i][j] != '#';
    };

    queue<array<int, 3>> q;
    vector<vector<int>> time(n, vector<int>(m, LLONG_MAX));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'M')
            {
                q.push({i, j, 0});
                time[i][j] = 0;
            }
        }
    }

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    char symbol[] = {'D', 'R', 'U', 'L'};

    while (!q.empty())
    {
        array<int, 3> front = q.front();
        int i = front[0], j = front[1], t = front[2];
        q.pop();
        if(t>time[i][j]){
            continue;
        }
        for (int di = 0; di < 4; di++)
        {
            int x_new = i + dx[di];
            int y_new = j + dy[di];
            if (isvalid(x_new, y_new) && (t + 1) < time[x_new][y_new])
            {
                time[x_new][y_new] = t + 1;
                q.push({x_new, y_new, t + 1});
            }
        }
    }

    vector<vector<int>> dir(n, vector<int>(m, -1));
    vector<vector<int>> time2(n, vector<int>(m, INT_MAX));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'A')
            {
                q.push({i, j, 0});
                dir[i][j] = -2;
                time2[i][j] = 0;
            }
        }
    }

    while (!q.empty())
    {
        array<int, 3> front = q.front();
        int i = front[0], j = front[1], t = front[2];
        q.pop();
        for (int di = 0; di < 4; di++)
        {
            int x_new = i + dx[di];
            int y_new = j + dy[di];
            if (isvalid(x_new, y_new) && (t + 1) <time[x_new][y_new] && dir[x_new][y_new] == -1 && (t + 1) < time2[x_new][y_new])
            {
                q.push({x_new, y_new, t + 1});
                dir[x_new][y_new] = di;
                time2[x_new][y_new] = t + 1;
            }
        }
    }

    string path;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && time2[i][j] < time[i][j])
            {
                if (dir[i][j] != -1)
                {
    
                    while (s[i][j] != 'A')
                    {
                        path += symbol[dir[i][j]];
                        int d = dir[i][j];
                        i -= dx[d];
                        j -= dy[d];
                    }
                    reverse(path.begin(), path.end());
                    cout << "YES" << endl;
                    cout << path.size() << endl;
                    cout << path << endl;
                    return 0;
                }
            }
        }
        if (found){
            break;
        }
    }
    cout << "NO" << endl;
    

    return 0;
}
