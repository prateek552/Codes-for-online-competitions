#include <iostream>

#include <cstdio>

#include <vector>

#include <algorithm>

using namespace std;

#define INF 1000000000



typedef pair<int ,int> ii;

typedef vector <int> vi;



vector <pair<int ,ii> > edges;

vi pset;



void init(int N)

{

    pset.assign(N, 0);

    for(int i = 0; i < N; i++)

    {

        pset[i] = i;

    }

}



int find_set(int i)

{

    if(pset[i] == i)

    {

        return pset[i];

    }

    return pset[i] = find_set(pset[i]);

}

bool issameset (int i, int j)

{

    return find_set(i) == find_set(j);

}

void Union(int i, int j)

{

    pset[find_set(i)] = find_set(j);

}

int main()

{

for (int i=1;i<13;i++)
  init(i);
Union(2, 10);
Union(7, 5);
Union(6, 1);
Union(3, 4);
Union(5, 11);
Union(7, 8);
Union(7, 3);
Union(12, 2);
Union(9, 6);
cout<<(find_set(6));
cout<<(find_set(3));
cout<<(find_set(11));
cout<<(find_set(9));


}
