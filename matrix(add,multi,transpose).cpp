#include <iostream>

using namespace std;

int main()
{
   int a[5][5],b[5][5],c[5][5];
   int i,j,row1,col1,row2,col2,row3,col3;
   int ch;
   char ch1='y';
   while(ch1=='y')
   {
       cout<<"0.input matrices\n";
       cout<<"1.Addition\n";
       cout<<"2.multiplication\n";
       cout<<"3.Transpose\n";
       cout<<"4.Display\n";
       cout<<"enter the choice\n";
       cin>>ch;
       switch(ch)
       {
           case 0: cout<<"enter the number of rows and cols of first matrix";
                   cin>>row1>>col1;
                   cout<<"enter the number of rows and cols of second matrix";
                   cin>>row2>>col2;
                   cout<<"enter the element of first matrix\n";
                   for(i=0;i<row1;i++)
                   for(j=0;j<col1;j++)
                   cin>>a[i][j];
                   cout<<"enter the element of second matrix\n";
                   for(i=0;i<row2;i++)
                   for (j=0;j<col2;j++)
                   cin>>b[i][j];
                   break;
            case 1:if(row1==row2 && col1==col2)
            {
                   row3=row1;
                   col3=col1;
                   for(i=0;i<row1;i++)
                   for(j=0;j<col1;j++)
                   c[i][j]=a[i][j]+b[i][j];

            }
                  else
                  cout<<"matrices order are not equal and cannot be added";
                  break;

            case 2:if(col1==row2)
                   {
                       row3=row1;
                       col3=col2;
                       for(i=0;i<row3;i++)
                       {
                           for(j=0;j<col3;j++)
                           {
                               for(int k=0;k<col1;k++)
                               c[i][j]=c[i][j]+a[i][k]*b[k][j];
                            }
                       }
                   }
                   cout<<"matrices cannot be multiplied\n";
                   break;
            case 3:row3=col1;
                   col3=row1;
                   for(i=0;i<row3;i++)
                   for(j=0;j<col3;j++)
                   c[i][j]=a[i][j];
                   break;
           case 4: cout<<"a matrix is\n";
                   for(i=0;i<row1;i++)
                   {
                       for(j=0;j<col1;j++)
                        cout<<a[i][j]<<"\t";
                       cout<<endl;
                   }
                   cout<<"b matrix is\n";
                   for(i=0;i<row2;i++)
                   {
                       for(j=0;j<col2;j++)
                        cout<<b[i][j]<<"\t";
                        cout<<endl;
                   }
                   cout<<"c matrix is\n";
                   for(i=0;i<row3;i++)
                   {
                       for(j=0;j<col3;j++)
                        cout<<c[i][j]<<"\t";
                       cout<<endl;
                   }

            }
            cout<<"do you want to continue\n";
            cin>>ch1;
   }
   return 0;
}
