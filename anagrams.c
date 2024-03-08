#include <stdio.h>
#include <string.h>
int areAnagrams(char str1[], char str2[]) {
    int i, count1[26] = {0}, count2[26] = {0};
    int len1 = strlen(str1), len2 = strlen(str2);
    if (len1 != len2) {
        return 0;
    }
    for (i = 0; i < len1; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams\n");
    } else {
        printf("The strings are not anagrams\n");
    }
    return 0;
}
