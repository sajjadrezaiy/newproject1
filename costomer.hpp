#include <iostream>
using namespace std;

class customer
{
	int arrtime,servtime;
	
	int number;
	char type; //man or woman
	public:
		customer(){   //constructor
			arrtime=0;
			servtime=0;
			number=0;
			type='m';
	
				}
		//******************************************************			
		void settime(int x)
		{
		arrtime=x;
       	}
       	
       	
		void setnubmer(int x){
		number=x;
		}
		
		
		void  setservtime(int x){
		servtime=x;
		}
		
		
		//*****************************************************
		int gettime(){
		return arrtime;
		}
		
		
		int getnubmer(){
		 return number;
		}
		
		
		int  getsertime(){
		return servtime;
		}
	
	 //**************************************************************
	 
	void addbook_to_stack(){
	}
		
	}
;





