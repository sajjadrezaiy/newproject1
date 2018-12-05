#include "costomer.hpp"
#include <iostream>
#include <queue>

class line  //we have tow line for handle the costumer
{ 
	
	int timer;
	char stutus;
	int numline;
	queue<int>timelimit1;
	queue<int>timelimit2;
	int line1;
	int line2;
	char type;
	public:
		
		line(){
			timer=0;
			stutus='a';
			numline=0;
			line1=0;
			line2=0;
			type='m';
			
			
		}
		int gettimer(){
			return timer;
		}
		int getstusus(){
			return stutus;
		}
		int getnumline(){
			return numline;
		}
		
		void addcusomer(int servtime){
			if (!timelimit1.empty()){
				timer=0;
			}
			else{
				if(type=='m')
				{
				
				timelimit1.push(servtime);
				line1++;
				
			}
				else{
				
				timelimit2.push(servtime);
				line2++;
					}
			}
			
			
		}
		
		void delcostom(){
			if (type=='m')
			timelimit1.pop();
			else
			timelimit2.pop();
	}
	
	
	};
