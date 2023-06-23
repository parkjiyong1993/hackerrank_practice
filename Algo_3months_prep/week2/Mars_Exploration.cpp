/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

/* string comparison with an index is better for several step, for example, i=i+3; */
/* char string size ? -> strlen(char_string) */
/* (i += 3) = (i=i+3) */

int marsExploration(string s) {
  
int size = s.length();
int count =0;
string Expected_signal[size];


/*for (int i = 0; i < size; i = i + 3) {
        expectedSignal += "SOS";
    } */
for(int i =0; i<size; i=i+3)
{
    Expected_signal[i+0]='S';
    Expected_signal[i+1]='O';
    Expected_signal[i+2]='S';
        
}

for (int i = 0; i < s.length(); i= i+ 3) {
        if (s[i] != 'S') {
            count++;
        }
        if (s[i + 1] != 'O') {
            count++;
        }
        if (s[i + 2] != 'S') {
            count++;
        }
    }

/*   This is not good method for the inclement with more than 1 !!!!!!
for(char c : s)
{
    if(c != 'S') 
    {
        count = count+1;
    }
    if(c +'a' == 'O')
    {
        count = count+1;
    }
    if(c +'b' != 'S')
    {
        count = count+1;
    }
}
*/

return count;
}
