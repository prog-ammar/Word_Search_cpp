#include<iostream>
#include<string>
using namespace std;

const int col=1000;
bool wordfound;

struct paired
{
	int x;
	int y;
};

void horizontal(char board[][col],string str,int nr,int nc)
{
	int len=str.length();
	int l;
	for(int row=0;row<nr;row++)
	{
		l=0;
	for(int i=0;i<nc;i++)
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
    for(int row=0;row<nr;row++)
    {
	l=0;
	for(int i=nc-1;i>=0;i--)
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

void vertical(char board[][col],string str,int nr,int nc)
{
	int len=str.length();
	int l;
	for(int column=0;column<nc;column++)
	{
		l=0;
	for(int i=0;i<nr;i++)
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
    for(int column=0;column<nc;column++)
    {
	  l=0;
	for(int i=nr-1;i>=0;i--)
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
void diagonal1(char board[][col],string str,int nr,int nc,int s)
{
    int len=str.length();
	int l=0;
	for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			if(i==j && j+s<=nc-1)
			{
				if(str[l]==board[i][j+s])
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
}

void diagonal2(char board[][col],string str,int nr,int nc,int s)
{
    int len=str.length();
	int l=0;
    for(int i=nr-1;i>=0;i--)
	{
		for(int j=nc-1;j>=0;j--)
		{
			if(i==j && j+s<=nc-1)
			{
				if(str[l]==board[i][j+s])
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
}

void diagonal3(char board[][col],string str,int nr,int nc,int s)
{
    int len=str.length();
	int l=0;
    for(int i=0;i<nr;i++)
	{
		for(int j=0;j<nc;j++)
		{
			if(i==nc-j-1 && j-s>=0)
			{
				if(str[l]==board[i][j-s])
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
}

void diagonal4(char board[][col],string str,int nr,int nc,int s)
{
    int len=str.length();
	int l=0;
    for(int i=nr-1;i>=0;i--)
	{
		for(int j=nc-1;j>=0;j--)
		{
			if(i==nc-j-1 && j-s>=0)
			{
				if(str[l]==board[i][j-s])
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

void diagonal(char board[][col],string str,int nr,int nc)
{
    for(int i=0;i<nc-1;i++)
    {
        diagonal1(board,str,nr,nc,i);
    }
    for(int i=0;i<nc-1;i++)
    {
        diagonal2(board,str,nr,nc,i);
    }
    for(int i=0;i<nc-1;i++)
    {
        diagonal3(board,str,nr,nc,i);
    }
    for(int i=0;i<nc-1;i++)
    {
        diagonal4(board,str,nr,nc,i);
    }

}

int main()
{
	int r,c;
	cout<<"Enter Rows And Columns : ";
	cin>>r>>c;
	char board[r][col];
	cout<<"Enter Characters : ";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
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
	  horizontal(board,str,r,c);
	  vertical(board,str,r,c);
	  diagonal(board,str,r,c);
	  if(!wordfound)
	  {
	  	cout<<"String Not Found";
	  }	
	}while(str!="exit");
}
