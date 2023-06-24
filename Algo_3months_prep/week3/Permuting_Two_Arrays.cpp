/*
 * Complete the 'twoArrays' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 *  3. INTEGER_ARRAY B
 */

/*std::vector<int> v = {4, 2, 9, 6, 5, 1, 8, 3, 7};
std::sort(v.begin(), v.end(), std::greater<int>());

Output : 
Original vector:
4 2 9 6 5 1 8 3 7 
Sorted vector in descending order:
9 8 7 6 5 4 3 2 1 

*/

string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for(int i = 0; i < A.size(); i++) {
        if(A[i] + B[i] < k) {
            return "NO";
        }
    }

    return "YES";
}
