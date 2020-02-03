#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,Q,m,k,max,tm,i;
    cin>>N;
    int *A = new int[N+1];
    for(i=1;i<=N;++i)
        cin>>A[i];
    max=A[1];
    for(i=2;i<=N;++i)
        if(A[i]>=max)
            max=A[i];
    cin>>Q;
    while(Q--)
    {
        cin>>m>>k;
        if(k==0)
            cout<<A[m]<<endl;
        else if(A[m]==max || k>=2)
            cout<<max<<endl;
        else if(k==1)
        {
            if(m==1)
                cout<<max<<endl;
            else
            {
                tm=A[m];
                i=1;
                while(i<=N)
                {
                    if(m%i==0 || i%m==0)
                    {
                        if(A[i]>tm)
                            tm=A[i];
                    }
                    ++i;
                }
                cout<<tm<<endl;
            }
        }
    }
    return 0;
}
