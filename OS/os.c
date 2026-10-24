#include <stdio.h>

int main()
{
    int n;
    int at[10], bt[10], ct[10], tat[10], wt[10];
    float avg_tat = 0, avg_wt = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("P%d Arrival Time: ", i + 1);
        scanf("%d", &at[i]);

        printf("P%d Burst Time: ", i + 1);
        scanf("%d", &bt[i]);
    }

    ct[0] = at[0] + bt[0];

    for(int i = 1; i < n; i++)
    {
        if(at[i] > ct[i - 1])
            ct[i] = at[i] + bt[i];
        else
            ct[i] = ct[i - 1] + bt[i];
    }

    for(int i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        avg_tat += tat[i];
        avg_wt += wt[i];

        printf("\nP%d: CT=%d TAT=%d WT=%d",
               i + 1, ct[i], tat[i], wt[i]);
    }

    printf("\n\nAverage TAT = %.2f", avg_tat / n);
    printf("\nAverage WT = %.2f\n", avg_wt / n);

    return 0;
}