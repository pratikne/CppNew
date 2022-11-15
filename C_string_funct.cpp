// CPP program to demonstrate
// strcat

#include <cstring>
#include <iostream>
using namespace std;

unsigned int my_strlen(const char* s){
    unsigned int count = 0;
    while (*s != '\0'){
        count++;
        s++;
    }
    return count;
}

char* mr_strcpy(char* dest, const char* source){
    // return NULL if no memory allocated to dest
    if(dest == NULL){
        return NULL;
    }
    // ptr points to beginning of dest
    char* ptr = dest;
    while(*source != '\0'){
        *ptr = *source;
        ptr++;
        source++;
    }
    // add \0 at end
    *ptr = '\0';
    return ptr;
}

char* mr_strncpy(char* dest, const char* source, size_t num){
    // return NULL if no memory allocated to dest
    if(dest == NULL){
        return NULL;
    }
    // ptr points to beginning of dest
    char* ptr = dest;
    while(*source != '\0' && (num > 0)){
        *ptr = *source;
        ptr++;
        source++;
        num--;
    }
    // add \0 at end
    *ptr = '\0';
    return ptr;
}

char* mr_strcat(char* dest, const char* source){
    // return NULL if no memory allocated to dest
    if(dest == NULL){
        return NULL;
    }

    // ptr points to end of dest
    char* ptr = dest + strlen(dest);
    while(*source != '\0'){
        *ptr = *source;
        ptr++;
        source++;
    }

    // add \0 at end
    *ptr = '\0';
    return ptr;
}

char* mr_strncat(char* dest, const char* source, size_t num){
    // return NULL if no memory allocated to dest
    if(dest == NULL){
        return NULL;
    }

    // ptr points to end of dest
    char* ptr = dest + strlen(dest);
    while(*source != '\0' && (num > 0)){
        *ptr = *source;
        ptr++;
        source++;
        num--;
    }

    // add \0 at end
    *ptr = '\0';
    return ptr;
}

int my_strcmp(const char* X, const char* Y){
    while(*X != '\0' && (*X == *Y)){
        X++;
        Y++;
    }

    return ((unsigned char)*X - (unsigned char)(*Y));
}


int main()
{
    /**STRLEN**/
    int len;
    char array[20] = "fresh2refresh.com";

    len = strlen(array);

    printf("string length  = %d \n", len);

    /**STRCAT**/
    char dest[50] = "This is an";
    char src[50] = " example";

    strcat(dest, src);
    cout << dest;

    /**STRNCAT**/
    char source[] = " fresh2refresh";
    char target[] = "C tutorial";

    printf("\nSource string = %s", source);
    printf("\nTarget string = %s", target);

    strncat(target, source, 5);

    printf("\nTarget string after strncat( ) = %s", target);
    // Source string                       = fresh2refresh
    // Target string                        = C tutorial
    // Target string after strcat( ) = C tutorial fres

    /**STRCPY**/
    char source[] = "fresh2refresh";
    char target[20] = "";
    printf("\nsource string = %s", source);
    printf("\ntarget string = %s", target);
    strcpy(target, source);
    printf("\ntarget string after strcpy( ) = %s", target);

    /**STRNCPY**/
    char source[] = "fresh2refresh";
    char target[20] = "";
    printf("\nsource string = %s", source);
    printf("\ntarget string = %s", target);
    strncpy(target, source, 5);
    printf("\ntarget string after strcpy( ) = %s", target);

    /**STRCMP**/
    char str1[] = "fresh";
    char str2[] = "refresh";
    int i, j, k;
    i = strcmp(str1, "fresh");
    j = strcmp(str1, str2);
    k = strcmp(str1, "f");
    printf("\n%d %d %d", i, j, k);

    /**STRLWR**/
    char str[] = "MODIFY This String To LOwer";
    printf("%s\n", strlwr(str));

    /**STRUPR**/
    char str[] = "Modify This String To Upper";
    printf("%s\n", strupr(str));

    /**STRREV**/
    char name[30] = "Hello";

    printf("String before strrev( ) : %s\n", name);

    printf("String after strrev( )  : %s", strrev(name));

    /**STRCHR**/
    char string[55] = "This is a string for testing";
    char *p;
    p = strchr(string, 'i');

    printf("Character i is found at position %d\n", p - string + 1);
    printf("First occurrence of character \"i\" in \"%s\" is"
           " \"%s\"",
           string, p);

    /**STRRCHR**/
    char string[55] = "This is a string for testing";
    char *p;
    p = strrchr(string, 'i');

    printf("Character i is found at position %d\n", p - string + 1);
    printf("Last occurrence of character \"i\" in \"%s\" is"
           " \"%s\"",
           string, p);

    /**STRTOK**/
    char string[50] = "Test,string1,Test,string2:Test:string3";
    char *p;
    printf("String  \"%s\" is split into tokens:\n", string);

    p = strtok(string, ",:");
    while (p != NULL) //end will always be NULL
    {
        printf("%s\n", p);
        p = strtok(NULL, ",:"); // NULL is to tell the function to use the previous string
    }

    // String “Test,string1,Test,string2:Test:string3” is split into tokens:
    // Test
    // string1
    // Test
    // string2
    // Test
    // string3

    return 0;
}