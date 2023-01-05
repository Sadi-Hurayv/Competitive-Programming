ull power(unsigned __int128 a, ull n, unsigned __int128 mod)
// {
//     ull ans = 1;
//     while (n)
//     {
//         if (n % 2)
//             ans = ((a % mod) * (ans % mod)) % mod;
//         a = ((a % mod) * (a % mod)) % mod;
//         n /= 2;
//     }
//     return ans;
// }