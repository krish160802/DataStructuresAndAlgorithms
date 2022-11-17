#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=6;
    int k=2;
    int nums[n]={1,2,3,1,2,1};
    unordered_map<int,int>umap;
    int cm = 0;
    for(int i=0;i<n;i++)
    {
           
      
        if(umap.count(nums[i]))
        {
            cout<<umap.count(nums[i])<<endl;
          
            int h=abs(umap[nums[i]]-i);
            cout<<i-umap[nums[i]]<<endl;
            if(h<=k)
            {
              cout<<"true"<<endl;
              break;
            }
        }
        
     
        umap[nums[i]]=i;
        //umap[1]=0..umap[2]=1..umap[3]=2..umap[1]=3
    }
    cout<<"false"<<endl;

}
