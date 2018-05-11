#include <iostream>
using namespace std;

int main(){

    string s,s2;
    cin >>s;//>>s2;


    char  arr[21][21];
    char  arr2[21][21];

    for(int i=0;i<21;i++)
    {
        for(int j=0;j<21;j++)
        {
            arr[i][j]='.';
            arr2[i][j]='.';
        }
    }


    int currI=11,currJ=0,facingDirection=1;//1 for right 2 for left 3 for up 4 for down
for(int i=0;i<s.length();i++)
{
    if(facingDirection==1)
    {
        if(s[i]=='W')
        {
            arr[currI][currJ]='W';
            currJ++;
        }
        else if(s[i]=='L')
        {
            arr[currI][currJ]='L';
            currI--;
            facingDirection=3;
        }
        else if(s[i]=='R')
        {
            arr[currI][currJ]='R';
            currI++;
            facingDirection=4;
        }
    }
    else if(facingDirection==2)
    {
        if(s[i]=='W')
        {
            arr[currI][currJ]='W';
            currJ--;
        }
        else if(s[i]=='L')
        {
            arr[currI][currJ]='L';
            currI++;
            facingDirection=4;
        }
        else if(s[i]=='R')
        {
            arr[currI][currJ]='R';
            currI--;
            facingDirection=3;
        }
    }

    else if(facingDirection==3)
    {
        if(s[i]=='W')
        {
            arr[currI][currJ]='W';
            currI--;
        }
        else if(s[i]=='L')
        {
            arr[currI][currJ]='L';
            currJ--;
            facingDirection=2;
        }
        else if(s[i]=='R')
        {
            arr[currI][currJ]='R';
            currJ++;
            facingDirection=1;
        }
    }
    else if(facingDirection==4)
    {
        if(s[i]=='W')
        {
            arr[currI][currJ]='W';
            currI++;
        }
        else if(s[i]=='L')
        {
            arr[currI][currJ]='L';
            currJ++;
            facingDirection=1;
        }
        else if(s[i]=='R')
        {
            arr[currI][currJ]='R';
            currJ--;
            facingDirection=2;
        }
    }
}


if(facingDirection==1)
{
    facingDirection=2;
}
else if(facingDirection=2)
{
    facingDirection=1;
}
else if(facingDirection=3)
{
    facingDirection=4;
}
else if(facingDirection=4)
{
    facingDirection=3;
}

for(int i=0;i<s.length();i++)
{
    if(facingDirection==1)
    {
        if(s2[i]=='W')
        {
            arr2[currI][currJ]='W';
            currJ++;
        }
        else if(s2[i]=='L')
        {
            arr2[currI][currJ]='L';
            currI--;
            facingDirection=3;
        }
        else if(s2[i]=='R')
        {
            arr2[currI][currJ]='R';
            currI++;
            facingDirection=4;
        }
    }
    else if(facingDirection==2)
    {
        if(s[i]=='W')
        {
            arr2[currI][currJ]='W';
            currJ--;
        }
        else if(s2[i]=='L')
        {
            arr2[currI][currJ]='L';
            currI++;
            facingDirection=4;
        }
        else if(s2[i]=='R')
        {
            arr2[currI][currJ]='R';
            currI--;
            facingDirection=3;
        }
    }

    else if(facingDirection==3)
    {
        if(s2[i]=='W')
        {
            arr2[currI][currJ]='W';
            currI--;
        }
        else if(s2[i]=='L')
        {
            arr2[currI][currJ]='L';
            currJ--;
            facingDirection=2;
        }
        else if(s2[i]=='R')
        {
            arr2[currI][currJ]='R';
            currJ++;
            facingDirection=1;
        }
    }
    else if(facingDirection==4)
    {
        if(s2[i]=='W')
        {
            arr2[currI][currJ]='W';
            currI++;
        }
        else if(s2[i]=='L')
        {
            arr2[currI][currJ]='L';
            currJ++;
            facingDirection=1;
        }
        else if(s2[i]=='R')
        {
            arr2[currI][currJ]='R';
            currJ--;
            facingDirection=2;
        }
    }
}






for(int i=0;i<21;i++)
{
    for(int j=0;j<21;j++)
    {
        cout << arr[i][j]<<" ";
    }
    cout<< endl;
}
cout<<endl;

for(int i=0;i<21;i++)
{
    for(int j=0;j<21;j++)
    {
        cout << arr2[i][j]<<" ";
    }
    cout<< endl;
}



}
