/**
Connection:
-------
    #0|  -----> SDA*
    #1|  -----> LED-STRIPE
    #2|  -----> SCL*
    #3|  NC
    #4|  NC
------
Important note:
  Use external Pullups to VCC.
  
 Use RIGHT and LEFT on the remote to change color.
 UP and DOWN change brightness.
 1, 2, 3, 4, 5, 6, 7, 8 and 9 to start builtin shows.
 */

#include <IRDA.h>
IRDA irda(0x24);

void setup()
{
  
  pinMode (8, OUTPUT);    // UEXT Power
  digitalWrite (8, LOW);  // UEXT Power turned on
   Serial.begin(9600);
    irda.setMode(irda.RC5);
}
void loop()
{
   
    unsigned int data = irda.readData();
    Serial.println(data, DEC);
    
}


