#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>a)
{
    for(int i;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    
}
int getindexofminelement(vector<int>a,int i)
{g
    int min_index=i;
    for(;i<a.size();i++)
    {
        if(a[i]<a[min_index])
        {
            min_index=i;
        }
    }
    return min_index;
}
void sorting(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        int j=getindexofminelement(a,i);
        swap(a[i],a[j]);
        //cout<<" i : "<<i<<"vector : "
       
    }
}
int main()
{
    vector<int>a={6,1,2,3,4,6,1};
    
    sorting(a);
    cout<<"sorted vector :  ";
    printvector(a);
    return 0;
}
