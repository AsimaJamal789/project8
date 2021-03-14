#include <iostream>
#include"conio.h"
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class base1
{
	public:
		base1()
		{
			cout<<"base1 s coctructor"<<endl;
			
		}
		
};

class base2
{
	public:
		base2()
		{
			cout<<"base2 s contructor"<<endl;
		}
};

class D:public base1,base2
{
	public:
		D()
		{
			cout<<"D s costructor"<<endl;
		}
		
};
int main(int argc, char** argv) 
{
	base1 A;
	D x;
	return 0;
}

