#include<iostream>
using namespace std;
class RBI{
	public:
		int rate=6;
};
class ICICI : public RBI{
	public:
		int amount;
		int time;
		void getROI(){
			cout<<"-----------------------------------------------------"<<endl;
			cout<<"Enter Amount in ICICI : ";
			cin>>amount;
			cout<<"Enter Time in ICICI : ";
			cin>>time;
			cout<<"Your Interest Rate is : "<<rate<<endl;
			cout<<"The Amount of ICICI is : "<<amount*time*rate<<" Rupees "<<endl;
			cout<<"-----------------------------------------------------"<<endl;
		}
};
class BOB : public RBI{
	public:
		int amount;
		int time;
		void getROI(){
			cout<<"-----------------------------------------------------"<<endl;
			cout<<"Enter Amount in BOB : ";
			cin>>amount;
			cout<<"Enter Time in BOB : ";
			cin>>time;
			cout<<"Your Interest Rate is : "<<rate<<endl;
			cout<<"The Amount of BOB is : "<<amount*time*rate<<" Rupees "<<endl;
			cout<<"-----------------------------------------------------"<<endl;
		}
};
class SBI : public RBI{
	public:
		int amount;
		int time;
		void getROI(){
			cout<<"-----------------------------------------------------"<<endl;
			cout<<"Enter Amount in SBI : ";
			cin>>amount;
			cout<<"Enter Time in SBI : ";
			cin>>time;
			cout<<"Your Interest Rate is : "<<rate<<endl;
			cout<<"The Amount of SBI is : "<<amount*time*rate<<" Rupees "<<endl;
			cout<<"-----------------------------------------------------"<<endl;
		}
};
int main(){
	SBI s;
	BOB b;
	ICICI i;
	i.getROI();
	b.getROI();
	s.getROI();
	return 0;
}
