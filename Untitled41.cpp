#include <iostream>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--)
    {
        int N, X;
        cin >> N >> X;
        bool cond = false;
        for (int i = 0; i < N; ++i)
        {
            int temp;
            cin >> temp;
            if (temp >= X)
            {
                cond = true;
            }
        }
        if(cond)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}  
