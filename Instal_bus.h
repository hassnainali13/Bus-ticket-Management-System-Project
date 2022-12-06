#include <iostream>
#include<windows.h>
using namespace std;
class insatal_bus{
	protected:
		string bus_name;
		float bus_number;
		string Class;
		float departure_time;
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
	    		 cin>>departure_time;
			}
			float get_DEPARTURE(){
			return departure_time;
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
