char *strcat(char* str1, const char* str2)
{
	if (*str1 == NULL || *str2 == NULL)
	{
		printf("输入字符串有误\n");
		return NULL;
	}
	int i = 0, j = 0;
	while (str1[i++] != '\0')
	{
		;
	}
	i--;
	while (str1[j] != '\0')
	{
		str1[i + j] = str2[j];
		j++;
	}
	return str1;
}
