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
        int row=0;
        do 
        {
            multi[index][row] = multi[0][row] * multi[index][0];
            
            cout<< multi[index][row] << " | "; 

            row++;
        }
        while(row<12);
        cout<< endl;
    }




return 0;
}
