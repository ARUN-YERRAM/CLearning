#include <stdio.h>
#include <string.h>
int areAnagrams(char str1[], char str2[]) {
    int count1[26] = {0};
    int count2[26] = {0};
    int i;
    for (i = 0; str1[i] && str2[i]; i++) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }
    if (str1[i] || str2[i]) {
        return 0;
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
