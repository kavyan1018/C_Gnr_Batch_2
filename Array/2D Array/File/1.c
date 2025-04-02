// Opning file 


// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     FILE *file = fopen("test.txt", "w"); // open file in write mode

//     if (file == NULL) // check if file is opened successfully
//     {
//         printf("Error opening file\n");
//         return 1;
//     }
//     else
//     {
//         printf("File opened successfully\n");
//     }
//     fclose(file); // close the file
// }





// -----------------------------------------------------------------------------


// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     FILE *file = fopen("test.txt", "r"); // open file in Read mode

//     if (file == NULL) // check if file is opened successfully
//     {
//         printf("Error opening file\n");
//         return 1;
//     }

//     fclose(file); // close the file

//     printf("File opened successfully\n");
// }



// -----------------------------------------------------------------------------

// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     FILE *file = fopen("Fprintf.txt", "w");

//     if (file == NULL) // check if file is opened successfully
//     {
//         printf("Error opening file\n");
//         return 1;
//     }

//     fprintf(file, "Hello, World!\n"); // write to the file

//     fclose(file); // close the file
// }


// -----------------------------------------------------------------------------

// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     FILE *file = fopen("Fputs.txt", "w");

//     if (file == NULL) // check if file is opened successfully
//     {
//         printf("Error opening file\n");
//         return 1;
//     }

//     fputs("This is a String Written Using Function\n", file); // write to the file

//     fclose(file); // close the file
// }


// -----------------------------------------------------------------------------

// #include <stdio.h>

// int main() {
//     FILE *file = fopen("example.bin", "wb");
//     if (file == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     int numbers[] = {1, 2, 3, 4, 5};
//     fwrite(numbers, sizeof(int), 5, file);

//     fclose(file);
//     return 0;
// }



// -----------------------------------------------------------------------------
// read

#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char str[100];
    fscanf(file, "%[^\n]", str);
    printf("Read from file: %s\n", str);
    
    fclose(file);
    return 0;
}




// -----------------------------------------------------------------------------

// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     FILE *file = fopen("Rputs.txt", "w");

//     if (file == NULL) // check if file is opened successfully
//     {
//         printf("Error opening file\n");
//         return 1;
//     }

//     fputs("This is a String Written Using Function\n", file); // write to the file

//     fclose(file); // close the file
// }


// -----------------------------------------------------------------------------

// #include <stdio.h>

// int main() {
//     FILE *file = fopen("example.bin", "wb");
//     if (file == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     int numbers[] = {1, 2, 3, 4, 5};
//     fwrite(numbers, sizeof(int), 5, file);

//     fclose(file);
//     return 0;
// }