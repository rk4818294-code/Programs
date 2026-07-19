#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    int arr[100][100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            totalSum += arr[i][j];
        }
    }

    cout << "Sum of all elements = " << totalSum << endl;
    return 0;
}
