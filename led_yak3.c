#include <led_yak3.h>
int x=0b00000001;
void main()
{

set_tris_b(0x00);
output_b(0x00);
output_b(x);
 a:
   while(x!=0b10000000)
   {
  
   delay_ms(500);
   x=x<<1;
   output_b(x);
      
   }
  
   while(x!=0b00000001)
   {
 
   delay_ms(500);
   x=x>>1;
    output_b(x);
      
   }
    goto a;

}
