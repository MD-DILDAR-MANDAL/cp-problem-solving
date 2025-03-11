#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
       cpp_int fact = 1;
    for(int i = n;i > 1;i--)
        fact *= i;
    cout << fact << endl;
    
    }
	
	return 0;
}
