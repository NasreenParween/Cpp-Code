#include <iostream>
#include <iomanip>

using namespace std;
void getinput(int x[],int n)
{
    int i;
    cout<<"enter the elements of an array";
    for(i=0; i<n; i++)
        cin>>x[i];
}
void mergetwoorderedarray(int x[], int y[], int c[],int n, int m)

{
    int u,i;
    i=0;
    int j=0;
    int k=0;
    while (i<n&&j<m)
    {
        if(x[i]<=y[j])
        {
            c[k]=x[i];
            k++;
            i++;
        }
        else
        {
            c[k]=y[j];
                k++;
                j++;
        }
    }
        if(i<n)
        while(i<n)
        {
            c[k]=x[i];
            k++;
            i++;
        }
        if(j<m)
        while(j<m)
        {
            c[k]=y[j];
            k++;
            j++;
        }
    }
    void display(int a[],int n)
    {
        cout<<"\n merging ordered array";
        for(int t=0; t<=n; t++)
            cout<<setw(3)<<a[t];
    }

int main()
{
    int a[10],b[10],c[10];
    int n,m,u;
    cout<<"how many elements in array a";
    cin>>n;
    getinput(a,n);
    cout<<"how many element in array b";
    cin>>m;
    getinput(b,m);
    mergetwoorderedarray(a,b,c,n,m);
    u=m+n;
    display(c,u);
}


