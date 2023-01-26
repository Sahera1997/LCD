#include<reg51.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void lcdcmd(unsigned char);
void lcddat (unsigned char);
void delay();
void main()
{
P2=0x00;
while(1)
{
lcdcmd(0x38);
delay();
lcdcmd(0x01);
delay();
lcdcmd(0x10);
delay();
lcdcmd(0x0c);
delay();
lcdcmd(0xc0);
delay();
lcdcmd(0x80);
delay();
lcdcmd(0x0C);
delay();
lcddat('S');
delay();
lcddat('A');
delay();
lcddat('H');
delay();
lcddat('E');
delay();
lcddat('R');
delay();
lcddat('A');
delay();
lcddat(' ');
delay();
lcddat('B');
delay();
lcddat('I');
delay();
lcddat('B');
delay();
lcddat('I');
delay();
lcddat(' ');
delay();
lcddat('M');
delay();
lcddat('I');
delay();
lcddat('T');
delay();
lcddat('U');
delay();
lcddat(' ');
delay();
lcddat('2');
delay();
lcddat('0');
delay();
lcddat('1');
delay();
lcddat('9');
delay();
lcddat('0');
delay();
lcddat('0');
delay();
lcddat('0');
delay();
lcddat('0');
delay();
lcddat('1');
delay();
lcddat('0');
delay();
lcddat('0');
delay();
lcddat('6');
delay();
lcddat('5');
delay();
lcdcmd(0xC0);
delay();
lcddat('C');
delay();
lcddat('S');
delay();
lcddat('E');
delay();
lcddat(' ');
delay();
lcddat('S');
delay();
lcddat('O');
delay();
lcddat('U');
delay();
lcddat('T');
delay();
lcddat('H');
delay();
lcddat('E');
delay();
lcddat('A');
delay();
lcddat('S');
delay();
lcddat('T');
delay();
lcddat(' ');
delay();
lcddat('U');
delay();
lcddat('N');
delay();
lcddat('I');
delay();
lcddat('V');
delay();
lcddat('E');
delay();
lcddat('R');
delay();
lcddat('S');
delay();
lcddat('I');
delay();
lcddat('T');
delay();
lcddat('Y');
delay();
}
}
void lcdcmd(unsigned char val)
{
P2=val;
rs=0;
rw=0;
en=1;
delay();

en=0;
}
void lcddat(unsigned char val)
{
P2=val;
rs=1;
rw=0;
en=1;
delay();
en=0;
}
void delay()
{
unsigned int i;
for(i=0;i<7000;i++);
}