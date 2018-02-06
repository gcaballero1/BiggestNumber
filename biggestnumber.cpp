//Author: Gabriel Caballero
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main() 
{
  int var1;
  int var2;
  int biggest;

cout<<"Please enter a whole number:\n";
cin>>var1;
cout<<"Please enter another whole number:\n";
cin>>var2;
cout<<"Of those two numbers, the biggest is:\n";

if(var1>var2) {
  cout<< var1 << endl;
} 
else 
if(var1<var2) {
  cout<< var2 << endl;
}
else 
if(var1=var2) {
  cout<< var1 << endl;
}
else

cout<< biggest << endl;

cout<<"Thank you for playing.\n";

  return 0;
}

