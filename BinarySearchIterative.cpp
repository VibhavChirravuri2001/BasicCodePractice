#include <bits/stdc++.h>

using namespace std;


bool BinarySearch(int n, vector<int>& a, int element){
    int low=0;
    int high = n-1;
    
    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==element){
            return true;
        }
        else if(element < a[mid]){
            high = mid - 1;
        }
        else{
            low=mid+1;
        }
    }
    
    
    return false;
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
