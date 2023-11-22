#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    int count=0;
    int i=0;
    while(i<n){
        if(count==0){
            element=arr[i];
        }
        if(arr[i]==element){
            count++;
            i++;
        }
        else{
            count--;
            i++;
        }
    }
    int final_count=0;
    if(count>0){
        for(int i=0;i<n;i++){
            if(arr[i]==element){
                final_count++;
            }
        }
        if(final_count>n/2){
            cout<<element<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<-1<<endl;
    }
}
