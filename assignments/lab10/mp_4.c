#include <stdio.h>
#include <string.h>
int count = 0;
struct car {
    char make[30];
    char model[30];
    int year;
    float price;
    float mileage;
};


void addcar(struct car cars[]) {
    printf("\nEnter car make: ");
    getchar();
    fgets(cars[count].make, sizeof(cars[count].make), stdin);
    cars[count].make[strcspn(cars[count].make, "\n")] = '\0'; 

    printf("Enter car model: ");
    fgets(cars[count].model, sizeof(cars[count].model), stdin);
    cars[count].model[strcspn(cars[count].model, "\n")] = '\0';

    printf("Enter year: ");
    scanf("%d", &cars[count].year);

    printf("Enter price: ");
    scanf("%f", &cars[count].price);

    printf("Enter mileage: ");
    scanf("%f", &cars[count].mileage);

    count++; 
    printf("Car added successfully!\n");
}


void searchBymodel(struct car cars[],char *model) {
    int found = 0;
    printf("\nCars of model %s:\n", model);
    for (int i = 0; i < count; i++) {
        if (strcmp(cars[i].model, model) == 0) {
            printf("\nMake: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: %.2f\n", cars[i].price);
            printf("Mileage: %.2f\n", cars[i].mileage);
            found = 1;
        }
    }
    if (found == 0) {
        printf("No cars found in this model.\n");
    }
}
void searchBymake(struct car cars[],char *make) {
    int found = 0;
    printf("\nCars of make %s:\n", make);
    for (int i = 0; i < count; i++) {
        if (strcmp(cars[i].make, make) == 0) {
            printf("\nMake: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: %.2f\n", cars[i].price);
            printf("Mileage: %.2f\n", cars[i].mileage);
            found = 1;
        }
    }
    if (found == 0) {
        printf("No cars found in this make.\n");
    }
}

void displayAllcars(struct car cars[]) {
    if (count == 0) {
        printf("No cars to display.\n");
        return;
    }

    printf("\nList of All Cars:\n");
    for (int i = 0; i < count; i++) {
        printf("\nMake: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("Mileage: %.2f\n", cars[i].mileage);
    }
}

int main() {
    struct car cars[100];
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add a Car\n");
        printf("2. Search Cars by Model\n");
        printf("3. Search Cars by Make\n");
        printf("4. Display All Cars\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addcar(cars);
                break;
            case 2:
                {
                    char model[30];
                    printf("Enter model to search: ");  
                    getchar();
                    fgets(model, sizeof(model), stdin);
                    model[strcspn(model, "\n")] = '\0'; 
                    searchBymodel(cars, model);
                }
                break;
            case 3:
                char make[30];
                    printf("Enter make to search: ");  
                    getchar();
                    fgets(make, sizeof(make), stdin);
                    make[strcspn(make, "\n")] = '\0'; 
                    searchBymake(cars, make);
                break;
            case 4:
                displayAllcars(cars);
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
