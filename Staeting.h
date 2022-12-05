#include <iostream>
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

