/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

/* 1. I don't need to make the whole matrix,
      I can only consider sum it up  
   2. size-1 => 0 base,   -i for the right operation
   3. std::abs();
      */


int diagonalDifference(vector<vector<int>> arr) {
    
int size = arr.size();
int left_to_right = 0;
int right_to_left = 0;

for(int i=0; i< size ; i++)
{
   left_to_right = left_to_right + arr[i][i];
   right_to_left = right_to_left + arr[i][size-i-1];
}

int print_value =0;
print_value = abs(left_to_right - right_to_left);
return print_value;

}
