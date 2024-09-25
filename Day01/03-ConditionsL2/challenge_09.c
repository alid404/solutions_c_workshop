#include <stdio.h>

int main() {
    float base_salary, hourly_rate, total_salary;
    int overtime_hours, job_position;
    
    /* I added the hourly rate variable to slove this part "Heures supplémentaires : 1,5 fois le taux horaire" */
    
    printf("Enter your Base salary (in euros): ");
    scanf("%f", &base_salary);
    
    printf("Enter the Number of overtime hours: ");
    scanf("%d", &overtime_hours);
    
    printf("Enter your Job position (1 for junior, 2 for senior): ");
    scanf("%d", &job_position);
    
    hourly_rate = base_salary / (40 * 4);  
    total_salary = base_salary;
    total_salary += overtime_hours * hourly_rate * 1.5;
    
    if (job_position == 1) {  
        total_salary += base_salary * 0.10;
    } else if (job_position == 2) {  
        total_salary += base_salary * 0.20;
    }
    
    printf("Total salary is %.2f€\n", total_salary);
    
    return 0;
}