#include <iostream>
#include<vector>

using namespace std;

void saisir(vector<int>&t){
for(int i=0 ; i<5 ; i++){
    cin>>t[i];
}
}


void aff(vector<int>&t){
for(int i=0 ; i<5 ; i++){
    cout<<t[i];
}
}

int main()
{
vector<int>t(5);
saisir(t);
aff(t);
    return 0;
}
