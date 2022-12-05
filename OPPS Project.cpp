

#include<iostream>
#include<windows.h>
using namespace std;

class Starting{
public:
		void loading(){
			
			system("cls");
			int bar1 =177,bar2=219;
			
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tLoading........";
			cout<<"\n\t\t\t\t";
			
			for(int i=0;i<25;i++)
				cout<<(char)bar1;
			
			cout<<"\r";
			cout<<"\t\t\t\t";
	        for(int i=0;i<25;i++){
	        	cout<<(char)bar2;
	        	Sleep(220);
			}cout<<"\n";
			system("cls");
		}
		void Tline(){

			
			int angleLT =201,angleRT=187,line=205;
			
	cout<<"\n\n\n\t\t\t\t\t"<<(char)angleLT<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)angleRT<<endl;

		}
		
		void Cline(){

			
			int angleLB =204,angleRB=185,line=205;
			
	cout<<"\t\t\t\t\t"<<(char)angleLB<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)angleRB<<endl;

		}
		
		
		void Bline(){
				SetConsoleCP(437);
			SetConsoleOutputCP(437);
			
			int angleLB =200,angleRB=188,line=205;
			
	cout<<"\t\t\t\t\t"<<(char)angleLB<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)angleRB<<endl;

		}
		
void options(){

			int Border=186;
	Tline();
	cout<<"\t\t\t\t\t"<<(char)Border<<"   Bus Ticket Managment System   "<<(char)Border<<endl;
	Cline();
	cout<<"\t\t\t\t\t"<<(char)Border<<"                                 "<<(char)Border<<endl;
	cout<<"\t\t\t\t\t"<<(char)Border<<"       1.  Instal Busses         "<<(char)Border<<endl;
	cout<<"\t\t\t\t\t"<<(char)Border<<"       2.  Available Bus         "<<(char)Border<<endl;
	cout<<"\t\t\t\t\t"<<(char)Border<<"       3.  Book Tickets          "<<(char)Border<<endl;
	cout<<"\t\t\t\t\t"<<(char)Border<<"       4.  Exit                  "<<(char)Border<<endl;
	cout<<"\t\t\t\t\t"<<(char)Border<<"                                 "<<(char)Border<<endl;
    Bline();	
    cout<<endl;
}	
};

class insatal_bus{
	protected:
		string bus_name;
		float bus_number;
		string Class;
		double departure;
		string location_to,location_from;
		
	    public:
	    	
	    	void set_BUSNAME(){
	    		
	    		 cout<<"Bus Name: ";
	    		 cin>>bus_name;
			}
			string get_BUSNAME(){
				return bus_name;
			}
			
			void set_BUSNUMBER(){
	    		 
	    		 cout<<"Bus Number: ";
	    		 cin>>bus_number;
			}
			float get_BUSNUMBER(){
				return bus_number;
			}
			
			
			void set_BUSCLASS(){
	    		
	    		 cout<<"Class: ";
	    		 cin>>Class;
			}
			string get_BUSCLASS(){
				return Class;
			}
			
			void set_DEPARTURE(){
	    		
	    		 cout<<"Departure Time: ";
	    		 cin>>departure;
			}
			double get_DEPARTURE(){
				return departure;
			}
			
		void set_LOCATION(){
			
	    		 cout<<"Traveling From: ";
	    		 cin>>location_from;
	    		 cout<<"Traveling To: ";
	    		 cin>>location_to;
			}
			string get_LOCATION(){
				return location_to ,location_from;
			}
			

		
		
		
			
};

class Book_Ticket{
	protected:
		string CUS_name;
		int CUS_number[11];
		string Class;
		double departure;
		string location_to,location_from;
		
	    public:
	    	
	    	void set_CUSNAME(){
	    		
	    		 cout<<"CUS Name: ";
	    		 cin>>CUS_name;
			}
			string get_CUSNAME(){
				return CUS_name;
			}
			
			void set_CUSNUMBER(){
	    		 
	    		 cout<<"Mobile Number: ";
	    		 cin>>CUS_number;
			}
			int get_CUSNUMBER(){
				return CUS_number;
			}
			
			
			void set_BUSCLASS(){
	    		
	    		 cout<<"Class: ";
	    		 cin>>Class;
			}
			string get_BUSCLASS(){
				return Class;
			}
			
			void set_DEPARTURE(){
	    		
	    		 cout<<"Departure Time: ";
	    		 cin>>departure;
			}
			double get_DEPARTURE(){
				return departure;
			}
			
		void set_LOCATION(){
			
	    		 cout<<"Traveling From: ";
	    		 cin>>location_from;
	    		 cout<<"Traveling To: ";
	    		 cin>>location_to;
			}
			string get_LOCATION(){
				return location_to ,location_from;
			}
			

		
		
		
			
};


class option_choice:virtual public insatal_bus,public Starting{
	protected:
	int  choi;
	int Bus_Quantity;
	public:
		
	void install_bus(){
	
	     set_BUSNAME();
		set_BUSNUMBER();
		set_BUSCLASS();
		set_DEPARTURE();
		set_LOCATION();
			system("cls");
			options();
	}


	
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
	option_choice bus1;
	bus1.select_option();
	
}



