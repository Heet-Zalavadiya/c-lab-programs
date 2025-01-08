#include<stdio.h>
#include<math.h>
void main()
{
    float red;
    float green;
    float blue;
    float white;
    float cyan;
    float magenta;
    float yellow;
    float black;
    printf("Enter value of red , green , blue in range of 0 to 255 =              ");
    scanf("%f %f %f",&red,&green,&blue);
    white=fmax(fmax(red/255,green/255),blue/255);
    cyan=(white - red/255)/white;
    magenta=(white - green/255)/white;
    yellow=(white - blue/255)/white;
    black = 1 - white;
    if (red==0 && green==0 && blue==0)
    {
        cyan=0;
        magenta=0;
        yellow=0;
        black=1;
    }
    printf("cyan=%f\n",cyan);
    printf("magenta=%f\n",magenta);
    printf("yellow=%f\n",yellow);
    printf("black=%f\n",black);
    
}