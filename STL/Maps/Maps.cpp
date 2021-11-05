#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Map is used to store the values corresponding to a particular key
    //Elements in the map are stored in the sorted order by default to store the keys in unsorted order can be used
    map<int, string> m;
    m = {{1, "abc"}, {69, "saubhagya"}, {45, "Moreover"}};
    m.insert(make_pair(70, "jam"));
    //Keys in the entire map are unique and duplicate values cannot be
    //Each insertion operation takes O(log N) time where n is the size of the map
    // for (auto i1 = m.begin(); i1 != m.end();i1++)
    // {
    //     cout << i1->first << " " << i1->second << " " << endl;
    // }
    // m[5];
    //Total time complexity O(N logN)
    //Insertion's time complexity generally depends on the type of key being used for the  
    for (auto &pr : m)
    {
        //Acessing the element takes O(log N) time
        cout << pr.first << " " << pr.second << endl;
    }
    auto i2 = m.find(5);
    if (i2 == m.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << i2->first << " " << i2->second << endl;
    }
    auto i3 = m.erase(3);
    //3 has been deleted from the array
    auto i4 = m.find(69);
    //The entire pair of the values present pointed by i4
    if (i4 != m.end())
    {
        //If the given element is not found in the map it gives a segmentation fault as the iterator points to the m.end() position
        m.erase(i4);
    }
    //m.clear() function is used to clear the entire map
}
