#include <iostream>

using namespace std;
class Matrix1
{
    int a[5][5];
    int row,col;
    public:
    Matrix1()
    {
        row=col=0;
    }
    Matrix1(int i,int j)
    {
        row=i;
        col=j;
    }
    void getinput(int, int);
    void display ();
    Matrix1 add(Matrix1);
    Matrix1 multiply(Matrix1);
    Matrix1 transpose();
};
    void Matrix1 :: getinput(int i1, int j1)
    {
        int i,j;
        row=i1;
        col=j1;
        cout<<"Enter the elements matrix \n";
        for(i=0;i<row; i++)
            for(j=0; j<col; j++)
            cin>>a[i][j];
    }
    Matrix1 Matrix1::add(Matrix1 o2)
    {
        int i,j;
        Matrix1 o3;
        if(row==o2.row&&col==o2.col)
        {
            o3.row=row;
            o3.col=col;
            for(i=0;i<row; i++)
            for(j=0; j<col; j++)
            o3.a[i][j]=a[i][j]+o2.a[i][j];
        }
        else
        cout<<"Matrices order are not equal and cannot be addded"<<endl;
        return o3;

    }
    void Matrix1:: display()
    {
        int i,j;
        cout<<"Matrix is\n";
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
                cout<<a[i][j]<<"\t";
            cout<<endl;
        }
    }
    Matrix1 Matrix1::multiply(Matrix1 o2)
    {
        int i,j;
        Matrix1 o3;
        if(col==o2.row)
     {
            o3.row=row;
            o3.col=o2.col;
            for( i=0; i<o3.row; i++)
        {
            for(j=0; j<o3.row; i++)
            {
                o3.a[i][j]=0;
                for(int k=0; k<col; k++)
                    o3.a[i][j]=o3.a[i][j]+a[i][j]*o2.a[k][j];
            }
        }
     }
        else
        {
            cout<<"not multiply"<<endl;
        }
        return o3;
    }
    Matrix1 Matrix1:: transpose()
    {
        int i, j;
        Matrix1 o3;
        o3.row=col;
        o3.col=row;
        for(i=0;i<o3.row; i++)
            o3.a[i][j]=a[j][i];
        return o3;
    }
    int main()
    {
        Matrix1 o1(2,3),o2(2,3),o3;
        int row1, col1,row2,col2;
        int ch;
        char ch1='y';
        while(ch1=='y')
        {
            cout<<"0. Input matices\n";
            cout<<"1. Addition\n";
            cout<<"2. Multiplication\n";
            cout<<"3. Transpose\n";
            cout<<"4. Display\n";
            cout<<"enter the choice\n";
            cin>>ch;
            switch(ch)
            {
                case 0:cout<<"Enter the number of rows and column of first matrix" <<endl;
                      cin>>row1>>col1;
                      o1.getinput(row1,col1);
                      cout<<"Enter the number of rows and column of second matrix"<<endl;
                      cin>>row2>>col2;
                     o2.getinput(row2,col2);
                      break;
                case 1: o3= o1.add(o2);
                       break;
                case 2: o3=o1.multiply(o2);
                       break;
                case 3: o3=o1.transpose();
                      break;
                case 4:o1.display();
                       o2.display();
                       o3.display();
            }
            cout<<"do you want to continue\n";
            cin>>ch1;
        }
    }

