#include<iostream>
using namespace std;
class Relations
{
	private:
		int n;
		char A[50];
		int matrix[20][20];
	public:
		void EnterMat();
		void Setinput();
		void display();
		int reflexive();
		int transitive();
		int symmetric();
		int antisymmetric();

};

void Relations::Setinput()
{
	cout<<"ENTER THE SIZE OF THE SET: ";
	cin>>n;
	cout<<"ENTER THE ELEMENTS OF THE SET: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<endl;
}

void Relations::EnterMat()
{
	cout<<"ENTER THE INPUT IN FORM OF 1 AND O FOR THE ORDERED THAT EXISTS AND THAT NOT RESPECTIVELY"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"ORDERED PAIRS ARE :("<<A[i]<<","<<A[j]<<"): ";
			cin>>matrix[i][j];
		}
	}
}

void Relations::display()
{
	cout<<"MATRIX IS :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

int Relations::reflexive()
{
	int count=0;
	for (int i = 0; i <n; i++)
    {
    	for (int j = 0; j < n; j++)
    	{
    		if (i == j)
    		{
    		if(matrix[i][j]==1)
    			count=count+1;
			}
        }
    }
    if(count==n)
    return 1;
    else
    return 0;
}

int Relations::symmetric()
{
	int temp=1;
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if (matrix[i][j]==1&&matrix[j][i]!=1)
				temp=0;
			}
		}
		return temp;
		count=count+1;
}

int Relations::antisymmetric()
{
	int temp=1;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if (matrix[i][j]==1&&matrix[j][i]==1)
				temp=0;
			}
		}
	}
		return temp;
		count=count+1;
}

int Relations::transitive()
{
	int temp=1;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(matrix[i][j]==1&&matrix[j][k]==1&&matrix[i][k]==0)
					temp=0;
			}
		}
	}
	return temp;
	count=count+1;
}


int main()
{
	cout<<" THIS PROGRAM DETERMINES WHETHER A RELATION IS EQUIVALENCE OR PARTIAL ORDER "<<endl;
	Relations r;
	r.Setinput();
	r.EnterMat();
	r.display();
	bool b=r.reflexive();
	if(b==true)
	cout<<"RELATION IS REFLEXIVE"<<endl;
	else
	cout<<"RELATION IS NOT REFLEXIVE"<<endl;

	bool c=r.symmetric();
	if(c==true)
	cout<<"RELATION IS SYMMETRIC"<<endl;
	else
	cout<<"RELATION IS NOT SYMMETRIC"<<endl;

	bool d=r.antisymmetric();
	if(d==true)
	cout<<"RELATION IS ANTI SYMMETRIC"<<endl;
	else
	cout<<"RELATION IS NOT ANTI SYMMETRIC"<<endl;

	bool e=r.transitive();
	if(e==true)
	cout<<"RELATION IS TRANSITIVE"<<endl;
	else
	cout<<"RELATION IS TRANSITIVE"<<endl;

	if(b==true && c==true && e==true)
	cout<<"\nTHIS IS AN EQUIVALENCE RELTAION "<<endl;
	if(b==true && d==true && e==true)
	cout<<"\nTHIS IS A PARTIAL ORDER RELATION "<<endl;
	if(b!=true && c!=true && d!=true && e!=true)
	cout<<"\nTI IS NEITHER PARTIAL ORDER NOR EQUIVALENCE RELATION "<<endl;
	if(b==true && c==true && d==true && e==true)
	cout<<"\nTI IS BOTH PARTIAL ORDER AND EQUIVALENCE RELATION "<<endl;



	return 0;
}
