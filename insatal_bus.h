#include <iostream>
#include<windows.h>
using namespace std;
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
			
						
//void Tline(){
//
//			
//			int angleLT =201,angleRT=187,line=205;
//			
//	cout<<"\n\n\n\t\t\t\t\t"<<(char)angleLT<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)angleRT<<endl;
//
//		}
//void Cline(){
//
//			
//			int angleLB =204,angleRB=185,line=205;
//			
//	cout<<"\t\t\t\t\t"<<(char)angleLB<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)angleRB<<endl;
//
//		}	
//void Bline(){
//				SetConsoleCP(437);
//			SetConsoleOutputCP(437);
//			
//			int angleLB =200,angleRB=188,line=205;
//			
//	cout<<"\t\t\t\t\t"<<(char)angleLB<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)line<<(char)angleRB<<endl;
//
//		}
//		
//void print_Busses(){
////option_choice::Bus_Quantity;
//		
	
			
		
			
};

