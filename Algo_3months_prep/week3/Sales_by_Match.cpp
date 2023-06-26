/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> counts;
    for (int i = 0; i < n; i++) {
        counts[ar[i]]++;
    }

    int pairs = 0;
    for (auto& kv : counts) {
        pairs += kv.second / 2;
    }
