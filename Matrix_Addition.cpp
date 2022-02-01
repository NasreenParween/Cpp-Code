#include<iostream>
using namespace std;
int main() {
    int n1,n2;
    cout<<"Enter the size of the matrix \n";
    cin>>n1>>n2;
    int m1[n1][n2],m2[n1][n2],ans[n1][n2];

    cout<<"Enter the elements for m1 \n";
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            cin>>m1[i][j];
        }
    }
    cout<<"Enter the elements for m2 \n";
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            cin>>m2[i][j];
        }
    }
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
           ans[i][j]=0;
        }
    }
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            ans[i][j] = m1[i][j] + m2[i][j];
        }
    }
 cout<<"Addition of matrix are :\n";
    for(int i=0;i<n1;i++) {
        for(int j=0;j<n2;j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;

}
