
#include<iostream>

using namespace std;

int main(){
int t=0;
cin>>t;
string sent;
int sameCount=0,sameCountb=0;
for(int i=0;i<t;i++)
{
    cin >> sent;

    for(int j=0;j<sent.length();j++)
    {
        if(sent[j]=='a')
        {
            sameCount++;
        }
        if(sent[j]=='b')
        {
            sameCountb++;
        }
    }

    if(sameCount==0 || sameCount==sent.length())
    {
        cout << 0<<endl;
    }
    else{
            if(sameCount>sameCountb)
            {
                cout << sameCountb<<endl;

            }
            else
            {
                cout << sameCount<<endl;

            }
        sameCount=0;
        sameCountb=0;

    }
    sent="";


}


}
