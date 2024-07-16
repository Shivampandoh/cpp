#include<bits/stdc++.h>
using namespace std;
void sort(){
    int arr[6]={44,5,67,12,89,45};
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            if(arr[i]<arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void search(){
    int arr[6]={44,5,67,12,89,45};
    int element = 12;
    for(int i=0;i<=5;i++){
        if(arr[i] ==  element){
            cout<<element<<" found at index "<<i<<endl;
        }

    }

}
int main(){
    search();
    sort();

    return 0;
}