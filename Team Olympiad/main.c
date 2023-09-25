#include <stdio.h>

int	get_student_index(int *students, int num_students, int t, int *start)
{
	int i;

	for (i = *start; i < num_students; i++)
	{
		if (students[i] == t)
		{
			*start = i + 1;
			break;
		}
	}
	return (i + 1);
}

int main(void)
{
	int num_students;
	int	num_teams;
	int	i, j, k;
	int math, programming, physical_education;
	scanf("%d", &num_students);
	int students[num_students];
	int	hash_map[4] = {0};
	for (int i = 0; i < num_students; i++)
		scanf("%d", &students[i]);
	for (int i = 0; i < num_students; i++)
		hash_map[students[i]]++;
	if (hash_map[1] > hash_map[2])
	{
		if (hash_map[2] < hash_map[3])
			num_teams = hash_map[2];
		else
			num_teams = hash_map[3];
	}
	else
	{
		if (hash_map[3] > hash_map[1])
			num_teams = hash_map[1];
		else
			num_teams = hash_map[3];
	}
	
	i = j = k = 0;
	printf("%d\n", num_teams);
	for (int l = 0; l < num_teams; l++)
	{
		math = get_student_index(students, num_students, 1, &i);
		programming = get_student_index(students, num_students, 2, &j);
		physical_education = get_student_index(students, num_students, 3, &k);
		printf("%d %d %d\n", math, programming, physical_education);
	}
}