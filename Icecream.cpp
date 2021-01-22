#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>arr, int money) 
{
    int n = arr.size();
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == money) 
            {
                cout << i + 1 << " " << j + 1 << endl;
                break;
            }
        }
    }
}

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, money;
        cin >> money >> n;

        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        solve(arr, n);
    }
    return 0;
}