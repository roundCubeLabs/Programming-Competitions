#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int N=0,C=0,I=0;
    int *P;
    ifstream inp;
    ofstream out;
    inp.open("StoreInpSmall.in");
    out.open("Store-Credit-Output.txt");

    inp >>N;
for(int k=0;k<N;k++)
{

    inp >>C;
    inp >>I;

    P=new int[I];
    for(int i=0;i<I;i++)
    inp >>P[i];

    for(int i=0;i<I;i++)
    {
        int firstNum=P[i];
        int j=0;
        for(j=i+1;j<I;j++)
        {
            if(firstNum+P[j]==C)
            {
                break;
            }
        }
            if(firstNum+P[j]==C)
            {
                out <<"Case #"<<k+1<<": "<< i+1<<" "<<j+1<<endl;
                break;
            }
    }
}


}

