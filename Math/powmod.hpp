const int MOD = 1000000007; 

int powmod(int x, unsigned k) {
	if (k == 0) return 1; 
	x %= MOD; 

	int res = powmod(x * (ull)x % MOD, k >> 1); 
	if (k & 1) res = res * (ull)x % MOD; 

	return res; 
}