#include<iostream>
using namespace std;
int partition(int a[], int first, int last){
    int pivot = a[last];
    int i = first - 1;
    int j = first;
    for(; j<last; j++){
        if(a[j]<pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[last]);
    return i + 1;
}
void quickSort(int a[], int first, int last){
    if(first>=last){
        return;
    }
    int pi = partition(a, first, last);
    quickSort(a, first, pi-1);
    quickSort(a, pi+1, last);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    quickSort(a, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
