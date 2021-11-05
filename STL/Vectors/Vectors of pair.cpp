#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void print_vector(vector<pair<int, int>> v)
{
    int n = v.size();
    cout << "size of the vector=" << v.size() << endl;
    cout << "Elements of the vector are" << endl;
    //v.size()-->O(1)
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << " " << endl;
    }
}
int main()
{
    vector<pair<int, int>> v = {{1, 1}, {2, 3}};
    //Initializeing the vector statically
    vector<pair<int, int>> v1;
    int n;
    cout << "Enter the size of the vector" << endl;
    cin >> n;
    cout << "Enter two values corresponding to each value of the size of the vector as it is a vector of pairs " << endl;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v1.push_back(make_pair(x, y));
    }
    // print_vector(v);
    print_vector(v1);
    return 0;
}
