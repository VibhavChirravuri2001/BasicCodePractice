#include <bits/stdc++.h>

using namespace std;

void merge(vector<int>& a, int low, int mid, int high){
    vector<int> temp;
    int i=low,j=mid+1;
    
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    
    while(i<=mid){
        temp.push_back(a[i]);
        i++; 
    }
    while(j<=high){
        temp.push_back(a[j]);
        j++;
    }
    
    for(auto i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
}

void mergeSort(vector<int>& a, int low , int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

void mergeSortAlgo(vector<int>& a, int n){
    
    mergeSort(a,0,n-1);
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
    
    mergeSortAlgo(a,n);
    
    for(auto i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
