#include <stdio.h>
#include <stdlib.h>
struct Inventory {
    char itemName[50];
    int quantity;
    float price;
};
struct Patient {
    char name[50];
    int age;
    char gender;
    int patientID;
    char diagnosis[100];
};
struct Doctor {
    char name[50];
    int doctorID;
    char specialization[50];
    int experience;
};
// struct Staff {
//     char name[50];
//     int staffID;
//     char position[50];
//     int yearsOfService;
// };

int main() {
    int numInventories, numPatients, numDoctors, numStaffs;

    // Get the number of entries for each category
    printf("Welcome to the Kalyani Hospital Management System.\n");
    printf("Enter number of inventory items: ");
    scanf("%d", &numInventories);
    printf("Enter number of patients: ");
    scanf("%d", &numPatients);
    printf("Enter number of doctors: ");
    scanf("%d", &numDoctors);
    // printf("Enter number of staff members: ");
    // scanf("%d", &numStaffs);

    //allocate memory via pointer
    struct Inventory *inventories = (struct Inventory *)malloc(numInventories * sizeof(struct Inventory));
    struct Patient *patients = (struct Patient *)malloc(numPatients * sizeof(struct Patient));
    struct Doctor *doctors = (struct Doctor *)malloc(numDoctors * sizeof(struct Doctor));
    // struct Staff *staffs = (struct Staff *)malloc(numStaffs * sizeof(struct Staff));

    for (int i = 0; i < numInventories; i++) {
        printf("\nEnter details for inventory item %d:\n", i + 1);
        printf("Item Name: ");
        getchar();
        fgets(inventories[i].itemName, sizeof(inventories[i].itemName), stdin);
        printf("Quantity: ");
        scanf("%d", &inventories[i].quantity);
        printf("Price: ");
        scanf("%f", &inventories[i].price);
    }
    for (int i = 0; i < numPatients; i++) {
        printf("\nEnter details for patient %d:\n", i + 1);
        printf("Name: ");
        getchar(); 
        fgets(patients[i].name, sizeof(patients[i].name), stdin);
        printf("Age: ");
        scanf("%d", &patients[i].age);
        printf("Gender (M/F): ");
        scanf(" %c", &patients[i].gender);
        printf("Patient ID: ");
        scanf("%d", &patients[i].patientID);
        printf("Diagnosis: ");
        getchar(); 
        fgets(patients[i].diagnosis, sizeof(patients[i].diagnosis), stdin);
    }
    for (int i = 0; i < numDoctors; i++) {
        printf("\nEnter details for doctor %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(doctors[i].name, sizeof(doctors[i].name), stdin);
        printf("Doctor ID: ");
        scanf("%d", &doctors[i].doctorID);
        printf("Specialization: ");
        getchar(); 
        fgets(doctors[i].specialization, sizeof(doctors[i].specialization), stdin);
        printf("Years of Experience: ");
        scanf("%d", &doctors[i].experience);
    }
    // for (int i = 0; i < numStaffs; i++) {
    //     printf("\nEnter details for staff member %d:\n", i + 1);
    //     printf("Name: ");
    //     getchar();
    //     fgets(staffs[i].name, sizeof(staffs[i].name), stdin);
    //     printf("Staff ID: ");
    //     scanf("%d", &staffs[i].staffID);
    //     printf("Position: ");
    //     getchar();
    //     fgets(staffs[i].position, sizeof(staffs[i].position), stdin);
    //     printf("Years of Service: ");
    //     scanf("%d", &staffs[i].yearsOfService);
    // }

    //database display
    printf("\nInventory Details:\n");
    for (int i = 0; i < numInventories; i++) {
        printf("Item %d:\n", i + 1);
        printf("Item Name: %s", inventories[i].itemName);
        printf("Quantity: %d\n", inventories[i].quantity);
        printf("Price: %.2f\n", inventories[i].price);
    }
    printf("\n\n");
    printf("\nPatient Details:\n");
    for (int i = 0; i < numPatients; i++) {
        printf("Patient %d:\n", i + 1);
        printf("Name: %s", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Gender: %c\n", patients[i].gender);
        printf("Patient ID: %d\n", patients[i].patientID);
        printf("Diagnosis: %s", patients[i].diagnosis);
    }
    printf("\n\n");
    printf("\nDoctor Details:\n");
    for (int i = 0; i < numDoctors; i++) {
        printf("Doctor %d:\n", i + 1);
        printf("Name: %s", doctors[i].name);
        printf("Doctor ID: %d\n", doctors[i].doctorID);
        printf("Specialization: %s", doctors[i].specialization);
        printf("Years of Experience: %d\n", doctors[i].experience);
    }
    // printf("\n\n");
    // printf("\nStaff Details:\n");
    // for (int i = 0; i < numStaffs; i++) {
    //     printf("Staff Member %d:\n", i + 1);
    //     printf("Name: %s", staffs[i].name);  // fgets includes the newline character
    //     printf("Staff ID: %d\n", staffs[i].staffID);
    //     printf("Position: %s", staffs[i].position);  // fgets includes the newline character
    //     printf("Years of Service: %d\n", staffs[i].yearsOfService);
    // }
    free(inventories);
    free(patients);
    free(doctors);
    // free(staffs);

    return 0;
}
