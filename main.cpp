#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	char *a=NULL,input;
	int n;
	cout<<"\t\t\tMORSE CODE DECRYPTOR\n"<<endl;

	again:
	do{
	cout<<"No. of '.' + '-' = ";
	cin>>n;
	if(n<1 || n>4)
	{
		cout<<"Wrong !\n"<<endl;
		goto again;
	}
	a=new char [n];
	if(n==1)
	{
	cout<<"Enter Combination (Press Enter after each input): "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	for(int i=0; i<n; i++)
	{
		if(a[i]== '.')
		{
			cout<<". in Morse Code = E"<<endl;
		}
		else if(a[i]=='-')
		{
			cout<<"- in Morse Code = T"<<endl;
		}
	}
	}
	else if(n==2)
	{
		cout<<"Enter Combination (Press Enter after each input): "<<endl;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<n; i++)
		{
			if(a[i]=='.' && a[i+1]=='-')
			{
				cout<<". - in Morse Code = A"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='.')
			{
				cout<<". . in Morse Code = I"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='-')
			{
				cout<<"- - in Morse Code = M"<<endl;
			}
			else if(a[i]=='-'&& a[i+1]=='.')
			{
				cout<<"- . in Morse Code = N"<<endl;
			}
		}
	}
	else if(n==3)
	{
		cout<<"Enter Combination (Press Enter after each input):"<<endl;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<n; i++)
		{
			if(a[i]=='-' && a[i+1]=='.' && a[i+2]=='.')
			{
				cout<<"- . . in Morse Code = D"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='-' && a[i+2]=='.')
			{
				cout<<"- - . in Morse Code = G"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='.' && a[i+2]=='-')
			{
				cout<<"- . - in Morse Code = K"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='-' && a[i+2]=='-')
			{
				cout<<"- - - in Morse Code = O"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='-' && a[i+2]=='.')
			{
				cout<<". - . in Morse Code = R"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.')
			{
				cout<<". . . in Morse Code = S"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='-')
			{
				cout<<". . - in Morse Code = U"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='-' && a[i+2]=='-')
			{
				cout<<". - - in Morse Code = W"<<endl;
			}
		}
	}
	else if(n==4)
	{
		cout<<"Enter Combination (Press Enter after each input):"<<endl;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}

		for(int i=0; i<n; i++)
		{
			if(a[i]=='-' && a[i+1]=='.' && a[i+2]=='.' && a[i+3]=='.')
			{
				cout<<"- . . . in Morse Code = B"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='.' && a[i+2]=='-' && a[i+3]=='.')
			{
				cout<<"- . - . in Morse Code = C"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='-' && a[i+3]=='.')
			{
				cout<<". . - . in Morse Code = F"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.' && a[i+3]=='.')
			{
				cout<<". . . . in Morse Code = H"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='-' && a[i+2]=='-' && a[i+3]=='-')
			{
				cout<<". - - - in Morse Code = J"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='-' && a[i+2]=='.' && a[i+3]=='.')
			{
				cout<<". - . . in Morse Code = L"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='-' && a[i+2]=='-' && a[i+3]=='.')
			{
				cout<<". - - . in Morse Code = P"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='-' && a[i+2]=='.' && a[i+3]=='-')
			{
				cout<<"- - . - in Morse Code = Q"<<endl;
			}
			else if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.' && a[i+3]=='-')
			{
				cout<<". . . - in Morse Code = V"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='.' && a[i+2]=='.' && a[i+3]=='-')
			{
				cout<<"- . . - in Morse Code = X"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='.' && a[i+2]=='-' && a[i+3]=='-')
			{
				cout<<"- . - - in Morse Code = Y"<<endl;
			}
			else if(a[i]=='-' && a[i+1]=='-' && a[i+2]=='.' && a[i+3]=='.')
			{
				cout<<"- - . . in Morse Code = Z"<<endl;
			}
		}
	}
	cout<<endl<<"Try for another one? (y/n)"<<endl;
	cin>>input;
	} while(input=='y');
	if(input!='y')
	{
		cout<<"Good Bye"<<endl;
	}

	getch();

	delete []a;
	a=NULL;
}
