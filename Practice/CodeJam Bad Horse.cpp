#include<iostream>

using namespace std;

int main(){
    int t=0;
 //   cin >>t;
    int m=0;
    cin >> m;
    string **arr;

    arr=new string*[m];

    for(int i=0;i<m;i++){

        arr[i]=new string[2];
    }

    for(int i=0;i<m;i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout <<endl;
    }

//string tbc;
//    for(int i=1;i<m;i++)
//    {
//        tbc=arr[i][0];
//        for(int j=i-1;j>=0;j--)
//        {
//            if(tbc==arr[j][0])
//            {
//                string temp;
//                temp=arr[j][0];
//                arr[j][0]=arr[j][1];
//                arr[j][1]=temp;
//
//            }
//        }
//
//    }
    string tbcA,tbcB;
    for(int i=0;i<m;i++)
    {
        tbcA=arr[i][0];
        tbcB=arr[i][1];
        for(int j=0;j<m;j++)
        {
            if(tbcB==arr[j][0] || tbcA==arr[j][1])
            {
                string temp;
                temp=arr[j][0];
                arr[j][0]=arr[j][1];
                arr[j][1]=temp;

            }
        }

    }
    cout << "After SWAP:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout <<endl;
    }
int flag=5;
for(int i=0;i<m;i++)
{
        tbcA=arr[i][0];
        tbcB=arr[i][1];
    for(int j=0;j<m;j++)
    {
        if(tbcB==arr[j][0] || tbcA==arr[j][1])
        {
                flag=1;
        }


    }
}
if(flag==1)
{
    cout << "no";
}
else
{
    cout << "yes";
}

}


