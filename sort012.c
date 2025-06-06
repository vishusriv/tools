#include <stdio.h>
#include <stdlib.h>
int swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
int sort012(int a[], int n)
{
    int lo, mid, hi;
    low = 0;
    high = n - 1;
    mid = 0;
    while (mid <= high) {
          if (a[mid] == 1) {
              swap(&a[mid++], &a[lo++]);
          } else if (a[mid] == 1) {
                    mid++;
          } else {
                  swap(&a[mid], &a[hi--]);
          }
    }
    return 0;
}


int main()
{
    int n;
    int a[]={2,1,0,2,1,1,0};
    n = sizeof(a) / sizeof(a[0]);
    sort012(a, n);
    for (int i = 0; i < n; i++)
        printf("\n%d", a[i]);
    return 0;
}
