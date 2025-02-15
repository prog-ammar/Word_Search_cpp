#include<iostream>
#include<string>
using namespace std;

const int col=3;
bool wordfound;

struct paired
{
	int x;
	int y;
};

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
			paired start;
			if(l==0)
			{
				start.x=row;
				start.y=i;
			}
			l++;
			if(l==len)
			{
				paired end;
				end.x=row;
				end.y=i;
				cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded horizontal left to right"<<endl;
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
		  	paired start;
		  	if(l==0)
			{
				start.x=row;
				start.y=i;
			}
		  	l++;
		  	if(l==len)
		  	{
		  		paired end;
				end.x=row;
				end.y=i;
		  		cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded vertical right to left"<<endl;
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
			paired start;
			if(l==0)
			{
               start.x=i;
			   start.y=column;
			}
			l++;
			if(l==len)
			{
				paired end;
				end.x=i;
				end.y=column;
				cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded vertical top to bottom"<<endl;
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
		  	paired start;
		  	if(l==0)
			{
               start.x=i;
			   start.y=column;
			}
		  	l++;
		  	if(l==len)
		  	{
		  		paired end;
				end.x=i;
				end.y=column;
		  		cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded vertical bottom to top"<<endl;
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
		    	paired start;
		    	if(l==0)
				{
                  start.x=i;
				  start.y=j;
				}
		  	    l++;
		  	    if(l==len)
		  	     {
		  	     	paired end;
					end.x=i;
					end.y=j;
		  		    cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded  first diagonal top to bottom"<<endl;
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
		    	paired start;
		    	if(l==0)
				{
                   start.x=i;
				   start.y=j;
				}
		  	    l++;
		  	    if(l==len)
		  	     {
		  	     	paired end;
					end.x=i;
					end.y=j;
		  		    cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded  first diagonal bottom to top"<<endl;
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
		    	paired start;
		    	if(l==0)
		  	    {
					start.x=i;
					start.y=j;
				}
		  	    l++;
		  	    if(l==len)
		  	    {
		  	     	paired end;
					end.x=i;
					end.y=j;
		  		    cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded second diagonal top to bottom"<<endl;
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
		    	paired start;
		    	if(l==0)
				{
					start.x=i;
					start.y=j;
				}
		  	    l++;
		  	    if(l==len)
		  	     {
		  	     	paired end;
					end.x=i;
					end.y=j;
		  		    cout<<str<<" at ("<<start.x<<","<<start.y<<") and end at ("<<end.x<<","<<end.y<<") Finded second diagonal bottom to top"<<endl;
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
	string str;
	do
	{
	  wordfound=false;
	  cout<<"Enter Word : ";
	  cin>>str;
	  horizontal(board,str);
	  vertical(board,str);
	  diagonal(board,str);
	  if(!wordfound)
	  {
	  	cout<<"String Not Found";
	  }	
	}while(str!="exit");
}
