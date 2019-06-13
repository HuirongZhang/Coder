#include<iostream>
#include<string>
using namespace std;
int main(){
    const string hexdights="0123456789ABCDEF";
    string result;
    string::size_type n;
    while(cin>>n){
        if(n<hexdights.size())
        result+=hexdights[n];
        cout<<result<<endl;
    }
    return 0;
}