//#include <boost/mpl/string.hpp>
//#include <iostream>
//using namespace std;
//
//int main() {
//    boost::mpl::string<'hell','o wo','rld'> s;
//    cout << "done!" << endl;
//    return 0;
//}


#include <iostream>
#include "ublas.hpp"
#include <boost/container/flat_set.hpp>
#include <boost/container/flat_map.hpp>
#include <boost/mpl/string.hpp>

using namespace std;

void break_here() {
  while (false) {}
}

typedef boost::container::flat_set<int> FlatSetOfInt;

void test_flat_set() {
  FlatSetOfInt fset;
  break_here();
  fset.insert(1);
  fset.insert(2);
  FlatSetOfInt::iterator itr = fset.find(2);
  FlatSetOfInt::const_iterator empty_itr;
  break_here();
}

int main(){

	//-----Test GDB plugin on ublas::vector-----
	Vektor<string> test(6);
	for(int i = 0; i < 6; i++){
		test(i) = i;
	}

	//-----Test GDB plugin on std::vector-----
	vector<double> stdvec;
	for(int i = 0; i < 4; i ++){
		stdvec.push_back(5.0);
	}

	//-----Print out both vector types-----
	cout << stdvec[0] << endl;
	cout << test << endl;

	//-----Test GDB plugin on boost::array-----
	boost::array<double, 2> arr;
	arr[0] = 3.0;
	arr[1] = 1.0;

	//-----Test GDB plugin on container::flat_set/map-----
	test_flat_set();

	return 0;
}
