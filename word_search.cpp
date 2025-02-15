#include<iostream>
#include<string>
using namespace std;

const int col=3;
bool wordfound;

void horizontal(char board[][col],string str)
{
	int len=str.length();
	int l;
	for(int row=0;row<3;row++)
	{
		l=0;
	for(int i=0;i<3;i++)
	{
		if(str[l]==board[row][i])
		{
			int start;
			if(l==0)
		  	start=i;
			l++;
			if(l==len)
			{
				int end=i;
				cout<<str<<" at ("<<start<<","<<end<<") Finded horizontal left to right"<<endl;
				wordfound=true;
			}
		}
	}
    }
    for(int row=0;row<3;row++)
    {
	l=0;
	for(int i=2;i>=0;i--)
	{
		  if(str[l]==board[row][i])
		  {
		  	int start;
		  	if(l==0)
		  	start=i;
		  	l++;
		  	if(l==len)
		  	{
		  		int end=i;
		  		cout<<str<<" at ("<<start<<","<<end<<") Finded vertical right to left"<<endl;
				wordfound=true;
			  }
		  	
		  }
	}
   }
}

void vertical(char board[][col],string str)
{
	int len=str.length();
	int l;
	for(int column=0;column<3;column++)
	{
		l=0;
	for(int i=0;i<3;i++)
	{
		if(str[l]==board[i][column])
		{
			int start;
			if(l==0)
		  	start=i;
			l++;
			if(l==len)
			{
				int end=i;
				cout<<str<<" at ("<<start<<","<<end<<") Finded vertical top to bottom"<<endl;
				wordfound=true;
			}
		}
	}
    }
    for(int column=0;column<10;column++)
    {
	  l=0;
	for(int i=2;i>=0;i--)
	{
		  if(str[l]==board[i][column])
		  {
		  	int start;
		  	if(l==0)
		  	start=i;
		  	l++;
		  	if(l==len)
		  	{
		  		int end=i;
		  		cout<<str<<" at ("<<start<<","<<end<<") Finded vertical bottom to top"<<endl;
				wordfound=true;
			  }
		  	
		  }
	}
    }
}

void diagonal(char board[][col],string str)
{
	int len=str.length();
	int l=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j)
			{
				if(str[l]==board[i][j])
		    {
		    	int start;
		    	if(l==0)
		  	    start=i;
		  	    l++;
		  	    if(l==len)
		  	     {
		  	     	int end=i;
		  		    cout<<str<<" at ("<<start<<","<<end<<") Finded  first diagonal top to bottom"<<endl;
					wordfound=true;
			    }
		  	
		     }
			}
		 } 
	}
	l=0;
	for(int i=2;i>=0;i--)
	{
		for(int j=2;j>=0;j--)
		{
			if(i==j)
			{
				if(str[l]==board[i][j])
		    {
		    	int start;
		    	if(l==0)
		  	    start=i;
		  	    l++;
		  	    if(l==len)
		  	     {
		  	     	int end=i;
		  		    cout<<str<<" at ("<<start<<","<<end<<") Finded  first diagonal bottom to top"<<endl;
				    wordfound=true;
			    }
		  	
		     }
			}
		 } 
	}

	l=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==col-j-1)
			{
				if(str[l]==board[i][j])
		    {
		    	int start;
		    	if(l==0)
		  	    start=i;
		  	    l++;
		  	    if(l==len)
		  	    {
		  	     	int end=i;
		  		    cout<<str<<" at ("<<start<<","<<end<<") Finded second diagonal top to bottom"<<endl;
					wordfound=true;
			    }
		  	
		     }
			}
		 } 
	}

	l=0;
	for(int i=2;i>=0;i--)
	{
		for(int j=2;j>=0;j--)
		{
			if(i==col-j-1)
			{
				if(str[l]==board[i][j])
		    {
		    	int start;
		    	if(l==0)
		  	    start=i;
		  	    l++;
		  	    if(l==len)
		  	     {
		  	     	int end=i;
		  		    cout<<str<<" at ("<<start<<","<<end<<") Finded second diagonal bottom to top"<<endl;
					wordfound=true;
			    }
		    }
			}
		} 
	}
}

int main()
{
	char board[3][col];
	cout<<"Enter Characters : ";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>board[i][j];
		}
	}
	do
	{
	  wordfound=false;
	  string str;
	  cin.ignore();
	  cout<<"Enter Word : ";
	  getline(cin,str);
	  horizontal(board,str);
	  vertical(board,str);
	  diagonal(board,str);
	  if(!wordfound)
	  {
	  	cout<<"String Not Found";
	  }	
	}while(1);
}
