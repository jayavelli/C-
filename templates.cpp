/*Templates
2types
Function & class templates*/
#include<iostream>
using namespace std;

template<typename T>
T maxx(T a,T b,T c)
{
	if(a>b && a>c)
	{
		return a;
	}
	else if(b>c) {
		return b;
	}
	else
	{
		return c;
	}
}
template<typename U>
U maxx(U d,U e){
	if(d>e){
		return d;
	}
	else
	{
		return e;
	}
}
template<typename T,typename U>
int maxx(T a,U d,T c){
	if(a>d and a>c){
		return a;
	}
	else if(d>c){
		return d;
	}
	else
	
	{
		return c;
	}
}

int main(){
	int a,b,c;
	float d,e;

	cin>>a>>b>>c>>d>>e;
	
	cout<<maxx(a,b,c)<<endl;
	cout<<maxx(d,e)<<endl;
	cout<<maxx(a,d,c);
}


