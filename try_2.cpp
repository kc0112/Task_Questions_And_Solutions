#include<iostream>
using namespace std;

void subset(int lim,int pos,int sub[],int temp[],int n)
{
    if(pos>n)
    {
        cout<<"{";
        for(int i{0};i<lim;i++)
            cout<<sub[i];
        cout<<"},";
        return;
    }

    sub[lim]=temp[pos];
    subset(lim+1,pos+1,sub,temp,n);

    while(temp[pos]==temp[pos+1]&&pos+1<=n)
        {pos++;}

     subset(lim,pos+1,sub,temp,n);
}

int main()
{
    int temp[]{1,3,3,3},pos=0,lim=0;
   int n=sizeof(temp)/sizeof(temp[0]);
    int sub[n]{};
    subset(lim,pos,sub,temp,n-1);
}
