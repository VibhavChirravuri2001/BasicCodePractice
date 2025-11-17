#include <bits/stdc++.h>

using namespace std;

vector<int> BuildPrefixes(int n, vector<int>& a){
    vector<int>ans;
    int sum=0;
    for(auto i=0;i<n;i++){
        sum+=a[i];
        ans.push_back(sum);
    }
    
    
    return ans;
}

int rangeSum(vector<int> &a , int l, int r,int n){
    if(l==0){
        return a[r];
    }
    
    return (a[r]-a[l-1]);
}



int main()
{
    int n;
    cin>>n;
    vector<int>a;
    
    for(auto i=0;i<n;i++){
        int ins;
        cin>>ins;
        a.push_back(ins);
    }
    
    vector<int> prefixes=BuildPrefixes(n,a);
    
    for(auto i=0;i<prefixes.size();i++){
        cout<<prefixes[i]<<" ";
    }
    cout<<endl;
    
    int q;
    cin>>q;
    
    for(auto i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        int ans=rangeSum(prefixes,l,r,n);
        
        cout<<ans<<endl;
    }

    return 0;
}
