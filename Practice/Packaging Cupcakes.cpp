#include <iostream>

using namespace std;

int main(){
    int t=0;
    cin >>t;
    int n=0;
    for(int i=0;i<t;i++)
    {
        cin >>n;
        if(n<=2)
        {
            cout << n<<endl;
        }
        else{
            cout <<(n/2)+1<<endl;
        }
    }
}
