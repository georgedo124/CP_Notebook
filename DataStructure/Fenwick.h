// https://codeforces.com/contest/1096/submission/47643525

struct BIT{
	std::vector<int> data;
	// represent array [1..n] ([0] is undefined)
	BIT(unsigned n) : data(n + 1) {}
 
	// change suffix start at x inclusively
	void update(unsigned x, int delta){
		assert(x != 0);
		while(x < data.size()) {
			data[x] += delta;
			x += x & -x;
		}
	}

	int operator[](unsigned x){
		assert(x != 0);
		int ans = 0;

		while(x > 0){
			ans += data[x];
			x -= x & -x;
		}
		return ans;
	}
};