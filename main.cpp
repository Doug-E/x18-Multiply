#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector <vector <int> > multi;    
    multi.resize(12);
    for (int row=0; row<12; row++)
    {
    multi[row].resize(12);
    }
    for (int index=0; index<12; index++)
    {
       multi[index][0] = index+1;
       multi[0][index] = index+1;
    }
    for (int index=0; index<12; index++)
    {
        for (int row=0; row<12; row++) 
        {
            if(index<row) break;
            else
            {
                multi[index][row] = multi[0][row] * multi[index][0];       
                cout<< multi[index][row] << " | "; 
            }
        }
        cout<< endl;
    }
return 0;
}
