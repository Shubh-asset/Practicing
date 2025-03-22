#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    pair<int, float> p(23, 44.5);
    cout << p.first << " " << p.second << "\n";

    pair<int, string> pp;
    pp = make_pair(33, "hello");
    cout << pp.first << " " << pp.second << '\n';
    // p.first = 4;

    auto ppp = make_pair(333, "hello");
    cout << ppp.first << " " << ppp.second << endl;

    // pair<int, float> pppp(ppp);
    // cout << pppp.first << " " << pppp.second;

    //**Vectors of Pairs**//

    vector<pair<int, string>> studentDetails = {{1, "Shubh"}, {2, "Rathi"}};
    for (int i = 0; i < studentDetails.size(); i++)
    {
        cout << studentDetails[i].first << "  " << studentDetails[i].second << endl;
    }

    return 0;
}