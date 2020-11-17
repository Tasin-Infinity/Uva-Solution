#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, U, D, F;
    while (cin >> H >> U >> D >> F)
    {
        if(H==0)
            break;
        H *= 100, D *= 100;

        int height = 0, day = 0, factor = 0;
        while (true)
        {
            day++;

            int climbed = U * (100 - factor);
            if (climbed < 0) climbed = 0;

            height += climbed;
            if (height > H)
            {
                cout << "success on day " << day << '\n';
                break;
            }

            height -= D;
            if (height < 0)
            {
                cout << "failure on day " << day << '\n';
                break;
            }

            factor += F;
        }
    }

	return 0;
}
