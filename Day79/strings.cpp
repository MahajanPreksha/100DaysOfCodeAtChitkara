#include<iostream>
#include<string>
using namespace std;
int main(){
    //Definition
    //Method 1:
    string str = "Strings";
    //Method 2:
    string str1("Lecture");
    cout<<str<<" "<<str1<<endl;

    //Taking input from user
    //One word
    string S;
    cin>>S; //takes input till it gets space, tab or new line
    cout<<S<<endl;
    //More words
    string s;
    cin.ignore();
    getline(cin, s);
    cout<<s<<endl;
    
    //Check ASCII Values
    char ch = 'a';
    cout<<int(ch)<<endl;
    return 0;
}
