/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
long long sum = 0; // long type to prevent overflow for large integers

// Sort array using built-in sort function
// ascending order 
std::sort(arr.begin(), arr.end());

    // Calculate sum
for(int i = 0; i < arr.size(); i++) {
    sum += arr[i];
}

cout << sum - arr[arr.size()-1] << " " << sum - arr[0];
}


/* Complexity : O(N^2), 0 based funciton sorting, 
not applicable for hackerrank */
/*
voide insertionSort(int A[], int N)
{
int j, I, v;
for(i=1; i<N; i++)
{ v=A[i];
j=i-1;
while(j>=0 && A[j] >v)
{A[j+1]= A[j];
j--;
}
A[j+1] =v;

*/
