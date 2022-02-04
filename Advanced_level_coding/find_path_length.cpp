#include<iostream>
using namespace std;

void multiplication(int a1[50][50],int v,int pl,int source,int dest)
{
    int a3[50][50],a2[50][50];

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            a2[i][j]=a1[i][j];
        }
    }
    if(pl==1)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                cout<< a1[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        for(int l=2;l<=pl;l++)
        {
            cout<<"\n The Matrix after multiplication is : ";
            for(int i=0;i<v;i++)
            {
                cout<<endl;
                for(int j=0;j<v;j++)
                {
                    a3[i][j]=0;
                    for(int k=0;k<v;k++)
                    {
                        a3[i][j]+=a1[i][k]*a2[k][j];
                    }
                    cout<< a3[i][j]<<" ";
                }
            }
            for(int i=0;i<v;i++)
            {
                for(int j=0;j<v;j++)
                {
                    a2[i][j]=a3[i][j];
                }
            }
            cout<<endl;
        }
    cout<<"\n Enter the path between "<<char(source)<<" and "<<char(dest)<<" ";
    source=source-97;
    dest=dest-97;
    cout<<a3[source][dest];
    }
}

int main()
{
    int pl;
    int a[50][50];
    int i,j;
    int ch;
    int v;
    int length;
    char source,dest;

    cout<<"\n Enter the vertices : ";
    cin>>v;
    cout<<endl;

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<"\n Enter the elements ";
            cout<<(char)(i+97)<<" "<<"to vertex"<<" "<<(char)(j+97)<<"  : ";
            cin>>a[i][j];
        }
    }
    cout<<"\n The matrix you entered is : "<<endl;
    for( i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n Enter the path length: ";
    cin>>pl;
    cout<<endl;

    cout<<"\n Please Enter the source : ";
    cin>>source;
    cout<<"\n Please Enter the destination : ";
    cin>>dest;

    multiplication(a,v,pl,source,dest);
    return 0;
}
