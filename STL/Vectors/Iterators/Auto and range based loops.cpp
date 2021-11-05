#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Range based loops
    //The entire statement of a condition based loop can be shortened using a range based loop
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 7, 9, 8};
    //In the range based loops the value of the corresponding element is copied to the loop
    //If you want the copies try to pass the value by reference
    //This can be used for all the types of containers
    cout << "Printing the original values of the vector elements" << endl;
    for (int value : v)
    {
        cout << value << " ";
    }
    //Values are incremented by one each for all the members of the vector when this loop executes
    //Actual values are sent when the variable is passed by reference
    //If the parameter is passed by value NO change is observed in the members of the elements
    for (int &value : v)
    {
        value++;
        // cout << value << " ";
    }
    cout << endl;
    cout << "Printing the new values of the vector elements after incrementing them" << endl;
    for (auto &value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    //Auto keyword automatically determines the type of data type being used for the value assigned to the variable
    auto a1 = 4.5;
    //Assigns the data type of a1 as double
    auto i4 = v.begin();
    //Assigns the data type of i4 as vector<int>::iterator i1
    //It can be used to shorten the lengths of the variable names
    //This helps to shorten the loops and enhances the presentation of the loops
    return 0;
}
