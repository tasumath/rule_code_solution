#include<iostream>
#include<vector>
#include<cmath>
#include<stack>
#include<string>
using namespace std;

int q;
int querytype[100009];

int main(){
    cin>>q;
    stack<string> s;
    for(int i=1;i<=q;i++){
        cin>>querytype[i];

        if(querytype[i]==1){
            string t;
            cin>>t;
            s.push(t);
        }
        if(querytype[i]==2){
            string answer = s.top();
            cout<<answer<<endl;
        }
        if(querytype[i]==3) s.pop();
    }


}