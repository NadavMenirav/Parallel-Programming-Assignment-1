long decode_c_version(long x, long y, long z);

long decode_c_version(long x, long y, long z) {
    long result = 0;
    y = y - z;
    x = x * y;
    result = z;
    result = result << 32;
    result = result >> 32;
    result = result ^ x;
    return result;
}