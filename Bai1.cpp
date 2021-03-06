#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int col[n], row[n],col1[n],row1[n];
    for (int i = 0; i < n; i = i + 1)
    {
        cin >> row[i] >> col[i];
        col1[i] = col[i];
        row1[i] = row[i];
    }
    sort(row1, row1 + n);
    sort(col1, col1 + n);
    int count = 0;
    for (int i = 0; i < n - 1; i = i + 1)
    {
        if (col1[i] == col1[i + 1] || row1[i] == row1[i + 1])
        {
            count = count + 1;
        }
    }
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = i + 1; j < n; j = j + 1)
        {
            if (abs(col[i] - row[i]) == abs(col[j] - row[j])&&abs(col[i]-col[j])==abs(row[i]-row[j]))
            {
                count = count + 1;
            }
            
        }
    }
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = i + 1; j < n; j = j + 1)
        {
            if (abs(col[i] + row[i]) == abs(col[j] + row[j]))
            {
                count = count + 1;
            }
        }
    }
    if (count == 0)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
}