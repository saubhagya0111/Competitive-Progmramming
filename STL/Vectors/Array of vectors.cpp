#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void print_vector(vector<int> v)
{
    int n = v.size();
    cout << "size of the vector=" << v.size() << endl;
    cout << "Elements of the vector are" << endl;
    //v.size()-->O(1)
    for (int i = 0; i < n; i++)
    {
        // cout << v[i].first << " " << v[i].second << " " << endl;
        cout << v[i] << " ";
    }
}
int main()
{
    //Array of vectors
    int N;
    cout << "Enter the number of arrays that you want to declare in an array" << endl;
    cin >> N;
    vector<int> v[N];
    //5 vectors of zero size have been created
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the size of the " << i << "th array that you want to create" << endl;
        cin >> n;
        cout << "Enter the elements of the array" << endl;
        for (int j = 0; j < n; j++)
        {
            int element;
            cin >> element;
            v[i].push_back(element);
            // cin >> v[i][j];
            //Using a nested loop to take the input of the array is not correct
        }
    }
    cout << "The elements of the array of vectors respectively are:-" << endl;
    for (int i = 0; i < N; ++i)
    {
        print_vector(v[i]);
    }
        return 0;
}
