#include<stdio.h>
#include <corecrt_malloc.h>
#include <string.h>

char** possibleChanges(int usernames_count, char** usernames, int* result_count) {
	*result_count = usernames_count;
	char** results = (char**)malloc(sizeof(char*) * usernames_count);

    for (int i = 0; i < usernames_count; i++) {
        int canChange = 0;
        int len = strlen(usernames[i]);

        for (int j = 0; j < len - 1; j++) {
            if (usernames[i][j] > usernames[i][j + 1]) {
                canChange = 1;
                break;
            }
        }

        results[i] = (char*)malloc(4 * sizeof(char));  // Allocating space for "YES" or "NO"

        if (results[i] == NULL) {
            // Handle memory allocation failure
            for (int k = 0; k < i; k++) {
                free(results[k]);
            }
            free(results);
            *result_count = 0;
            return NULL;
        }
        strcpy_s(results[i], 4, canChange ? "YES" : "NO");
    }

    *result_count = usernames_count;
    return results;
}

int main() {
	int usernames_count = 4;
	const char* usernames[] = { "bob", "alice", "charlie", "abc"};
	int result_count;
	char** result = possibleChanges(usernames_count, (char**)usernames, &result_count);

	if (result != NULL) {
		for (int i = 0; i < result_count; i++) {
			printf("%s\n", result[i]);
			free(result[i]);
		}
		free(result);
	}

	return 0;
}