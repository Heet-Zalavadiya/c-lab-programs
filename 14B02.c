#include <stdio.h>
#include <math.h>
void main()
{
    int size;
    int i;
    int j;
    float sum = 0;
    float Avg;
    float gemotricMean = 1;
    float harmonicMean = 0;
    printf("Enter value of  size :    ");
    scanf("%d", &size);
    float a[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter value of elements :    ");
        scanf("%f", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
        gemotricMean = gemotricMean * a[i];
        harmonicMean = harmonicMean + 1.0 / a[i];
    }
    Avg = sum / size;
    float hm = size / harmonicMean;
    float gm = pow(gemotricMean, 1.0 / size);
    printf("Avg=%f\n", Avg);
    printf("harmonicMean=%f\n", hm);
    printf("geomotricMean=%f\n", gm);
}