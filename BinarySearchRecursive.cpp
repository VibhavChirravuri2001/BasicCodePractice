#include <bits/stdc++.h>

using namespace std;


bool binarySearchHelper(int n, vector<int>& a, int high,int low, int element){
    if(low>high){
        return false;
    }
    
    int mid=(low+high)/2;
    if(a[mid]==element){
        return true;
    }
    else if(a[mid]>element){
        return binarySearchHelper(n,a,mid-1,low,element);
    }
    else{
        return binarySearchHelper(n,a,high,mid+1,element);
    }
    
    return false;
}

bool BinarySearch(int n, vector<int>& a, int element){
   int low=0;
   int high=n-1;
   
   return binarySearchHelper(n,a,high,low,element);
    
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
    
    int element;
    cin>>element;
    
    cout<<BinarySearch(n,a,element)<<endl;

    return 0;
}
