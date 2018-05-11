#include <iostream>
#define ll long long int
using namespace std;

int main(){

 ll upperLimit=10;
 int lowerLimit=1;
 int flag=0;
 int T=0;

cin >>T;
for (int k=0;k<T;k++)
{
    cin >>lowerLimit>>upperLimit;

 for(int i=lowerLimit;i<upperLimit;i++)
 {
//     if(i==1)
//     {
//         cout << "1 ";
//         continue;
//     }
     int j=2;
     while(i!=j)
     {
         if(i%j==0)
         {
             flag++;
                break;
         }
         j++;

     }
     if(flag==0)
     {
         cout << i<<endl;
     }
     flag=0;


 }
 cout << endl;


}
}
