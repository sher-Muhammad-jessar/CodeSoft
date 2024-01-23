// simple calculator 
#include<iostream>
#include<conio.h>
  using namespace std;

  class Calculator{ 
  	public:
  		 
  		 Calculator(){}
  		  
  		 
		   double Add(double A , double B){
		   	  return A+B;
		   } 
		
	       double substr(double A , double B){
	     	return A-B;
		 }
		
		  double mult(double A , double B){
		 	return A*B;
		 }
		     double divide( double A , double B){
		  	if(B==0){
		  		cout<<"ERROR !!! ";
			  }
			  else{
			  		return A/B;
			  }
		  
		  }
  };
   
        int main(){
        	Calculator cal;
        	
        	do{
        		 cout<<"\t\t\t\t=========================\n";
		 	 cout<<"\t\t\t\t SIMPLE CALCULATOR\n";
		 	 cout<<"\t\t\t\t=========================\n";
		 	  
		 	  cout<<"\t\t\t\t PATERN NUMBER OPERATION NUMBER (4-2)\n";
		 	   double num1,num2;
		 	   char ch;
		 	   cout<<"\t\t\t\t PERFORM OPERATIONS\n ";
		 	   cin>>num1>>ch>>num2;
		 	     
		 	      double result;
		 	   switch(ch){
		 	   	       case '+': 
					   		result=cal.Add(num1,num2);break;
		 	   	       case '-':
					  		result= cal.substr(num1,num2);break;
		 	   	       case '*': 
					 		result=cal.mult(num1,num2);break;
		 	   	       case '/':
					  		result= cal.divide(num1,num2);break;
		 	   	       default: cout<<" \t\t\t\t INVALID OPERATION ";}
		 	   	  
		 	   	   cout<<"RESULT: "<<result;
					    getch();
						system("cls");}
		 	   	   while(true);
        	 return 0;
		}
