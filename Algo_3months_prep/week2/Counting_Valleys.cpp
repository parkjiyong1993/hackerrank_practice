/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

/* 1. When it comes back to 0, just count 1 */
/*    1.1. But it should be after one up, not for after down 
   2. So we can do it with  the successive conditions.(if) */

int countingValleys(int steps, std::string path) {
    int altitude = 0;
    int valleyCount = 0;

    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            altitude++;
            if (altitude == 0) {
                valleyCount++;
            }
        } else if (path[i] == 'D') {
            altitude--;
        }
    }
