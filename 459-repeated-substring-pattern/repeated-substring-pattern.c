bool repeatedSubstringPattern(char* s) {
     int n = strlen(s);

    for (int len = 1; len <= n / 2; len++) {

        if (n % len == 0) {
            int flag = 1;

            for (int i = len; i < n; i++) {
                if (s[i] != s[i % len]) {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
                return true;
        }
    }

    return false;
}