#include<iostream>
using namespace std;

int &great();

int x,y;

int main(void)
{
	int s = 0;
	cout<<"enter two numbers: "<<endl;
	cin>>x>>y;
	great() = s;
	if (x == 0)
	{
		cout<<"smaller value = " <<x<<endl<<"greater value ="<<y;
	}
	else if(y==0)
	{
		cout<<"small value = "<<y<<endl<<"greater value = "<<x;
	}
}

int &great()
{
	if(x<y)
	{
		return x;
	}
	else if(x>y)
	{
		return y;
	}
	else{
		cout<<"invalid inputs";
	}
}