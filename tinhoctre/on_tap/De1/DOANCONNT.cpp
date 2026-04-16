#include <iostream>

#include <vector>

#include <numeric> // Để dùng std::accumulate nếu cần

using namespace std;

// Hằng số cho tổng lớn nhất có thể

const int MAX_SUM = 2000 * 1000;

vector<bool> isPrime(MAX_SUM + 1);

// Hàm sàng Eratosthenes

void sieve()
{

    fill(isPrime.begin(), isPrime.end(), true); // Giả sử tất cả là số nguyên tố

    isPrime[0] = isPrime[1] = false; // 0 và 1 không phải số nguyên tố

    for (int p = 2; p * p <= MAX_SUM; p++)
    {

        // Nếu isPrime[p] chưa bị đánh dấu, nó là số nguyên tố

        if (isPrime[p])
        {

            // Đánh dấu tất cả các bội của p là không phải số nguyên tố

            for (int i = p * p; i <= MAX_SUM; i += p)
            {

                isPrime[i] = false;
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    // Bước 1: Sàng trước các số nguyên tố

    sieve();

    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    int count = 0;

    // Bước 2: Duyệt qua tất cả các đoạn con

    for (int i = 0; i < n; i++)
    {

        long long current_sum = 0;

        for (int j = i; j < n; j++)
        {

            // Cộng dồn phần tử a[j] vào tổng hiện tại

            current_sum += a[j];

            // Bước 3: Kiểm tra tổng có phải số nguyên tố không

            if (current_sum <= MAX_SUM && isPrime[current_sum])
            {

                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}