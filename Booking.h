#include <iostream>
#include<windows.h>
using namespace std;
class Booking{
	protected:
		string psn_name;
		float mobile_number;
		float psndeparture_time;
		string psnClass;

		string psnlocation_to,psnlocation_from;
		
	    public:
	    	
	    	
	    	void set_PSNNAME(){
	    		
	    		 cout<<"Pessanger Name: ";
	    		 cin>>psn_name;
			}
			string get_PSNNAME(){
				return psn_name;
			}
			
			void set_MOBILENUMBER(){
	    		 
	    		 cout<<"Mobile Number: ";
	    	
				 
	    		 cin>>mobile_number;
			}
			float get_MOBILENUMBER(){
				return mobile_number;
			}
			
			
			void set_PSNCLASS(){
	    		
	    		 cout<<"Class: ";
	    		 cin>>psnClass;
			}
			string get_PSNCLASS(){
				return psnClass;
			}
			
			void set_PSNDEPARTURE(){
	    		
	    		 cout<<"Departure Time: ";
	    		 cin>>psndeparture_time;
			}
			int get_PSNDEPARTURE(){
				 return psndeparture_time;
			}
			
		void set_PSNLOCATION(){
			
	    		 cout<<"Traveling From: ";
	    		 cin>>psnlocation_from;
	    		 cout<<"Traveling To: ";
	    		 cin>>psnlocation_to;
			}
			string get_PSNLOCATION(){
				return psnlocation_to ,psnlocation_from;
			}
			
						
};
