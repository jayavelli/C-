#include<iostream>
using namespace std;
class person{
	public:
		
	string name;
	person(string name){
		this->name=name;
		
	}
	 void display(){
	 	cout<<name<<endl;
	 }
	virtual void fun()=0;//pure virtual class
	//if atleast 1 class is virtual it is abstract class
};
class details:public person{
	public:
		
	int marks;
	details(string name,int marks):person(name){
		this->marks=marks;
	}
	void display(){
		cout<<marks<<endl;
		person::display();
	
		
	}
  void fun(){
		cout<<"hai";
		
	}
};
int main(){
	details *obj,d1("VJVK",25);
	obj=&d1;
	obj->display();
	obj->fun();
	
}
