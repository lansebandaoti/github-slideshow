#include <iostream>
#define mode 1000000007
using namespace std;
int main()
{
    int X, A, Y, B, K;
    int t=0;
    cin >> K;
    cin >> A >> X >> B >> Y;
    for( int i=0; i<X; i++)
    {
        for(int j=0; j<Y; j++)
        {
            int M= A*X + B*Y;
            if(M == K)
                t++;
        }
    }
    cout << t << endl;
    return 0;
}
