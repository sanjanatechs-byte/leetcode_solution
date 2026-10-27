
int lengthOfLongestSubstring(char* s) {
    int seen[256] = {0};
    int left = 0;
    int maxLength = 0;

    for (int right = 0; s[right] != '\0'; right++) {

        while (seen[(unsigned char)s[right]] == 1) {
            seen[(unsigned char)s[left]] = 0;
            left++;
        }

        seen[(unsigned char)s[right]] = 1;

        int length = right - left + 1;

        if (length > maxLength) {
            maxLength = length;
        }
    }

    return maxLength;
}
