#include<iostream>
#include <algorithm>
using namespace std;
// condition: sorted array
int Partition(int a[], int l, int r)
{
    int pivot = a[r];
    int i = l-1, k = 0;
    for(int j = l; j < r; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[r]);
    return i;
}
void QuickSort(int a[], int l, int r)
{
    if(l>=r)
        return;
    int p = Partition(a,l,r);
    QuickSort(a,l,p-1);
    QuickSort(a,p+1,r);
}
int InterpolationSearch(int a[], int n, int x)
{
    int l = 0;
    int r = n-1;
    while(x >= a[l] && x <= a[r] && l <= r )
    {
        if(l == r)      // supposed that there is only one element
        {
            if(a[l] == x)
                return l; // which is the finding element
            return -1;  // is not  the finding element
        }  
        int pos = l + ((r-l)/(a[r]-a[l]))*(x-a[l]);
        if(a[pos] == x)
           return pos;
        if(a[pos] < x)
            l = pos +1;
        else
            r = pos -1;       
    }
    return -1;
}
int main()
{
    int n, x;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    QuickSort(a,0,n-1);
    cout <<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout << endl;
    cin >> x;
    int res = InterpolationSearch(a,n,x);
    if (res != -1)
    {
        cout << res << endl;
    }
    else
        cout <<"Not found!";
    return 0;
       
}