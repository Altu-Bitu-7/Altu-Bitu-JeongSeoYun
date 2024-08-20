#include <iostream>
#include <vector>
#include <set>

using namespace std;



int main()
{
   int n, m, result;
   string input;
   set<string> s;
   
   cin >> n >> m;
   while (n--){
       cin >> input;
       s.insert(input);
   }
   
   while (m--) {
       cin >> input;
       if (s.find(input) != s.end()) {
           result++;
       }
   }
    
    cout << result << '\n';
    return 0;
}
