#include <LCD4884.h>
#include "LCD4884.h"
#include "lOGONEXT.h"
 
int z=0;
int dd=200;
 
void setup()
{
  lcd.LCD_init();
  lcd.LCD_clear(); 
  pinMode(7, OUTPUT);
}
void loop()
{ 
  for (int a=0; a<5; a++)
  {
    digitalWrite(7, LOW);
    delay(300);
    digitalWrite(7, HIGH);
    delay(300);
  }
     lcd.LCD_clear();  
      lcd.LCD_write_string(15,0,"NEXTRONIC", MENU_HIGHLIGHT);
      lcd.LCD_write_string(15,2,"Hello to ", MENU_NORMAL);
      lcd.LCD_write_string(0,3,"SHOWCASE Video", MENU_NORMAL);
  delay(3000);
  lcd.LCD_clear(); 
  delay(500);

  lcd.LCD_clear();
  lcd.LCD_write_string(0,0,"BLINK", MENU_NORMAL); 
  lcd.LCD_write_string(0,1,"test 2", MENU_NORMAL);
  lcd.LCD_write_string(0,2,"DISPLAY LOGO", MENU_NORMAL); 
  lcd.LCD_write_string(0,3,"test 4", MENU_NORMAL); 
  lcd.LCD_write_string(0,4,"EXIT", MENU_NORMAL);
  do
  {
    z=analogRead(0);
    if (z==0)
    {
     //////////////////////////////
    }     
    else
      if (z>0 && z<150)
      {
            lcd.LCD_draw_bmp_pixel(0,0, logoG, 84,48);
            delay(5000);
            lcd.LCD_clear();
            lcd.LCD_write_string(15,0,"FOLLOW US", MENU_NORMAL); // ignore MENU_NORMAL for now
            delay(800);
            lcd.LCD_write_string(25,2,"ON", MENU_NORMAL); // ignore MENU_NORMAL for now
            delay(800);
            lcd.LCD_write_string(20,4,"YOU", MENU_NORMAL); // ignore MENU_NORMAL for now
            lcd.LCD_write_string(45,4,"TUBE", MENU_HIGHLIGHT); // ignore MENU_NORMAL for now
            delay(800);
      }       
      else
        if (z>150 && z<350)
        {
            lcd.LCD_write_string(0,0,"BLINK", MENU_NORMAL);
            lcd.LCD_write_string(0,1,"test 2", MENU_NORMAL);
            lcd.LCD_write_string(0,2,"DISPLAY LOGO", MENU_HIGHLIGHT); 
            lcd.LCD_write_string(0,3,"test 4", MENU_NORMAL);
            lcd.LCD_write_string(0,4,"EXIT", MENU_NORMAL);
          
        }         
        else
          if (z>350 && z<510)
          {

            lcd.LCD_write_string(0,0,"BLINK", MENU_HIGHLIGHT);
            lcd.LCD_write_string(0,1,"test 2", MENU_NORMAL);
            lcd.LCD_write_string(0,2,"DISPLAY LOGO", MENU_NORMAL);
            lcd.LCD_write_string(0,3,"test 4", MENU_NORMAL);
            lcd.LCD_write_string(0,4,"EXIT", MENU_NORMAL);
          }         
          else
            if (z>510 && z<750)
            {
            lcd.LCD_write_string(0,0,"BLINK", MENU_NORMAL);
            lcd.LCD_write_string(0,1,"test 2", MENU_HIGHLIGHT);
            lcd.LCD_write_string(0,2,"DISPLAY LOGO", MENU_NORMAL);
            lcd.LCD_write_string(0,3,"test 4", MENU_NORMAL);
            lcd.LCD_write_string(0,4,"EXIT", MENU_NORMAL);
            }           
  }  
  while (1>0);
}
