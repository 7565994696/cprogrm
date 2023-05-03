#include<iostream>
using namespace std;
main()
{ int n=5;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            if((j<n-i)||(j>n+i))
            cout<<"  ";
            else
            cout<<"* ";
            

            
        }cout<<endl;
    }
}
