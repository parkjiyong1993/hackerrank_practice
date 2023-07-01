/* 1. Calculate the total number of turns it would take to reach the page from the front of the book
   2. Calculate the total number of turns it would take to reach the page from the back of the book
   3.  For an even total number of pages the number of turns from back is (n - p) / 2
       For an odd total number of pages the number of turns from back is (n - p + 1) / 2
*/
  
int pageCount(int n, int p) {

    int fromFront = p / 2;
    
    int fromBack = n % 2 == 0 ? (n - p + 1) / 2 : (n - p) / 2;

    // Return the minimum number of turns
    return fromFront < fromBack ? fromFront : fromBack;
}
