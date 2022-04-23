#include "io.h"
#include <gint/display.h>
#include "f2c.h"
#include <fxlibc/printf.h>
int line = -10;
void scroll_up(int n){
	uint32_t *v = (void *)gint_vram;
	for(int i = 0; i < (DWIDTH/32)*(DHEIGHT-n); i++){ 
		v[i] = v[i+(DWIDTH/32)*n];
	}
	drect(0, 64-n, DWIDTH-1, 64-1, C_WHITE);
}
void verify_scroll(void){
	if(line==60){
		scroll_up(10);
		line=50;
	}
}
void printint(integer *idk1,integer *idk2 ,int string, ftnlen idk3){
	idk1=idk2+idk3;
	idk2=idk1+idk3;
	line+=10;
	verify_scroll();
	dprint(1,line,C_BLACK,"%d",string);
	dupdate();
}
void printlong(integer *idk1,integer *idk2 ,long string, ftnlen idk3){
        idk1=idk2+idk3;
        idk2=idk1+idk3;
	line+=10;
	verify_scroll();
        dprint(1,line,C_BLACK,"%ld",string);
        dupdate();

}
void printshort(integer *idk1,integer *idk2 ,short string, ftnlen idk3){
        idk1=idk2+idk3;
        idk2=idk1+idk3;
	line+=10;
	verify_scroll();
	dprint(1,line,C_BLACK,"%hd",string);
        dupdate();
}
void printfloat(integer *idk1,integer *idk2 ,float string, ftnlen idk3){
	__printf_enable_fp();
	idk1=idk2+idk3;
        idk2=idk1+idk3;
	line+=10;
	verify_scroll();
        dprint(1,line,C_BLACK,"%f",string);
        dupdate();
}
void printdouble(integer *idk1,integer *idk2 ,double string, ftnlen idk3){
        idk1=idk2+idk3;
        idk2=idk1+idk3;
	line+=10;
	verify_scroll();
        dprint(1,line,C_BLACK,"%f",string);
        dupdate();
}
void printchar(integer *idk1,integer *idk2 ,char string, ftnlen idk3){
        idk1=idk2+idk3;
        idk2=idk1+idk3;
	line+=10;
	verify_scroll();
        dprint(1,line,C_BLACK,"%c",string);
        dupdate();
}
void printstr(integer *idk1,integer *idk2 ,char *string, ftnlen idk3){
        idk1=idk2+idk3;
        idk2=idk1+idk3;
        line+=10;
        verify_scroll();
        dprint(1,line,C_BLACK,"%s",string);
        dupdate();
}
void printpoint(integer *idk1,integer *idk2 ,void *string, ftnlen idk3){
        idk1=idk2+idk3;
        idk2=idk1+idk3;
	line+=10;
	verify_scroll();
        dprint(1,line,C_BLACK,"%p",string);
        dupdate();
}




