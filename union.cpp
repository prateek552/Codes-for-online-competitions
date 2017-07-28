#include<iostream>
using namespace std;
int Find(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return Find(parent, parent[i]);
}

// Naive implementation of union()
void Union(int parent[], int x, int y)
{
    int xset = Find(parent, x);
    int yset = Find(parent, y);
    parent[xset] = yset;
}
int main()
{
    int parent[]={1,2,3,4,5,6,7,8,9,10,11,12};
    Union(parent,2, 10);
Union(parent,7, 5);
Union(parent,6, 1);
Union(parent,3, 4);
Union(parent,5, 11);
Union(parent,7, 8);
Union(parent,7, 3);
Union(parent,12, 2);
Union(parent,9, 6);
int a=Find(parent,6);
cout<<a;
}



