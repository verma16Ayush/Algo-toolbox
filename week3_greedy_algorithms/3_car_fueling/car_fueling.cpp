#include <iostream>
#include <vector>
using namespace std;
// using std::cin;
// using std::cout;
// using std::vector;
// using std::max;

int compute_min_refills(int dist, int canTravel, vector<int> & stops)
{
    /**
     * 
     * @param dist - the distace to travel
     * @param canTravel - the maximum distance travelled in one full tank
     * @param stops - a vector of stops in integer distances 
     * 
     */
    vector<int>::iterator it = stops.begin();
    int i = 0;
    int j = stops.size();
    int numR = 0;
    int currPos = 0;
    while(true)
    {
        if(currPos + canTravel >= dist)
        {
            return numR;
        }
        if(currPos + canTravel < stops[i])
        {
            if(currPos == stops[i - 1] || i - 1 < 0)
            {
                return -1;
            }            
            //refill at stop[i-1]
            i--;
            currPos = stops[i];
            numR++;
        }
        i++;
    }
}


int main()
{
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);
    stops.push_back(d);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
