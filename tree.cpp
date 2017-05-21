#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

class node
{
	public:
		node()
		{
			
		}
	    string name = "";
	    //virtual void getname()=0;

	    
};

class parentnode:node
{
	public:
		void setname(string nam)
		{
			this->name = nam;
		}
		string getname()
		{
			return this->name;
		}
		string getlchild()
		{
			
		}
	private:
		node nod;
};

class lchildnode:node
{
	public:
		void setname(string nam)
		{
			this->name = nam;
		}
		string getname()
		{
			return this->name;
		}
};


class rchildnode:node
{
	public:
		void setname(string nam)
		{
			this->name = nam;
		}
		string getname()
		{
			return this->name;
		}
};

int main()
{
	parentnode n;
	//cout<<n.nod.name<<endl;
}
