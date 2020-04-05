#include <iostream.h>
#include<conio.h>
int main()
{clrscr();
    int n, i, j;

    cout<<"Enter the value for which you want too print patren for: ";
    cin>>n;
    for(i=n; i>=1; i--)
    {
        for(j=n; j>i; j--)
        {
            cout<<j;
        }
        for(j=1; j<=(i*2-1); j++)
        {
            cout<<i;
        }
        for(j=i+1; j<=n; j++)
        {
            cout<<j;
        }
cout<<"\n";
    }
    for(i=1; i<n; i++)
    {
        for(j=n; j>i; j--)
        {
           cout<<j;
        }
        for(j=1; j<=(i*2-1); j++)
        {
            cout<<i+1;
        }
        for(j=i+1; j<=n; j++)
        {
           cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
