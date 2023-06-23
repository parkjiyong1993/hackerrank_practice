/*
 * Complete the 'flippingBits' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

 /* This is python ---------------------------------
 
    def flippingBits(n):
    # Calculate the maximum value that can be represented by 32 bits
    max_value = 2**32 - 1

    # Perform bitwise NOT operation to flip all the bits
    flipped_bits = max_value ^ n

    return flipped_bits
    ------------------------------------------------
    */

/* We perform a bitwise XOR operation (^) between max_value and n. 
The static_cast<uint32_t>(n) is used to ensure that n is treated as an unsigned integer during the operation. */

long flippingBits(long n) {
    uint32_t max_value = UINT32_MAX;
    uint32_t flipped_bits = max_value ^ static_cast<uint32_t>(n);
    return static_cast<long>(flipped_bits);
}
