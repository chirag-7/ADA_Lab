#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
void nqueens(int n)
{

ANALYSIS AND DESIGN OF ALGORITHM LAB MANUAL

DEPT OF COMPUTER SCIENCE AND ENGINEERING Page 20

Int k,x[20],count=0;
k=1;
x[k]=0;
while(k!=0)
{
x[k]++;
while(place(x,k)!=1 &amp;&amp; x[k]&lt;=n)
x[k]++;
if(x[k]&lt;=n)
{
if(k==n)
{
printf(&quot;\nSolution is %d\n&quot;, ++count);
printf(&quot;Queen\t\tPosition\n&quot;);
for(k=1;k&lt;=n;k++)
printf(&quot;%d\t\t%d\n&quot;, k,x[k]);

}
else
{
k++;
x[k]=0;
}
}
else
k--;

}
}
int place(int x[], int k)
{
int i;
for(i=1;i&lt;=k-1;i++)
{
if(i+x[i]==k+x[k]||i-x[i]==k-x[k]||x[i]==x[k])
return 0;

}
return 1;
}
void main()
{
int n;
clrscr();
printf(&quot;Enter the number of Queens\n&quot;);
scanf(&quot;%d&quot;, &amp;n);
nqueens(n);
getch();
}
