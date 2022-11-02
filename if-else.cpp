#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Please give the output"<<endl;
cin>>ch;
if(ch>='A'&& ch<='Z'){
    cout<<"This is upper case"<<endl;
}
    else if(ch>='a'&& ch<='z'){
        cout<<"This is lower case"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is Numeric"<<endl;
    }
}            
            
          
