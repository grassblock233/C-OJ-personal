#include <stdio.h>
char trans_abc(char str)
{
	if (str >= 'A' && str <= 'Z')
	{
		str = str + 32;
		return str;
	}
	else
	{
		return str;
	}
}

int trans_value(char str)
{
	int value;
	if (str == '0')
	{
		value = 0;
	}
	else if (str == '1')
	{
		value = 1;
	}
	else if (str == '2')
	{
		value = 2;
	}
	else if (str == '3')
	{
		value = 3;
	}
	else if (str == '4')
	{
		value = 4;
	}
	else if (str == '5')
	{
		value = 5;
	}
	else if (str == '6')
	{
		value = 6;
	}
	else if (str == '7')
	{
		value = 7;
	}
	else if (str == '8')
	{
		value = 8;
	}
	else if (str == '9')
	{
		value = 9;
	}
	else if (str == 'a')
	{
		value = 10;
	}
	else if (str == 'b')
	{
		value = 11;
	}
	else if (str == 'c')
	{
		value = 12;
	}
	else if (str == 'd')
	{
		value = 13;
	}
	else if (str == 'e')
	{
		value = 14;
	}
	else if (str == 'f')
	{
		value = 15;
	}
	return value;
}

int main()
{
	char input_str[80];
	char input;
	int sum, stage, i, n, m;
	for (n = 0;;)
	{
		input = getchar();
		input = trans_abc(input);
		if (input == '\n')
		{
			break;
		}
		else if ((input >= 'a' && input <= 'f') || (input >= '0' && input <= '9'))
		{
			input_str[n] = input;
			n++;
		}
	}
	for (sum = 0, stage = 1, m = n - 1; m >= 0; stage = stage * 16, m--)
	{
		sum = sum + trans_value(input_str[m]) * stage;
	}
	printf("%d\n", sum);
	return 0;
}