
#include	<iostream>

double division( int a, int b )
{ 
   if ( b == 0 ) {
       throw "division par zero!";
   }
   return ( a / b ); 
}

int main(void)
{ 
   std::cout << division ( 5, 0 ) << std::endl; 
   return ( 0 ); 
}
