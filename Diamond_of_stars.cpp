/*Diamond of stars
if we have input 5 then pattern =
      *
     ***
    *****
     ***
      *    */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n/2+1; i++){
        for(int j=1; j<=n/2-i+1; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<< endl;
    }
    for(int i=n/2; i>=1; i--){
        for(int j=2; j<=n-1-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<< endl;
    }
}       