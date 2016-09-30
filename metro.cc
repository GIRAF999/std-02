#include "metro.h"

#include <iostream>

using namespace std;

int
main() {

   // cout <<read_word(cin) <<endl;
   // Scheme scheme = parse_scheme(cin);
   // cout << scheme << endl;
    //return 0;
    Station s;
    s.transits.first=0;
    s.transits.last=0;
    s.name="station";
    add_transit(&s, &s);
    add_transit(&s, &s);
    add_transit(&s, &s);
    cout << s << endl;


    Scheme scheme = parse_scheme(cin);
    cout << scheme << endl;
    return 0;

}
