#include<iostream>
using namespace std;

int
main ()
{
  
float num1 = 0;
  
float num2 = 0;
  
float result = 0;
  
int choice = 0;
  
cout << "====================" << endl;
  
cout << "Calculator Using C++" << endl;
  
cout << "====================" << endl << endl;
  
cout << "/////////////////////////////////////////////////" << endl;
  
cout << "Please choose your Option from the following Menu" << endl;
  
cout << "/////////////////////////////////////////////////" << endl <<
    endl;
  
cout << "####################" << endl;
  
cout << "1: Addition" << endl;
  
cout << "2: Subtraction" << endl;
  
cout << "3: Multiplication" << endl;
  
cout << "4: Division" << endl;
  
cout << "5: Exit From Program" << endl;
  
cout << "####################" << endl;
  
 
cout << "Please Select an Operation" << endl;
  
cin >> choice;
  
 
switch (choice)
    {
    
 
case 1:
      {
	
cout << "Enter First Number" << endl;
	
cin >> num1;
	
cout << "Enter Second Number" << endl;
	
cin >> num2;
	
result = num1 + num2;
	
cout << "Addition is :" << result;
	
break;
      
}
    
case 2:
      {
	
cout << "Enter First Number" << endl;
	
cin >> num1;
	
cout << "Enter Second Number" << endl;
	
cin >> num2;
	
result = num1 - num2;
	
cout << "Subtraction is :" << result;
	
break;
      
}
    
case 3:
      {
	
cout << "Enter First Number" << endl;
	
cin >> num1;
	
cout << "Enter Second Number" << endl;
	
cin >> num2;
	
result = num1 * num2;
	
cout << "Multiplication is :" << result;
	
break;
      
}
    
case 4:
      {
	
cout << "Enter First Number" << endl;
	
cin >> num1;
	
cout << "Enter Second Number" << endl;
	
cin >> num2;
	
result = num1 / num2;
	
cout << "Division is :" << result;
	
break;
      
}
    
case 5:
      {
	
exit;
      
}
    
default:
      {
	
cout << "Please Select a Correct Option..." << endl;
      
}
    
 
}
  
 
return 0;

}


