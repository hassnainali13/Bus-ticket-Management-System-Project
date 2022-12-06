#include<iostream>
#include<windows.h>
#include "Starting.h"
#include "Instal_bus.h"
#include<fstream>
#include "Booking.h"
#include "first.h"



using namespace std;


class option_choice:public insatal_bus,public Booking,public Starting{
	protected:
	int  choi;



void install_bus(){
string Conf;
string ok;
int Bus_Quantity;
		 
	     set_BUSNAME();
		set_BUSNUMBER();
		set_BUSCLASS();
		set_DEPARTURE();
		set_LOCATION();
					
				fstream fout;
		 fout.open("Buses.txt", ios::app); 
					fout<<"\n\n\n\t\t\t\t\t_______________________________"<<endl;
	fout<<"\t\t\t\t\t"<<"            Bus Detail"<<endl;
	fout<<"\t\t\t\t\t_______________________________"<<endl;
	fout<<"\t\t\t\t\t Bus Name           :  "<<get_BUSNAME()<<endl;
	fout<<"\t\t\t\t\t Bus Number         :  "<<get_BUSNUMBER()<<endl;
	fout<<"\t\t\t\t\t Departure Timing   :  "<<get_DEPARTURE()<<endl;
	fout<<"\t\t\t\t\t Traveling From     :  "<<location_from<<endl;
	fout<<"\t\t\t\t\t Traveling To       :  "<<location_to<<endl;
    fout<<"\t\t\t\t\t_______________________________"<<endl;
    
			 fout.close();

			cout<<"Bus install Save successfully";
			for(int i=0;i<5;i++){
	        	cout<<".";
	        	Sleep(500);
		}			
			system("cls");
options();
}
		

		
void Avalible_Busses(){
		int Border=186;
			
	Tline();
	cout<<"\t\t\t\t\t"<<(char)Border<<"                 Bus             "<<(char)Border<<endl;//33
	Cline();
	cout<<"\t\t\t\t\t Bus Name           :  "<<get_BUSNAME()<<endl;
	cout<<"\t\t\t\t\t Bus Number         :  "<<get_BUSNUMBER()<<endl;
	cout<<"\t\t\t\t\t Class              :  "<<get_BUSCLASS()<<endl;
	cout<<"\t\t\t\t\t Departure Timing   :  "<<get_DEPARTURE()<<endl;
	cout<<"\t\t\t\t\t Traveling From     :  "<<location_from<<endl;
	cout<<"\t\t\t\t\t Traveling To       :  "<<location_to<<endl;
	
   
    Bline();
		
string ok;
cout<<"Confirm? :";
cin>>ok;
if(ok== "ok"){
	system("cls");
}
options();

	}

void booking(){
	string c1;
	set_PSNNAME();
    set_MOBILENUMBER();
    set_PSNLOCATION();
    set_PSNDEPARTURE();
    set_PSNCLASS();
    cout<<"Ticket Book? : ";
    cin>>c1;
    if(c1=="ok"){
	
    cout<<" Plaese Wait";
			for(int i=0;i<5;i++){
	        	cout<<".";
	        	Sleep(700);
	        	
	        	
				}}
				else{
					booking();
				}
				system("cls");
				options();
    		int Border=186;

    float ticket_amount=1000,amount;
    if (( Class== psnClass) && (  psndeparture_time <= departure_time) && (location_from == psnlocation_from) &&(location_to == psnlocation_to)){
	if(Class == "business"|| "Business"){
	amount=	ticket_amount+800;
	}
	else if(Class == "economy"||"Economy"){
		amount=ticket_amount;
	}
	Tline();
	cout<<"\t\t\t\t\t"<<(char)Border<<"          Your Ticket           "<<(char)Border<<endl;//33
	Cline();
	cout<<"\t\t\t\t\t Bus Name           :  "<<get_BUSNAME()<<endl;
	cout<<"\t\t\t\t\t Bus Number         :  "<<get_BUSNUMBER()<<endl;
	cout<<"\t\t\t\t\t Class              :  "<<get_BUSCLASS()<<endl;
	cout<<"\t\t\t\t\t Departure Timing   :  "<<get_DEPARTURE()<<endl;
	cout<<"\t\t\t\t\t Traveling From     :  "<<location_from<<endl;
	cout<<"\t\t\t\t\t Traveling To       :  "<<location_to<<endl;
	Cline();
	cout<<"\t\t\t\t\t Pessanger Name     :  "<<get_PSNNAME()<<endl;
	cout<<"\t\t\t\t\t Mobile Number      :  "<<get_MOBILENUMBER()<<endl;
	cout<<"\t\t\t\t\t Amount             :  "<<amount<<endl;
   	cout<<"\t\t\t\t\t                       "<<endl;
   	cout<<"\t\t\t\t\t              Thank You      "<<endl;


    Bline();
    	
	}
    else{
    	cout<<"Bus Not Avalible"<<endl;
	}
	string c2;
	cout<<"Confirm? :";
	cin>>c2;
	if(c2=="ok"){
		system("cls");
		
			fstream fout;
		 fout.open("Booked Ticket.txt", ios::app); 
					fout<<"\n\n\n\t\t\t\t\t_______________________________"<<endl;
	fout<<"\t\t\t\t\t"<<"         Your Ticket"<<endl;
	fout<<"\t\t\t\t\t_______________________________"<<endl;
	fout<<"\t\t\t\t\t Bus Name           :  "<<get_BUSNAME()<<endl;
	fout<<"\t\t\t\t\t Bus Number         :  "<<get_BUSNUMBER()<<endl;
	fout<<"\t\t\t\t\t Departure Timing   :  "<<get_DEPARTURE()<<endl;
	fout<<"\t\t\t\t\t Traveling From     :  "<<location_from<<endl;
	fout<<"\t\t\t\t\t Traveling To       :  "<<location_to<<endl;
    fout<<"\t\t\t\t\t_______________________________"<<endl;
    fout<<"\t\t\t\t\t Pessanger Name     :  "<<get_PSNNAME()<<endl;
	fout<<"\t\t\t\t\t Mobile Number      :  "<<get_MOBILENUMBER()<<endl;
	fout<<"\t\t\t\t\t Amount             :  "<<amount<<endl;
	fout<<"\t\t\t\t\t            Thank You          "<<endl;	
	fout<<"\t\t\t\t\t_______________________________"<<endl;
    
			 fout.close();
	}
	options();
}

	public:
	void select_option(){

		cout<<"Enter your Choice: ";
		cin>>choi;
		
	switch(choi){
		case 1:

install_bus();

	select_option();

			case 2:

Avalible_Busses();

	select_option();

			case 3:

booking();

	select_option();

		}}};
		

////////////////////   MAIN   /////////////////////

int main(){
	

	first_Page FP;
	FP.Project_TITLE();
	Starting p1;
	p1.loading();
	p1.options();
	insatal_bus bs1;
	
	option_choice bus1;
	
	bus1.select_option();
	
}





