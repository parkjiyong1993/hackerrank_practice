/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */


/ * 1. 2 loops with i = j+1 : comparison each 2 elements by 2 elements
    2. Comparison? sometimes math operation is better
*/

int divisibleSumPairs(int n, int k, vector<int> ar) {
 int pairsCount = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((ar[i] + ar[j]) % k == 0) {
                pairsCount++;
            }
        }
    }
    return pairsCount;
}
