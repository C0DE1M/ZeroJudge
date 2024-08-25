#include <iostream>
#include <vector>
using namespace std;

struct node
{
    int x, y;
};

struct z
{
    int f_x, f_y, depth;
};

vector<node> v;
int n;
int start_x, start_y, end_x, end_y;
char maze[100][100];
const int t_x[4] = {0, 1, 0, -1};
const int t_y[4] = {1, 0, -1, 0};
z arr[100][100] = {0};

bool check(int x, int y)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n))
    {
        if (maze[x][y] == '.' && !arr[x][y].depth)
        {
            return 1;
        }
    }
    return 0;
}

void bfs()
{
    int x, y;
    while (v.size() > 0)
    {
        x = v[0].x;
        y = v[0].y;
        v.erase(v.begin());
        for(int i = 0; i < 4; i++)
        {
            if (check(x + t_x[i], y + t_y[i]))
            {
                if (x + t_x[i] == end_x && y + t_y[i] == end_y)
                {
                    arr[x + t_x[i]][y + t_y[i]] = {x, y, arr[x][y].depth + 1};
                    return;
                }
                v.push_back ({x + t_x[i], y + t_y[i]});
                arr[x + t_x[i]][y + t_y[i]] = {x, y, arr[x][y].depth + 1};
            }
        }
    }
}

int main()
{
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> maze[i][j];
                if (maze[i][j] == '#')
                {
                    arr[i][j].depth = -1;
                }
                //cout << maze[i][j];
            }
        }
        start_x = 1;
        start_y = 1;
        end_x = n - 2;
        end_y = n - 2;
        if (check(start_x, start_y))
        {
            v.push_back({start_x, start_y});
        }
        arr[start_x][start_y].depth = 1;
        bfs();
        if (arr[end_x][end_y].depth)
        {
            printf("%d\n", arr[end_x][end_y].depth);
        }
        else
        {
            printf("No solution!\n");
        }
    }
}