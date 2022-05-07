1.	#include<stdio.h>  
2.	#include<graphics.h>  
3.	void drawline(int x0, int y0, int x1, int y1)  
4.	{  
5.	    int dx, dy, p, x, y;  
6.	    dx=x1-x0;  
7.	    dy=y1-y0;  
8.	    x=x0;  
9.	    y=y0;  
10.	    p=2*dy-dx;  
11.	    while(x<x1)  
12.	    {  
13.	        if(p>=0)  
14.	        {  
15.	            putpixel(x,y,7);  
16.	            y=y+1;  
17.	            p=p+2*dy-2*dx;  
18.	        }  
19.	        else  
20.	        {  
21.	            putpixel(x,y,7);  
22.	            p=p+2*dy;}  
23.	            x=x+1;  
24.	        }  
25.	}  
26.	int main()  
27.	{  
28.	    int gdriver=DETECT, gmode, error, x0, y0, x1, y1;  
29.	    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");  
30.	    printf("Enter co-ordinates of first point: ");  
31.	    scanf("%d%d", &x0, &y0);  
32.	    printf("Enter co-ordinates of second point: ");  
33.	    scanf("%d%d", &x1, &y1);  
34.	    drawline(x0, y0, x1, y1);  
35.	    return 0;  
36.	}  
