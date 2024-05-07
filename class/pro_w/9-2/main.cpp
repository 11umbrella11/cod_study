#include <iostream>


int main(){
  /*Adder adder;
  Multiply multiply;
  
 adder.run;
 multiply.run;
 for(i=0;i<3;i++){
   adder.run();*/
   
   Calculator* p;
   p=new Adder;
   p->run();
   p=new Multiply;
   p->run();
   
 }
}

