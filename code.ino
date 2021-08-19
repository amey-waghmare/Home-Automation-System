#include<reg51.h>
s bit led0=p2^0;
sbit led1=p2^1;
    Void main(void)
        { 
             unsigned char my data;
            TMOD= 0x20;
            TH1= 0xFD;
            SCON= 0X50;
            TR1= 1; 
           P2=0x00;
            Delay (200);
While(1)
    { 
        While (RI==0);
         mydata= SBUF;
          RI=0;
   If(mydata==’1’)
    {  
       Led0=1;
      Delay(200);
    }
 else if(mydata==’2’)
  {       
     Led0=0;
    Delay(200);
 } 
   Else if(my data==’3’)
  {
      Led1=1;
      Delay(200);
  }
else if(mydata==’4’)
{ 
   Led1=0;
   Delay(200);
 }
}
}
Void delay(int time)
{ 
   for(i=0; i<time; i++)
   for(j=0; j<1275; j++);
}
