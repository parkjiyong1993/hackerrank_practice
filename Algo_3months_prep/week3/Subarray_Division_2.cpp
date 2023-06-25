/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s
 *  2. INTEGER d
 *  3. INTEGER m
 */

int birthday(vector<int> s, int d, int m) {
    int count = 0;
    int n = s.size();

    // If the size of the array is less than 'm', there can't be a segment of length 'm'.
    if(n < m)
        return 0;

    // Calculate the sum for the first segment of length 'm'.
    int sum = 0;
    for(int i = 0; i < m; i++)
        sum += s[i];

    // If the sum of the first segment is 'd', increase the count.
    if(sum == d)
        count++;

    // Calculate the sum for the rest of the segments.
    for(int i = m; i < n; i++) {
        // Subtract the first element of the previous segment and add the next element to the sum.
        sum = sum - s[i - m] + s[i];

        // If the sum of the current segment is 'd', increase the count.
        if(sum == d)
            count++;
    }

    return count;
}
