#include <iostream>

int get_change(int m) {
    //write y our code here
    int n = 0;
    while(m != 0)
    {
        if(m >= 10)
        {
            int num = m / 10;
            n += num;
            m -= 10 * num;
            continue;
        }
        else if(m >= 5 && m < 10 )
        {
            int num = m / 5;
            n += num;
            m -= 5 * num;
        }
        else
        {
            n += m;
            m -= m;
            continue;
        }
        
    }
    return n;
}

int main() {
    int m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
    return 0;
}
