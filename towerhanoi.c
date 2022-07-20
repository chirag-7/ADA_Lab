#include(stdio.h) 
#include(conio.h)
#include(math.h)
void hanoi(int x, char from, char to, char aux)
{
if(x==1)
printf(&quot;Move Disk From %c to %c\n&quot;,from,to);
else
{
hanoi(x-1,from,aux,to);
printf(&quot;Move Disk From %c to %c\n&quot;,from,to);
hanoi(x-1,aux,to,from);
}
}
void main( )
{
int disk;
int moves;
clrscr();
printf(&quot;Enter the number of disks you want to play with:&quot;);
scanf(&quot;%d&quot;,&amp;disk);
moves=pow(2,disk)-1;
printf(&quot;\nThe No of moves required is=%d \n&quot;,moves);
hanoi(disk,&#39;A&#39;,&#39;C&#39;,&#39;B&#39;);
getch( );
}
