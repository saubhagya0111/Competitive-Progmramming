#include <bits/stdc++.h>
typedef long long ll;
#define endl "\n"
using namespace std;
void print_vector(vector<int> v)
{
    int n = v.size();
    cout << "size of the vector=" << v.size() << endl;
    cout << "Elements of the vector are" << endl;
    //time complexity of v.size()-->O(1)
    for (int i = 0; i < n; i++)
    {
        // cout << v[i].first << " " << v[i].second << " " << endl;
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    //vector of vectors
    int N;
    cout << "Enter the number of vectors that you want to declare in a vector" << endl;
    cin >> N;
    vector<vector<int>> v;
    //Hereafter referred as master vector consisting of all the constituent vectors
    //Using a temporary vector to insert the values into the master vector
    vector<int> v1;
    //Number of rows has also changed to dynamic in the given (master) vector
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the size of the " << i << "th vector that you want to create" << endl;
        cin >> n;
        cout << "Enter the elements of the vector" << endl;
        for (int j = 0; j < n; j++)
        {
            int element;
            cin >> element;
            v1.push_back(element);
        }
        //Inserting the vector in the (master) vector to form the necessary vector of vectors
        v.push_back(v1);
    }
    v[0].push_back(69);
    //Number 69 is added to the end of the first vector of the master vector
    //Size of the vector is also incremented
    cout << "The elements of the vector of vectors respectively are:-" << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        print_vector(v[i]);
    }
    return 0;
}
