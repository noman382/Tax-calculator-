#include<iostream>
using namespace std;
int main()
{
	while(true){
		
	
	int sallery;
	cout<<"enter your total sallery"<<endl;
	cin>>sallery;
	
	if(sallery<=10000)
	{
		cout<<"you are poor"<<endl;
		cout<<"you are not abel top the tax"<<endl;
		
	}
	else if(sallery>10000&&sallery<=30000)
	{
		cout<<"you are abel to Pay the tax"<<endl;
		cout<<"your tax = 300"<<endl;
		
	}
	else if(sallery>30000&&sallery<=50000)
	{
		cout<"you are abel to pay the tax";
		cout<<"your tax = 500"<<endl;
		
	}
	else if (sallery>50000&&sallery<=100000)
	{
		cout<<"you are abel to pay te tax"<<endl;
		cout<<"your tax = 700"<<endl;
	}
	else if(sallery>100000)
	{
		cout<<"you are abel to pay the tax";
		cout<<"your tax = 1000"<<endl;
		
	}
}
	return 0;

}
