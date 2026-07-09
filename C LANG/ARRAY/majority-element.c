#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int freq[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int maxi = -1;
    int m_index = -1;
    for (int i = 0; i < 1000; i++)
    {
        if (freq[i] > maxi)
        {
            maxi = freq[i];
            m_index = i;
        }
    }
     printf("%d",m_index);
    
}