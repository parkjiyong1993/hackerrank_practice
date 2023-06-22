/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

/* X XOR X = 0 and X XOR 0 = X : 
   We can express it with result ^=a[i]*/

int lonelyinteger(vector<int> a) {
    int result =0;
    
    for(int i=0; i< a.size(); i++)
    {
        result ^=a[i];
        
    }
    return result;
}
