#include<stdio.h>
#include<conio.h>
intcount,w[10],d,x[10];
void subset(intcs, int k, int r)
{
int i;
x[k]=1;
if(cs+w[k]==d)
{
printf(&quot;\nSubset solution = %d\n&quot;, ++count);
for(i=0;i&lt;=k;i++)
{
if(x[i]==1)
printf(&quot;%d&quot;, w[i]);
}
}
else
if(cs+w[k]+w[k+1]&lt;=d)
subset(cs+w[k], k+1, r-w[k]);
if((cs+r-w[k]&gt;=d) &amp;&amp; (cs+w[k+1])&lt;=d)
{
x[k]=0;
subset(cs,k+1,r-w[k]);
}
}
void main()
{
int sum=0,i,n;
printf(&quot;Enter the number of elements\n&quot;);
scanf(&quot;%d&quot;, &amp;n);
printf(&quot;Enter the elements in ascending order\n&quot;);
for(i=0;i&lt;n;i++)
scanf(&quot;%d&quot;, &amp;w[i]);
printf(&quot;Enter the required sum\n&quot;);
scanf(&quot;%d&quot;, &amp;d);
for(i=0;i&lt;n;i++)
sum+=w[i];
if(sum&lt;d)
{
printf(&quot;No solution exists\n&quot;);
return;
}
printf(&quot;The solution is\n&quot;);
count=0;
subset(0,0,sum);
getch();
}
