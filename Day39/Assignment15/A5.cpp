#include<iostream>
using namespace std;
int fun(string s, char *first, char *last){
    *first = s[0];
    *last = s[s.size()-1];
    int count = 0;
    for(char &ch:s){
        if(ch=='t'){
            count++;
        }
    }
    return count;
}
int main(){
    string s;
    cin>>s;
    char first, last;
    int Count = fun(s, &first, &last);
    cout<<first<<" "<<last<<" "<<Count;
    return 0;
}