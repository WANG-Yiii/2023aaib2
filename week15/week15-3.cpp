//week15-3.c
// LeetCode 1208. Get Equal Substrings Within Budget 寫到一半
int equalSubstring(char* s, char* t, int maxCost) {
    int ans = 0;

    int N = strlen(s); //先知道字串的長度
    for(int i=0; i<N; i++){ //字串的迴圈
        printf("%c %c\n", s[i] , t[i]);
    }
    return ans;
}