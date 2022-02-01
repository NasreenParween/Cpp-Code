#include<iostream>

using namespace std ;
//que 6

void print24(int &d , int &m, int &y);
bool valid (int &d , int &m , int & y);
void corrected (int & d , int & m , int & y);

int main()
{
    int day , month , year ;
cout<<"Enter Date between 1/1//2000 to 30/12//2014 in format <D M Y>" << endl ;
cin>>day>>month>>year ;

cout<<"Date Entered : ";
print24(day ,month , year);
cout<<endl ;

if(valid( day , month , year))
{
    cout<<"You Entered Valid Date :";
    print24(day ,month , year);

}
else
{
    cout<<endl<<"You Entered inValid Date ! "<<endl;
    cout<<"Corrected Date is : ";
corrected (day , month , year);

}


}

void print24(int &d , int &m , int & y)
{

cout<<d<<"/"<<m<<"/"<<y;
}

bool valid (int &d , int &m , int & y)
{
if (d<=30 && d >=1 && m <=12 && m>=1 && y>=2000 && y<=2015)
return true ;
else
return false ;
}


void corrected (int &d , int &m , int  &y)
{

 if(d<1)
    {


    d=1 ;
    if(m<1)
    {
        m=1;
        if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
        else
        {
            y=y ;
            print24(d ,m , y);
        }
    }

    else if(m>12)
    {
        m=12 ;
            if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
            else
        {
            y=y ;
            print24(d ,m , y);
        }

    }

    else
    {
        m=m ;

            if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
            else
        {
            y=y ;
            print24(d ,m , y);
        }

    }

    }

///////////////////////////////////////////////////////////////////////////////////////

     else if(d>30)

    {


    d=30 ;
    if(m<1)
    {
        m=1;
        if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
        else
        {
            y=y ;
            print24(d ,m , y);
        }
    }

    else if(m>12)
    {
        m=12 ;
            if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
            else
        {
            y=y ;
            print24(d ,m , y);
        }

    }

    else
    {
        m=m ;

            if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
            else
        {
            y=y ;
            print24(d ,m , y);
        }

    }

    }
///////////////////////////////////////////////////////////////////////////////////
    else
    {
        d=d ;


    if(m<1)
    {
        m=1;
        if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
        else
        {
            y=y ;
            print24(d ,m , y);
        }
    }

    else if(m>12)
    {
        m=12 ;
            if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
            else
        {
            y=y ;
            print24(d ,m , y);
        }

    }

    else
    {
        m=m ;

            if(y<2000)
        {
            y=2000;
            print24(d ,m , y);
        }

        else if(y>2015)
        {
            y=2015 ;
            print24(d ,m , y);
        }
            else
        {
            y=y ;
            print24(d ,m , y);
        }

    }

    }




    }
