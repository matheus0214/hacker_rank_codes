#include <vector>

using namespace std;
/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 * 1 2 3
 * 4 5 6
 * 7 8 9
 */

int diagonalDifference(vector<vector<int> > arr)
{
    int leftToRight = 0;
    int rightToLeft = 0;
    int result = 0;
    int getGreatherThan = arr[0].size();
    vector<vector<int> > newVector;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].size() > getGreatherThan)
            getGreatherThan = arr[i].size();
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i].size() == getGreatherThan)
            newVector.push_back(arr[i]);
    }

    for (int i = 0; i < newVector.size(); i++)
    {
        leftToRight += newVector[i][i];
        rightToLeft += newVector[i][newVector.size() - i - 1];
    }

    result = leftToRight - rightToLeft;

    return result < 0 ? result * -1 : result;
}
