#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person{
	protected:
	    string firstName;
	    string lastName;
	    string password;
	    int NationalId;
	    int ID;
	public:  
	     Person(){
			
		}
	   	Person (string firstName,string lastName,string password,int NationalId,int ID){
			setFirst(firstName);
			setLast(lastName);
		    setNationalId(NationalId);
			setPassword(Password);
			setID(ID);
			  
		}
		    void setFirst(string firstName){
			this->firstName = firstName;
		}
			void setLast(string lastName){
			this->lastName = lastName;
		}
			void setNational(int NationalId){
			this->NationalId = NationalId;
				}
			void setPassword(string Password){
			this->password;
		}
		    void setID(int ID){
			this->ID = ID;
				}
		    string getFirstName(){
			return firstName;
		}
	    	string getLastName(){
			return lastName;
		}
	    	string getPassword(){
			return password;
		}
			int getNationalId(){
			return NationalId;
		}
			int getID(){
			return id;
		}
	};
	
