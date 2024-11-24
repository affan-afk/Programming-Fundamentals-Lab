#include <stdio.h>
#include <string.h>

struct TravelPackage {
    char packageName[50];
    char destination[50];
    int duration; 
    float cost;   
    int seatsAvailable;  
};

void displayPackages(struct TravelPackage packages[], int n) {
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < n; i++) {
        if(packages[i].seatsAvailable > 0){
        printf("\nPackage Name: %s\n", packages[i].packageName);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%.2f\n", packages[i].cost);
        printf("Seats Available: %d\n", packages[i].seatsAvailable);
        }
    }
}
void bookPackage(struct TravelPackage packages[], int n, int packageIndex) {
    if (packages[packageIndex].seatsAvailable > 0) {
        packages[packageIndex].seatsAvailable--;
        printf("\nBooking successful!\n");
        printf("Remaining seats: %d\n", packages[packageIndex].seatsAvailable);
    } else {
        printf("\nSorry, no seats available for this package.\n");
    }
}

int main() {
    struct TravelPackage packages[] = {
        {"Tropical Paradise", "Hawaii", 7, 1200.50, 15},
        {"European Escape", "Paris, France", 10, 2500.00, 5},
        {"Adventure Expedition", "Amazon Rainforest", 14, 1800.75, 10},
        {"Mountain Retreat", "Swiss Alps", 5, 1500.20, 8},
        {"Cultural Tour", "Kyoto, Japan", 8, 2100.00, 20},
        {"Beach Getaway", "Maldives", 7, 3200.00, 10},
        {"Desert Safari", "Dubai, UAE", 6, 1400.00, 12},
        {"Safari Adventure", "Kenya, Africa", 12, 2200.00, 6}
    };

    int n = sizeof(packages) / sizeof(packages[0]);
    int choice;

    while (1) {
        displayPackages(packages, n);
        printf("\nEnter the package number to book (1-%d), or 0 to exit: ", n);
        scanf("%d", &choice);
        if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        }
        else if (choice < 1 || choice > n)
        {
            printf("Invalid choice. Please try again.\n");
        }
        else{
        bookPackage(packages, n, choice - 1); 
        }

    }

    return 0;
}
