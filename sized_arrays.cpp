#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    vector<vector<int> > k;
    vector<vector<int> > indexes;

    std::cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        int val;
        std::cin >> val;
        vector<int> temp;

        temp.push_back(val);

        for (int j = 0; j < val; j++)
        {
            int g;
            std::cin >> g;
            temp.push_back(g);
        }

        k.push_back(temp);
    }

    for (int i = 0; i < q; i++)
    {
        int row, col;
        vector<int> tempVect;
        std::cin >> row >> col;

        tempVect.push_back(row);
        tempVect.push_back(col);

        indexes.push_back(tempVect);
    }

    std::cout << "-------------------" << std::endl;
    for (int i = 0; i < indexes.size(); i++)
    {
        std::cout << k[indexes[i][0]][indexes[i][1] + 1] << std::endl;
    }

    return 0;
}
