//Test Match Series

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int dr=0,in=0,en=0,i;
        int a[5];
        for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<5;i++)
        {
            if(a[i]==0)
            {
                dr=dr+1;
            }
            else if(a[i]==1)
            {
                in=in+1;
            }
            else
            {
                en=en+1;
            }
        }
        if(in>en)
        {
            cout<<"INDIA"<<endl;
        }
        else if(en>in)
        {
            cout<<"ENGLAND"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
    }
    return 0;
}