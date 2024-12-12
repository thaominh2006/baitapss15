#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Nhap chuoi ban mong muon: ");
    fgets(str, sizeof(str), stdin);
    int newWord = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            if (newWord) {
                str[i] = toupper(str[i]);
                newWord = 0;        
            }
        } else { 
            newWord = 1; 
        }
    }
    printf("Chuoi sau khi duoc viet hoa chu cai dau la: %s", str);

    return 0;
}
