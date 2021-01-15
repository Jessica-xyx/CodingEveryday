#include <iostream>
#include <stack>
using namespace std;

int countOnes(unsigned int n)
{
    int ones = 0;
    while (n > 0)
    {
        ones += (1 & n);
        n >>= 1;
    }
    return ones;
}
stack<int> decimalTobinary(unsigned int n)
{
    stack<int> s;
    int num = 0;
    while (n != 1)
    {
        if (n == 0)
        {
            s.push(0);
            return s;
        }
        if (n % 2 == 1)
            num = 1;
        else
            num = 0;

        s.push(num);
        n /= 2;
    }
    s.push(1);
    return s;
}
int main()
{
    int x;
    cout << "请输入...";
    cin >> x;
    int temp = countOnes(x);
    stack<int> temp2 = decimalTobinary(x);
    cout << x << "中"
         << "1的统计:" << temp << endl;
    int len = temp2.size();
    cout << x << "的"
         << "二进制:";
    for (int i = 0; i < len; i++)
    {
        cout << temp2.top();
        temp2.pop();
    }
    cout << endl;
    return 0;
}