//1316, �׷� �ܾ� üĿ 20240617
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, group=0, gcnt, i, j, k, len, tmp[26];
	char word[101];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		//���ڿ� �Է� �� ���� ����, gcnt �ʱ�ȭ
		scanf("%s", word); 
		len = strlen(word);
		gcnt = 0; //word�� ���̿� ������ ��� �׷칮��

		//����� �迭�� �� �ʱ�ȭ
		for (j = 0; j < 26; j++)
			tmp[j] = 0;
		
		for (j = 0; j < len; j++)
		{
			//ù ��° ���ڿ� ����
			if (j == 0)
			{
				tmp[word[j] - 'a']++;
				gcnt++;
			}
			else //�� ��° ���ں���
			{
				//�� ���ڿ� ������ ���
				if (word[j] == word[j - 1])
					gcnt++;
				

				//�� ���ڿ� �������� ���� ���
				if (word[j] != word[j - 1])
				{
					if (tmp[word[j]-'a'] > 0) //����ҿ� �ִ� ���ڿ� ��ġ���� �Ǵ�. �� ��� �׷칮�ڰ� �ƴϴ�.
					{
						gcnt--;
						break;
					}
					tmp[word[j] - 'a']++; //����ҿ� �� �߰�
					gcnt++;
				}
			}
		}
		if (gcnt == len)
			group++;
	}
	printf("%d", group);
}