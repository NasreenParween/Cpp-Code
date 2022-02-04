#include<iostream>
using namespace std;
int main()
{
    int arr[50][50];
    int count=0;
    int out=0;
    int in=0;
    int i,j;
    char ch;
    int v,e;

    cout<<"\n Enter the number of vertex : "<<endl;
    cin>>v;

    cout<<"\n Enter the edges for the graph : "<<endl;

    //creating loop to form adjecency matrix of the graph
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<"\n Enter the no. of edges ";
            //(char)(i + 97) displays a followed by b,c,d,so on...
            cout<<"from"<<" "<<(char)(i+97)<<" "<<"to vertex"<<" "<<(char)(j+97)<<"  : ";
            cin>>e;

            if(e>0)
            {
                arr[i][j]=e;
            }
            else
                arr[i][j]=0;
        }
    }

//loop to show the adjecency matrix
    cout<<"\n The matrix you entered is : "<<endl;
    for( i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

//this loop is check out out degree
    for( i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            if(arr[i][j]>0)
            {
                out=out+arr[i][j];
            }
        }
        cout<<"\n The out degree of the vertex is"<<(char)(i+97)<<out;
        out=0;
    }

//this loop is to check in-degree
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
        if(arr[j][i]>0)
            {
                in=in+arr[j][i];
            }
        }
        cout<<"\n The in degree of the vertex is"<<(char)(i+97)<<in;
        in=0;
    }
}

