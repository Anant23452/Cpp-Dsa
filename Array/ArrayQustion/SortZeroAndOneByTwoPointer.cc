#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (v[i] == 0)
            i++;
        if (v[j] == 1)
            j--;
      else if (v[i] == 1 && v[j] == 0)
        {
            // swap(v[i],v[j]);
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}