#include <stdio.h>
struct flight
{
    int available_seats;
    char flight_num[10];
    char departure_city[30];
    char destination_city[30];
    char date[8];
    
};
void book_seat(struct flight * f)
{
    if(f->available_seats > 0){
        printf("Seat booked on flight %s!",f->flight_num);
        f->available_seats--;
    }
    else{
        printf("Sorry! No seat available on flight %s.",f->flight_num);
    }
}
void displayFlightDetails(struct flight f) {
    printf("\nFlight Number: %s\n", f.flight_num);
    printf("Departure City: %s\n", f.departure_city);
    printf("Destination City: %s\n", f.destination_city);
    printf("Date: %s\n", f.date);
    printf("Available Seats: %d\n", f.available_seats);
}
int main(){
    struct flight flight1 = {100,"EK-606","DXB","KHI","09/11/01"};
    book_seat(&flight1);
    book_seat(&flight1);
    displayFlightDetails(flight1);
    return 0;
}
