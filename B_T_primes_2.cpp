/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
/*
We know that prime numbers are positive integers that have exactly two distinct positive divisors. 
Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.

You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.

Input
The first line contains a single positive integer, n (1 ≤ n ≤ 105), showing how many numbers are in the array. 
The next line contains n space-separated integers xi (1 ≤ xi ≤ 1012).

Please, do not use the %lld specifier to read or write 64-bit integers in С++. 
It is advised to use the cin, cout streams or the %I64d specifier.

Output
Print n lines: the i-th line should contain "YES" (without the quotes), 
if number xi is Т-prime, and "NO" (without the quotes), if it isn't.

Examples
input
3
4 5 6
output
YES
NO
NO

Note
The given test has three numbers. 
The first number 4 has exactly three divisors — 1, 2 and 4, 
thus the answer for this number is "YES". The second number 5 has two divisors (1 and 5), 
and the third number 6 has four divisors (1, 2, 3, 6), hence the answer for them is "NO".

FINAL VERDICT: Time limit exceeded on test 33


ATTENTION: 
The package for this problem was not updated by the problem writer or 
Codeforces administration after we've upgraded the judging servers. 
To adjust the time limit constraint, a solution execution time will be multiplied by 2. For example, 
if your solution works for 400 ms on judging servers, 
then the value 800 ms will be displayed and used to determine the verdict.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x < 4)
            cout << "NO" << endl;
        else if (x % 2 == 0 && x > 4)
            cout << "NO" << endl;
        else
        {
            double d = sqrt(x);
            int r = d;
            int f = 0;

            if (d == r)
            {
                for(int j = 2; j<r; j++)
                {
                    if(r%j==0)
                    {
                        f = 1;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                if(!f)
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
            
        }
    }

    return 0;
}