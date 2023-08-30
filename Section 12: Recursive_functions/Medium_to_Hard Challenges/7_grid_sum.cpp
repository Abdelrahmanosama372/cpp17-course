#include <iostream>

using namespace std;


int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS);

int main()
{
    int grid[100][100];
    int rows,cols;
    cin >> rows >> cols;

    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            cin >> grid[i][j];

    cout << path_sum(grid,0,0,rows,cols) << endl;
    return 0;
}

int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)
{
    static int di[] = {1,0,1};
    static int dj[] = {0,1,1};
    int maxi,idx{0};
    maxi = grid[row+di[0]][col+dj[0]];

    if(row == ROWS-1 && col == COLS-1)
        return grid[0][0];
  
    for(int i=1; i<3; i++)
    {
        if(maxi <  grid[row+di[i]][col+dj[i]] && row+di[i] < ROWS && col+dj[i] < COLS )
            maxi = grid[row+di[i]][col+dj[i]] , idx = i;
    }

    return maxi + path_sum(grid,row+di[idx],col+dj[idx],ROWS,COLS);
}