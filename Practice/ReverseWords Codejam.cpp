#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int N;
    ifstream inp;
    ofstream out;
    inp.open("reversewordslarge.in");
    out.open("Reverse-Words-Output.txt");
    string str;
    inp >> N;
    inp.ignore();
for(int k=0;k<N;k++)
{
    int space=0;
    getline(inp,str);
    int last= str.size();
    int wordEnd=str.size();
    out <<"Case #"<<k+1<<": ";
    for(int m=0;m<str.size();m++)
    {
        if(str[m]==' ')
            space=1;
    }
    while(last!=0 && space !=0)
    {

        last--;
        int lastBackup=last;
        if(str[lastBackup]==' ')
        {
            lastBackup++;
            while(lastBackup!=wordEnd)
            {
                out<< str[lastBackup];
                lastBackup++;
            }
            if(space==1)
            out <<" ";
            wordEnd=last;
            lastBackup=last;

        }

    }
    int i=0;
    while(str[i]!=' ' && i!=str.size())
    {

         out << str[i];

        i++;

    }
    out <<endl;
    cout << space;
    space=0;
}

}
