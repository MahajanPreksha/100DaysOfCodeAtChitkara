#include<iostream>
using namespace std;
void firstAndLastOccurrence(string s, char ch, int *first, int *last){
    for(int i=0; i<s.size(); i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }
}
int main(){
    string s;
    char ch;
    cin>>s>>ch;
    int first = -1, last = -1;
    int *pf = &first, *pl = &last;
    firstAndLastOccurrence(s, ch, pf, pl);
    cout<<*pf<<" "<<*pl<<endl;
    cout<<first<<" "<<last<<endl;
    return 0;
}
