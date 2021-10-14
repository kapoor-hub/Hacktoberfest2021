//to print all the prime numbers greater than or equal to N using Sieve Of Eratosthenes algorithm
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int N)
{
	
	bool prime[n + 1];              //creating a boolean array
	memset(prime, true, sizeof(prime));     //initializing all the value to be true

	for (int p = 2; p * p <= N; p++)        //property of composite number N is, that its divisor will lie in the range [0, sqrt(N)]
	{
		// If prime[p] is not changed,
		// then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples
			// of p greater than or
			// equal to the square of it
			// numbers which are multiple
			// of p and are less than p^2
			// are already been marked.
			for (int i = p * p; i <= N; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= N; p++)
		if (prime[p])
			cout << p << " ";
}

// Driver Code
int main()
{
	int N;
  cin>>N;
	cout << "Following are the prime numbers smaller "
		<< " than or equal to " << N << endl;
	SieveOfEratosthenes(N);
	return 0;
}
