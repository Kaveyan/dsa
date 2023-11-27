#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-1;j++){
            cout<<' ';
        }
        for(int k=0;k<=i;k++){
            cout<<"#";
        }
        cout<<endl;
    }
    
}