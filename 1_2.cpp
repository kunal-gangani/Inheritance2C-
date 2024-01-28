#include<iostream>
using namespace std;
class VarInit{
	public:
		int a;
		int b;
		int c;
		int d;
};
class TakeVal : public VarInit{
	public:
		void TakeInput1(){
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
		}
};
class TakeVal2 : public VarInit{
	public:
		void TakeInput2(){
			cout<<"Enter C : ";
			cin>>c;
			cout<<"Enter D : ";
			cin>>d;
		}
};
class GetSum : public TakeVal, public TakeVal2{
	public:
		void Sum(){
			cout<<"The Sum of "<<a<<" "<<b<<" "<<c<<" & "<<d<<" is "<<a+b+c+d<<endl; 
		}
};
int main(){
	GetSum g;
	g.TakeInput1();
	g.TakeInput2();
	g.SetSum();	
}
