#include <iostream>
#include <fstream>
using namespace std;



class Book {
public:
    string author, title;
    bool rented;
      int amount, RlYear;
      string language;

    Book(string &author, string &title,string &language,int amount,int rlyear) {
        this -> author = author;
        this -> title = title;
       this->language=language;
       this->amount=amount;
       this->RlYear=rlyear;
    };
    Book(){
	};
};


int addbooktofile(){
fstream myfile ("example.txt");


/**********************************************************/
 if (!myfile.open ("example.txt" ,ios::out ))
    {
        cout<<"Error reading database file!\n";
         
        return -1;
    }

/***************************************************************/
 Book book1;
 cout<<"please enter the author of book"<<endl;
 
 cin>>book1.title;
 string title=book1.title;
 do{
 
  if (title==" ")
            {
                cout<<"Wrong input. Try again.\n";
             }
				
				else{
			system("cls");
			myfile<<title<<"\t";
				break;
			}
			
}while(1);
cout<<"please enter the autour of the book"<<endl;
 cin>>book1.author;
 string author1=book1.title;
  do{
 
  if (author1==" ")
            {
                cout<<"Wrong input. Try again.\n";
             }
				
				else{
			system("cls");
			myfile<<author1<<"\t";
				break;
			}
			
}while(1);

cout<<"please enter the autour of the book"<<endl;
 cin>>book1.RlYear;
 int Ryear=book1.RlYear;
  do{
 
  if (Ryear==0)
            {
                cout<<"Wrong input. Try again.\n";
             }
				
				else{
			system("cls");
			myfile<<Ryear<<"\t";
				break;
			}
			
			
}while(1);
/*
cout<<"please enter the price  of the book"<<endl;
 cin>>book1.RlYear;
 int Ryear= book1.RlYear;
  do{
 
  if (Ryear==" ")
            {
                cout<<"Wrong input. Try again.\n";
             }
				
				else{
			system("cls");
			myfile<<Ryear<<"\t";
				break;
			}
			
			
}while(1);






*/




 
/*do{
	
}
}while(1)*/
}
int main(){
	addbooktofile();
	
	
	
	
	
}
