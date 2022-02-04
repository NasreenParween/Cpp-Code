#include<iostream>
using namespace std;
int ar[10][10];
int n;
void input(){
    cout<<"Enter number of vertex : ";
    cin>>n;
    cout<<"\n***Enter edges***\n";
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cout<<"Vetex "<<r+1<<" to "<<c+1<<" : ";
            cin>>ar[r][c];
        }
    }
}
void display(){
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            cout<<ar[r][c]<<" ";
        }
        cout<<"\n";
    }
}
void path(){
    int flag=0,count=0;
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(ar[r][c]==1){
                count+=1;
            }
        }
        if(count%3==0){
            flag+=1;
        }
        count=0;
    }
    if(flag==2)
        cout<<"\nIt forms an Euler path\n";
    else
        cout<<"\nNO PATH FORMED\n";
}
void circuit(){
    int flag=0,count=0;
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(ar[r][c]==1){
                count+=1;
            }
        }
        if(count%2==0){
            flag+=1;
        }
        count=0;
    }
    if(flag==n)
        cout<<"\nIt forms an Euler circuit\n";
    else
        cout<<"\nNO CIRCUIT FOUND!\n";
}
int main()
{
    input();
    cout<<"\n***Adjacency matrix is***\n\n";
    display();
    path();
    circuit();
    return 0;
}
