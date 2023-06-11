#include<iostream>
using namespace std;
int main(){
    //Declaration of an array
    //Method 1
    int array[] = {1,2,3,4,5};
    //Method 2
    int a[5] = {1,2,3,4,5};
    //Size of Array
    cout<<sizeof(array)<<endl;
    cout<<sizeof(array)/sizeof(array[0])<<endl;
    //Traversing in Array
    //for loop
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++){
        cout<<array[i]<<endl;
    }
    //for each loop
    for(int ele:array){
        cout<<ele<<endl;
    }
    //while loop
    int i = 0;
    while(i<size){
        cout<<array[i]<<endl;
        i++;
    }
    //Input in array
    //for loop
    char vowels[5];
    for(int j=0; j<5; j++){
        cin>>vowels[i];
    }
    //for each loop
    for(char &ele:vowels){
        cin>>ele;
    }
    return 0;
}