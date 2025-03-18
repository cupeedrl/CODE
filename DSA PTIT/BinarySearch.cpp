#include<iostream>
#include <algorithm>
using namespace std;
// condition: sorted array
void Heapify(int a[], int n, int i)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if(l < n && a[l] > a[largest])
    {
        largest = l;
    }
    if(r < n && a[r] > a[largest])
    {
        largest = r;
    }
    if(largest != i )
    {
        swap(a[i], a[largest]);
        Heapify(a,n,largest);
    } 
}
void HeapSort(int a[], int n)
{
    for(int i = n/2-1; i >= 0; i--)
    {
        Heapify(a,n,i);
    }
    for(int i = n-1; i > 0; i--)
    {
        swap(a[i], a[0]);
        Heapify(a,i,0);
    }
}
int BinarySearch(int a[], int n, int x)
{
    int l = 0;
    int r = n-1;

    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == x)
            return m ;
        else if (x > a[m])
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int BinarySearch_Recusion(int a[], int l, int r, int x)
{
    if(l > r)
        return -1;
    int m = (l+r)/2;
    if (a[m] == x)
        return m;
    else if(x> a[m])
        return BinarySearch_Recusion(a,m+1,r,x);
    else 
        return BinarySearch_Recusion(a,l,m-1,x);

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

    HeapSort(a, n);
    cout <<"Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout << endl;
    cin >> x;
    int res = BinarySearch(a,n,x);
    // int res = BinarySearch_Recusion(a,0,n-1,x);
    if (res != -1)
    {
        cout << res << endl;
    }
    else
        cout <<"Not found!";
        return 0;
       
}