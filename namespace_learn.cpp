#include<iostream>

namespace CounterNameSpace {
int upperbound;
int lowerbound;

class counter {
	int count;
public:
	counter(int n) {
		if (n <= upperbound) {
			count = n;
		}
		else {
			count = upperbound;
		};
	}
	void reset(int n ) {
		if (n <= upperbound) {
			count = n;
		}
	}
	int run() {
		if (count > lowerbound) {
			return count--;
		}
		else return lowerbound;
	}
};
}

int main() {
	CounterNameSpace:: upperbound = 3;
	CounterNameSpace::lowerbound = 0;

	CounterNameSpace:: counter obj1 = new counter(10);
	int i;
	do {
		i = obj1.run();
		std::cout << i << " ";
	} while (i > CounterNameSpace::lowerbound);
	std::cout << std::endl;

	return 0;
}
