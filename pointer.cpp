#include<iostream>
using namespace std;
class personal{
	public:
		string name;
		personal(string name){
			this->name=name;
		}
		virtual void display(){//if we mention virtual it will works with sub class methods
			cout<<name<<endl;
		}
		virtual void fun()=0;//pure virtual fun it is implemented in subclass
		//if it is pure virtual fun it must declared in child class
		//if a class having atleast 1 virtual fun it is abstract class
};
class student:public personal{
	public:
		string rollno;
		student(string name,string rollno):personal(name)
		{
		
			this->rollno=rollno;
	
		}
		void display()
		{
			cout<<rollno<<endl;
			personal::display();
		}
		void fun(){
			cout<<"hai";
		}
		
		
};
int main(){
	personal *obj;
	student s1("krish","544");
    obj=&s1;
	obj->display();
	obj->fun();
	
	
	
}
