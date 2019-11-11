#include <stdio.h>

#include "./drivers/inc/slider_switches.h"
#include "./drivers/inc/pushbuttons.h"
#include "./drivers/inc/vga.h"
#include "./drivers/inc/ps2_keyboard.h"



int main(){
	int x = 0;
  int y = 0;
	VGA_clear_charbuff_ASM();	
	char keyboardChar = 0;
	
while(1) {
		
		while(read_PS2_data_ASM(&keyboardChar)){
				VGA_write_byte_ASM(x,y,keyboardChar);
				x+=3;
				if(x>78){
					y++;
					x=0;
				}
				if(y>59)	{
					y = 0;
					x = 0;
				}
		}
		


		}

return 0;
}
