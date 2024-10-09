class Solution {
public:
    int countPrimes(int n) {
        if (n <= 1) return 0;

        // Step 1: Create a boolean array for marking primes
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers

        // Step 2: Mark non-prime numbers using Sieve of Eratosthenes
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Step 3: Count prime numbers
        int primeCount = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                primeCount++;
            }
        }

        return primeCount;
        
    }
};