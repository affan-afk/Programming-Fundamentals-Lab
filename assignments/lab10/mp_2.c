#include <stdio.h>
#include <math.h>
 struct point
 {
    float x;
    float y;
 };
 float distance(struct point p1,struct point p2)
 {
       int distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    return distance;
 }
 int within_bound(struct point p,struct point b_left,struct point t_right){
    if(p.x > b_left.x && p.x < t_right.x && p.y > b_left.y && p.y < t_right.y){
        return 1;
    }
    else{
        return 0;
    }
 }
 int main(){
    struct point user_point_1,user_point_2;
    printf("enter x co-ordinate of point 1: ");
    scanf("%f",&user_point_1.x);
    printf("enter y co-ordinate of point 1: ");
    scanf("%f",&user_point_1.y);
     printf("enter x co-ordinate of point 2: ");
    scanf("%f",&user_point_2.x);
    printf("enter y co-ordinate of point 2: ");
    scanf("%f",&user_point_2.y);
    printf("The distance between User Point 1 (%.2f, %.2f) and User Point 2 (%.2f, %.2f) is: %.2f\n",user_point_1.x, user_point_1.y,user_point_2.x, user_point_2.y,distance(user_point_1,user_point_2));
    struct point b_left = {2.0, 2.0};
    struct point t_right = {6.0, 5.0};
    if (is_within_boundary(user_point_1, b_left, t_right)) {
        printf("User Point 1 (%.2f, %.2f) is inside the rectangle with corner points (%.2f, %.2f),(%.2f, %.2f).\n", user_point_1.x, user_point_1.y,b_left.x,b_left.y,t_right.x,t_right.y);
    } else {
        printf("User Point 1 (%.2f, %.2f) is outside the rectangle with corner points (%.2f, %.2f),(%.2f, %.2f).\n", user_point_1.x, user_point_1.y,b_left.x,b_left.y,t_right.x,t_right.y);
    }
    if (is_within_boundary(user_point_2, b_left, t_right)) {
        printf("User Point 2 (%.2f, %.2f) is inside the rectangle with corner points (%.2f, %.2f),(%.2f, %.2f).\n", user_point_2.x, user_point_2.y,b_left.x,b_left.y,t_right.x,t_right.y);
    } else {
        printf("User Point 2 (%.2f, %.2f) is outside the rectangle with corner points (%.2f, %.2f),(%.2f, %.2f).\n", user_point_2.x, user_point_2.y,b_left.x,b_left.y,t_right.x,t_right.y);
    }
    return 0;
 }