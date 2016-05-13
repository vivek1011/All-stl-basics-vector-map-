About map .
// it=m1.end() ; 
cout << it->f ; // gives the size of the map . 
if want to access the last entity in the map , then it= m1.end() and it--;

// for finding the lower bound in map . 
it = map.lower_bound(element_to_be_searched);
// if element lower bound not present in the map , then throws it = map.end(); 

// similarly upper bound 




About vector . 
vector.erase( unique(all(vector)) , vector.end() );
