/*i created a single file to store the player structure 
directly using fwrite and read the entire structure from the file using fread*/
#include <stdio.h>
#include <string.h>

typedef struct bat {
    char type[20]; // top order, middle order, lower order
    char handed[20]; // lefty or righty
} ba;

typedef struct bowl {
    char type[20]; // seamer, pacer, spinner
    char arm[20]; // left or right
} b;

// mene player k struct main bowling aur batting style include krdiya cuz it made more sense that way
typedef struct player {
    char name[20];
    char team[20];
    ba batsstyle;
    b bowlstyle;
} p;

// ye function naya player banata aur file main store krta
void createPlayer() {
    FILE *file = fopen("players.txt","a");
    p newPlayer;
    printf("Enter player name: ");
    fgets(newPlayer.name , sizeof(newPlayer.name), stdin);
    newPlayer.name[strcspn(newPlayer.name , "\n")] = '\0';
    printf("Enter team: ");
    fgets(newPlayer.team , sizeof(newPlayer.team), stdin);
    newPlayer.team[strcspn(newPlayer.team , "\n")] = '\0';
    printf("Enter batting style (top order/middle order/lower order): ");
    fgets(newPlayer.batsstyle.type , sizeof(newPlayer.batsstyle.type), stdin);
    newPlayer.batsstyle.type[strcspn(newPlayer.batsstyle.type , "\n")] = '\0';
    printf("Enter batting hand (lefty/righty): ");
    fgets(newPlayer.batsstyle.handed , sizeof(newPlayer.batsstyle.handed), stdin);
    newPlayer.batsstyle.handed[strcspn(newPlayer.batsstyle.handed , "\n")] = '\0';
    printf("Enter bowling type (seamer/pacer/spinner): ");
    fgets(newPlayer.bowlstyle.type , sizeof(newPlayer.bowlstyle.type), stdin);
    newPlayer.bowlstyle.type[strcspn(newPlayer.bowlstyle.type , "\n")] = '\0';
    printf("Enter bowling arm (left/right): ");
    fgets(newPlayer.bowlstyle.arm , sizeof(newPlayer.bowlstyle.arm), stdin);
    newPlayer.bowlstyle.arm[strcspn(newPlayer.bowlstyle.arm , "\n")] = '\0';
    
    if (fwrite(&newPlayer, sizeof(p), 1, file) != 1){
        printf("Player not added\n");
    } else{
        printf("Player added successfully.\n");
    }
    fclose(file);
}


void display_Players() {
    FILE *file = fopen("players.txt","r");
    p player;    
    while (fread(&player, sizeof(p), 1, file)) {
        printf("\nPlayer Name: %s\n", player.name);
        printf("Team: %s\n", player.team);
        printf("Batting Style: %s\n", player.batsstyle.type);
        printf("Batting Hand: %s\n", player.batsstyle.handed);
        printf("Bowling Type: %s\n", player.bowlstyle.type);
        printf("Bowling Arm: %s\n", player.bowlstyle.arm);
    }
    fclose(file);
}

void updatePlayer() {
    FILE *file = fopen("players.txt","r");
    p newPlayer;
    char playerName[20];
    int found = 0;
    printf("Enter the player name to update: ");
    fgets(playerName , sizeof(playerName), stdin);
    playerName[strcspn(playerName , "\n")] = '\0';

    FILE *tempFile = fopen("temp.txt", "w");

    while (fread(&newPlayer, sizeof(p), 1, file)) {
        if (strcmp(newPlayer.name, playerName) == 0) {
            found = 1;
            printf("Updating player: %s\n", newPlayer.name);
            while(getchar() != '\n');
        printf("Enter player name: ");
        fgets(newPlayer.name , sizeof(newPlayer.name), stdin);
        newPlayer.name[strcspn(newPlayer.name , "\n")] = '\0';
        printf("Enter new team: ");
        fgets(newPlayer.team , sizeof(newPlayer.team), stdin);
        newPlayer.team[strcspn(newPlayer.team , "\n")] = '\0';
        printf("Enter new batting style (top order/middle order/lower order): ");
        fgets(newPlayer.batsstyle.type , sizeof(newPlayer.batsstyle.type), stdin);
        newPlayer.batsstyle.type[strcspn(newPlayer.batsstyle.type , "\n")] = '\0';
        printf("Enter new batting hand (lefty/righty): ");
        fgets(newPlayer.batsstyle.handed , sizeof(newPlayer.batsstyle.handed), stdin);
        newPlayer.batsstyle.handed[strcspn(newPlayer.batsstyle.handed , "\n")] = '\0';
        printf("Enter new bowling type (seamer/pacer/spinner): ");
        fgets(newPlayer.bowlstyle.type , sizeof(newPlayer.bowlstyle.type), stdin);
        newPlayer.bowlstyle.type[strcspn(newPlayer.bowlstyle.type , "\n")] = '\0';
        printf("Enter new bowling arm (left/right): ");
        fgets(newPlayer.bowlstyle.arm , sizeof(newPlayer.bowlstyle.arm), stdin);
        newPlayer.bowlstyle.arm[strcspn(newPlayer.bowlstyle.arm , "\n")] = '\0';
        }
        fwrite(&newPlayer, sizeof(p), 1, tempFile);
    }

    fclose(file);
    fclose(tempFile);
    remove("players.txt");
    rename("temp.txt", "players.txt");

    if (found)
        printf("Player updated successfully.\n");
    else
        printf("Player not found.\n");
}


void deletePlayer() {
    FILE *file = fopen("players.txt","r");
    p player;
    char playerName[20];
    int found = 0;
    printf("Enter the player name to delete: ");
    fgets(playerName,sizeof(playerName),stdin);
    playerName[strcspn(playerName,"\n")] = '\0';

    FILE *tempFile = fopen("temp.txt", "w");

    while (fread(&player, sizeof(p), 1, file)) {
        if (strcmp(player.name, playerName) != 0) {
            fwrite(&player, sizeof(p), 1, tempFile);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);
    remove("players.txt");
    rename("temp.txt", "players.txt");

    if (found)
        printf("Player deleted successfully.\n");
    else
        printf("Player not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Create Player\n2. Display All Players\n3. Update Player\n4. Delete Player\n5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        fflush(stdin);
        switch (choice) {
            case 1:
                createPlayer();
                break;
            case 2:
                display_Players();
                break;
            case 3:
                updatePlayer();
                break;
            case 4:
                deletePlayer();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
