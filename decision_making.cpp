#include <iostream> 
using namespace std; 
int main(void) 
{  
int age;
char choice;  
bool citizen;  
cout << "Enter your age: ";  
cin >> age;  
cout << "Are you a citizen (Y/N): ";  
cin >> choice;  
if (choice == 'Y')  
citizen = true;  
else  citizen = false;  
if (age >= 18)  
if(citizen == true)  
cout << "You are eligible to vote";  
else  cout << "You are not eligible to vote";  
else  cout << "You are not eligible to vote";  
return 0; 
}
