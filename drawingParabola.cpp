//Norbert Acedański
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int a, b, c, i, j, T[80];
float p, q, x1, x2, delta, d;
int main()
{
	cout<<"Program, that draws ax^2+bx+c (parabola) function with intiger values of a, b, c (0 is also valid)\n";
	cout<<"Input a: ";
	cin>>a;
	cout<<"Input b: ";
	cin>>b;
	cout<<"Input c: ";
	cin>>c;
	if(a!=0)
	{
		delta=b*b-4*a*c;
		p=-b/(2*a);
		q=-delta/(4*a);
		cout<<"The function graph is marked with asterisks\n";
		cout<<"The vertex of the function is at the point: ("<<p<<", "<<q<<")\n";
		if(delta<0)
			cout<<"Function has no roots\n";
		else
			if(delta==0)
			{
				cout<<"Function has 1 root at: "<<p<<endl;
			}
			else
			{
				d=sqrt(delta);
				x1=(-b-d)/(2*a);
				x2=(-b+d)/(2*a);
				cout<<"Function has 2 roots at: ";
				if(x1<x2)
					cout<<x1<< " and " <<x2<<endl;
				else
					cout<<x2<< " and " <<x1<<endl;
			}
	}
	else
		if(b!=0)
		{
			d=-c/b;
			cout<<"Function has 1 root at: "<<d<<endl;
		}
		else
			if(c!=0)
				cout<<"Function has no roots\n";
			else
				cout<<"Function has infinitely many roots\n";
	for(j=-40; j<40; j++)
		T[j+40]=90-a*j*j-b*j-c;
	for(i=0; i<180; i++)
		for(j=0; j<80; j++)
		{
			if(T[j]==i)
				cout<<"*";
			else
				if(j==40 && i==0)
					cout<<"^";
				else
					if(j==40)
						cout<<"|";
					else
						if(i==90 && j==79)
							cout<<">\n";
						else
							if(i==90)
								cout<<"-";
							else
								cout<<" ";
			if(j==79 && i!=90)
				cout<<endl;
		}
	system("pause");
	return 0;
}
