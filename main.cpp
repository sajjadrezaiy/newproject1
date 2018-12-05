#include <iostream>
#include <queue>
#include <fstream>
#include <stdlib.h>
#include "line.hpp"
using namespace std;
int main(){
	line line1;
	line line2;
	customer cust;
	queue<customer>custInput;
	   ifstream in_file;		

   //used to temperarily hold the line obtained from the file
   	string line;

   //used to  selected substring
  	 string substring;			

   //opening file
   	in_file.open("output.dat"); 
   	if( in_file.fail() )
   
   {

      cout<<"Could not open file.\n";
      return 0;
   }
   else
   {

       //get data from file until end of file
	    while( !in_file.eof() )	
	    {

		    //gets input until new line
		    getline( in_file, line );

		    //if extracted string isn't empty 
		    if( line.length() > 0 ) 
		    {
                   
             //getting the first digits for (number)
             substring = line.substr(0, 2);
			
			cust.setnubmer( atoi(substring.c_str()));
			
			
			//getting the next digits for (arrivetime)
             substring = line.substr(4, 4);
                   
             cust.settime( atoi(substring.c_str()) );
			
			substring = line.substr(9, 3);

            cust.servtime( atoi(substring.c_str()));
            
             custInput.push( cust );
             
          }
      }

	   //closing file
	   in_file.close();
   
   }
   }

