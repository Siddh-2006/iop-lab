#include <stdio.h>

void copy_string(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i]; 
        i++;
    }
    destination[i] = '\0';  
}
void concatenate_strings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0') { 
        i++;
    }
    
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}
int compare_strings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;  
        }
        i++;
    }
    if (str1[i] != str2[i]) {
        return 0;
    }
    return 1;
}
void reverse_string(char str[]) {
    int start = 0;
    int end = 0;
    
    
    while (str[end] != '\0') {
        end++;
    }
    end--; 
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char source[] = "Hello, World!";
    char destination[50];

    copy_string(source, destination);
    printf("Copied string: %s\n", destination);

    char str1[100] = "Hello";
    char str2[] = " World!";

    concatenate_strings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    if (compare_strings(str1, str2)) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
	
	char str[] = "Hello, World!";

    reverse_string(str);
    printf("Reversed string: %s\n", str);
    
    
	return 0;
}
