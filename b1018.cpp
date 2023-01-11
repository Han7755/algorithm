#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int width, height;
    cin >> height >> width;
    int allBoard[height][width] = {-1};
    int whiteBoard[8][8]{0};
    int blackBoard[8][8]{1};
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
        {
            if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
                blackBoard[i][j] = 1;
            else
                whiteBoard[i][j] = 1;
        }
    for (int i = 0; i < height; i++)
    {
        string color;
        cin >> color;
        for (int j = 0; j < width; j++)
        {

            if (color[j] == 'B')
            {
                allBoard[i][j] = 1;
            }
            else
            {
                allBoard[i][j] = 0;
            }
        }
    }
    vector<int> results;
    for (int i = 0; i + 8 <= height; i++)
    {
        for (int j = 0; j + 8 <= width; j++)
        {
            int **board = new int *[8];
            for (int k = 0; k < 8; k++)
                board[k] = new int[8]{-1};
            for (int x = 0; x < 8; x++)
                for (int y = 0; y < 8; y++)
                    board[x][y] = allBoard[i + x][j + y];
            int cntWhite = 0;
            int cntBlack = 0;
            for (int k = 0; k < 8; k++)
            {
                for (int l = 0; l < 8; l++)
                {
                    if (board[k][l] != whiteBoard[k][l])
                    {
                        cntWhite++;
                    }
                    if (board[k][l] != blackBoard[k][l])
                    {
                        cntBlack++;
                    }
                }
            }
            int smaller = cntWhite > cntBlack ? cntBlack : cntWhite;
            results.push_back(smaller);

            for (int k = 0; k < 8; k++)
                delete[] board[k];

            delete[] board;
        }
    }
    int min = results[min_element(results.begin(), results.end()) - results.begin()];
    cout << min << endl;
}
