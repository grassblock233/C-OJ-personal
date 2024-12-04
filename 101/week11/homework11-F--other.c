#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 405

// 函数声明
void add_numbers(char *num1, char *num2, char *result);
void remove_trailing_zeros(char *str);
void remove_leading_zeros(char *str);

int main() {
    char A[MAX_LEN], B[MAX_LEN], result[MAX_LEN * 2];
    
    while (scanf("%s %s", A, B) != EOF) {
        add_numbers(A, B, result);
        printf("%s\n", result);
    }
    
    return 0;
}

void add_numbers(char *num1, char *num2, char *result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = len1 > len2 ? len1 : len2;
    
    // 初始化结果数组
    char temp_result[MAX_LEN * 2] = {0};
    int carry = 0;
    int i, j, k;
    
    // 找到小数点的位置
    int dot1 = strchr(num1, '.') ? strchr(num1, '.') - num1 : len1;
    int dot2 = strchr(num2, '.') ? strchr(num2, '.') - num2 : len2;
    
    // 对齐小数点
    int max_decimal_len = (len1 - dot1 - 1) > (len2 - dot2 - 1) ? (len1 - dot1 - 1) : (len2 - dot2 - 1);
    int max_integer_len = (dot1 > dot2) ? dot1 : dot2;
    
    // 填充前导零
    char aligned_num1[MAX_LEN * 2] = {0};
    char aligned_num2[MAX_LEN * 2] = {0};
    
    sprintf(aligned_num1, "%*s%s%0*d", max_integer_len - dot1, "", num1, max_decimal_len - (len1 - dot1 - 1), 0);
    sprintf(aligned_num2, "%*s%s%0*d", max_integer_len - dot2, "", num2, max_decimal_len - (len2 - dot2 - 1), 0);
    
    // 计算总长度
    int total_len = max_integer_len + max_decimal_len + 1;
    
    // 从最低位开始逐位相加
    for (i = total_len - 1; i >= 0; i--) {
        if (aligned_num1[i] == '.') {
            temp_result[i] = '.';
            continue;
        }
        int digit1 = aligned_num1[i] - '0';
        int digit2 = aligned_num2[i] - '0';
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        temp_result[i] = (sum % 10) + '0';
    }
    
    // 处理最高位的进位
    if (carry) {
        memmove(temp_result + 1, temp_result, total_len);
        temp_result[0] = carry + '0';
        total_len++;
    }
    
    // 去除前导零和尾随零
    remove_leading_zeros(temp_result);
    remove_trailing_zeros(temp_result);
    
    // 复制结果
    strcpy(result, temp_result);
}

void remove_trailing_zeros(char *str) {
    int len = strlen(str);
    while (len > 0 && str[len - 1] == '0') {
        str[--len] = '\0';
    }
    if (len > 0 && str[len - 1] == '.') {
        str[--len] = '\0';
    }
}

void remove_leading_zeros(char *str) {
    int len = strlen(str);
    int i = 0;
    while (i < len && str[i] == '0' && str[i + 1] != '.') {
        i++;
    }
    if (i > 0) {
        memmove(str, str + i, len - i + 1);
    }
}