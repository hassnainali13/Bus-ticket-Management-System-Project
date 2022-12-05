

#include<iostream>
#include<windows.h>
#include "Staeting.h"
#include "insatal_bus.h"
using namespace std;

class option_choice:virtual public insatal_bus,public Starting{
	protected:
	int  choi;
	int Bus_Quantity;


void install_bus(){
	
	     set_BUSNAME();
		set_BUSNUMBER();
		set_BUSCLASS();
		set_DEPARTURE();
		set_LOCATION();
			system("cls");
			options();
	}

	public:
	void select_option(){

		
		cout<<"Enter your Choice: ";
		cin>>choi;
		
	switch(choi){
		case 1:
			cout<<"How Many Installing Busses: ";
			cin>>Bus_Quantity;
			for(int i=1;i<=Bus_Quantity;i++){
				
			cout<<"\nBus "<<i<<endl;
install_bus();
		}
				select_option();
		case 2:
				int Border=186;
				for(int i=1;i<=Bus_Quantity;i++){
			
	Tline();
	cout<<"\t\t\t\t\t"<<(char)Border<<"                 Bus "<<i<<"           "<<(char)Border<<endl;//33
	Cline();
	cout<<"\t\t\t\t\t Bus Name           :  "<<get_BUSNAME()<<endl;
	cout<<"\t\t\t\t\t Bus Number         :  "<<get_BUSNUMBER()<<endl;
	cout<<"\t\t\t\t\t Departure Timing   :  "<<get_DEPARTURE()<<endl;
	cout<<"\t\t\t\t\t Traveling From     :  "<<location_from<<endl;
	cout<<"\t\t\t\t\t Traveling To       :  "<<location_to<<endl;
	
    Bline();	

	}
	select_option();
}
	
	}
};

int main(){
	Starting p1;
	p1.loading();
	p1.options();
	insatal_bus bs1;
	
	option_choice bus1;
	
	bus1.select_option();
	
}








