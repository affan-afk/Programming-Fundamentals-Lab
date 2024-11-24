#include <stdio.h>
#include <string.h>
int count = 0;
struct Movie {
    char title[50];
    char genre[30];
    char director[50];
    int releaseYear;
    float rating;
};


void addMovie(struct Movie movies[]) {
    printf("\nEnter movie title: ");
    getchar();
    fgets(movies[count].title, sizeof(movies[count].title), stdin);
    movies[count].title[strcspn(movies[count].title, "\n")] = '\0'; 

    printf("Enter movie genre: ");
    fgets(movies[count].genre, sizeof(movies[count].genre), stdin);
    movies[count].genre[strcspn(movies[count].genre, "\n")] = '\0';

    printf("Enter director: ");
    fgets(movies[count].director, sizeof(movies[count].director), stdin);
    movies[count].director[strcspn(movies[count].director, "\n")] = '\0';

    printf("Enter release year: ");
    scanf("%d", &movies[count].releaseYear);

    printf("Enter rating (0.0 to 10.0): ");
    scanf("%f", &movies[count].rating);

    count++; 
    printf("Movie added successfully!\n");
}


void searchByGenre(struct Movie movies[],char *genre) {
    int found = 0;
    printf("\nMovies of genre %s:\n", genre);
    for (int i = 0; i < count; i++) {
        if (strcmp(movies[i].genre, genre) == 0) {
            printf("\nTitle: %s\n", movies[i].title);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].releaseYear);
            printf("Rating: %.1f\n", movies[i].rating);
            found = 1;
        }
    }
    if (found == 0) {
        printf("No movies found in this genre.\n");
    }
}

void displayAllMovies(struct Movie movies[]) {
    if (count == 0) {
        printf("No movies to display.\n");
        return;
    }

    printf("\nList of All Movies:\n");
    for (int i = 0; i < count; i++) {
        printf("\nTitle: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Rating: %.1f\n", movies[i].rating);
    }
}

int main() {
    struct Movie movies[100];
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add a Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie(movies);
                break;
            case 2:
                {
                    char genre[30];
                    printf("Enter genre to search: ");  
                    getchar();
                    fgets(genre, sizeof(genre), stdin);
                    genre[strcspn(genre, "\n")] = '\0'; 
                    searchByGenre(movies, genre);
                }
                break;
            case 3:
                displayAllMovies(movies);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
