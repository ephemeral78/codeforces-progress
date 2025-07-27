#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int arr[a];
    for(int i=0; i<a; i++) {
        cin>>arr[i];
    }
    sort(arr, arr+a);
    if(arr[b-1]==arr[b]) {
        cout<<-1;
    }
    else cout<<arr[b];
}
