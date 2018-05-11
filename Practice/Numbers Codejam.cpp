#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main(){
    ifstream inp;
    ofstream out;
    inp.open("NumbersSmall.in");
    out.open("Numbers-Output.txt");
int n=100;
int t=0;
inp >>t;
for(int k=0;k<t;k++)
{

inp >>n;
float sum=0;
int sum1=0;

sum=3 +sqrt(5);
sum=pow(sum,n);
sum1= (int)sum%1000;
out <<"Case #"<<k+1<<": ";
if(sum1<10)
{
    out << "00"<<sum1<<endl;
}
else if(sum1<100)
{
    out <<"0"<<sum1<<endl;
}
else{
    out << sum1<<endl;

}
}
}
