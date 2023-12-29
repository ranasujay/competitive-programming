#include <bits/stdc++.h> 
using namespace std; 

// add the header from here

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

// header file ends here

int main(){
    ordered_set o_set;
    o_set.insert(1);
    o_set.insert(6);
    o_set.insert(2);
    o_set.insert(5);

    cout << (*o_set.order_of_key(5)) << endl; // output is -> 2
    cout << (*o_set.find_by_order(1)) << endl; // output is -> 2 (0 base indexing)

  return 0;
}
