#include <stdio.h>


int main()


{


    int clas;


    char ch;


    int students;


    int bn_marks[100], en_marks[100], ict_marks[100], phy_marks[100], che_marks[100], bio_marks[100], math_marks[100];


    double avg_marks[100];


    double bn_gpa[100], en_gpa[100], phy_gpa[100], che_gpa[100], bio_gpa[100], ict_gpa[100], math_gpa[100], total_marks[100], total_gpa[100], grand_gpa[100];


    printf("===============RESULT SHEET 2015===============\n");


    printf("\n");


    printf("              Class: ");


    scanf("%d", &clas);


    printf("\n");


    printf("              Section: ");


    scanf("%c", &ch);


    getchar();


    printf("\n");


    printf("              Number of the Students: ");


    scanf("%d", &students);


    printf("\n");


    printf("===============================================\n");


    int i;


    for (i = 0; i < students; i++) {


        printf("\n");


        printf("\tRoll Number: %d\n", i+1);


        printf("\n");


        printf("\tBangla Marks:\t");


        scanf("%d", &bn_marks[i]);


        if(bn_marks[i]>=0 && bn_marks[i]<=100 ){


                if( bn_marks[i] < 33 ) {


                bn_gpa[i] = 0.00;


                }


               if(bn_marks[i]>=33 && bn_marks[i]<40) {


                bn_gpa[i] = 1.00;


            }


            else if (bn_marks[i]>=40 && bn_marks[i]<50) {


                bn_gpa[i] = 2.00;


            }


            else if (bn_marks[i]>=50 && bn_marks[i]<60) {


                bn_gpa[i] = 3.00;


            }


            else if(bn_marks[i]>=60 && bn_marks[i]<70) {


                bn_gpa[i] = 3.50;


            }


            else if(bn_marks[i]>=70 && bn_marks[i]<80) {


                bn_gpa[i] = 4.00;


            }


            else if (bn_marks[i]>=80 && bn_marks[i]<=100){


                bn_gpa[i] = 5.00;



            }


        }


        printf("\tEnglish Marks\t");


        scanf("%d", &en_marks[i]);



        if(en_marks[i]>=0 && en_marks[i]<=100 ){


                 if( en_marks[i] < 33 ) {


                en_gpa[i] = 0.00;


                }


            else if(en_marks[i]>=33 && en_marks[i]<40) {


                en_gpa[i] = 1.00;


            }


            else if (en_marks[i]>=40 && en_marks[i]<50) {


                en_gpa[i] = 2.00;


            }


            else if (en_marks[i]>=50 && en_marks[i]<60) {


                en_gpa[i] = 3.00;


            }


            else if(en_marks[i]>=60 && en_marks[i]<70) {


                en_gpa[i] = 3.50;


            }


            else if(en_marks[i]>=70 && en_marks[i]<80) {


                en_gpa[i] = 4.00;


            }


            else if (en_marks[i]>=80 && en_marks[i]<=100){


                en_gpa[i] = 5.00;


            }


        }


        printf("\tPhysics Marks:\t");


        scanf("%d", &phy_marks[i]);


        if(phy_marks[i]>=0 && phy_marks[i]<=100 ){


                if( phy_marks[i] < 33 ) {


                phy_gpa[i] = 0.00;


                }


               if(phy_marks[i]>=33 && phy_marks[i]<40) {


                phy_gpa[i] = 1.00;


            }


            else if (phy_marks[i]>=40 && phy_marks[i]<50) {


                phy_gpa[i] = 2.00;


            }


            else if (phy_marks[i]>=50 && phy_marks[i]<60) {


                phy_gpa[i] = 3.00;


            }


            else if(phy_marks[i]>=60 && phy_marks[i]<70) {


                phy_gpa[i] = 3.50;


            }


            else if(phy_marks[i]>=70 && phy_marks[i]<80) {


                phy_gpa[i] = 4.00;


            }


            else if (phy_marks[i]>=80 && phy_marks[i]<=100){


                phy_gpa[i] = 5.00;



            }


        }


        printf("\tChemistry Marks:");


        scanf("%d", &che_marks[i]);


        if(che_marks[i]>=0 && che_marks[i]<=100 ){


                if( che_marks[i] < 33 ) {


                che_gpa[i] = 0.00;


                }


               if(che_marks[i]>=33 && che_marks[i]<40) {


                che_gpa[i] = 1.00;


            }


            else if (che_marks[i]>=40 && che_marks[i]<50) {


                che_gpa[i] = 2.00;


            }


            else if (che_marks[i]>=50 && che_marks[i]<60) {


                che_gpa[i] = 3.00;


            }


            else if(che_marks[i]>=60 && che_marks[i]<70) {


                che_gpa[i] = 3.50;


            }


            else if(che_marks[i]>=70 && che_marks[i]<80) {


                che_gpa[i] = 4.00;


            }


            else if (che_marks[i]>=80 && che_marks[i]<=100){


                che_gpa[i] = 5.00;



            }


        }


        printf("\tBiology Marks:\t");


        scanf("%d", &bio_marks[i]);


        if(bio_marks[i]>=0 && bio_marks[i]<=100 ){


                if( bio_marks[i] < 33 ) {


                bio_gpa[i] = 0.00;


                }


               if(bio_marks[i]>=33 && bio_marks[i]<40) {


                bio_gpa[i] = 1.00;


            }


            else if (bio_marks[i]>=40 && bio_marks[i]<50) {


                bio_gpa[i] = 2.00;


            }


            else if (bio_marks[i]>=50 && bio_marks[i]<60) {


                bio_gpa[i] = 3.00;


            }


            else if(bio_marks[i]>=60 && bio_marks[i]<70) {


                bio_gpa[i] = 3.50;


            }


            else if(bio_marks[i]>=70 && bio_marks[i]<80) {


                bio_gpa[i] = 4.00;


            }


            else if (bio_marks[i]>=80 && bio_marks[i]<=100){


                bio_gpa[i] = 5.00;



            }


        }


        printf("\tMath Marks:\t");


        scanf("%d", &math_marks[i]);


        if(math_marks[i]>=0 && math_marks[i]<=100 ){


                if( math_marks[i] < 33 ) {


                math_gpa[i] = 0.00;


                }


               if(math_marks[i]>=33 && math_marks[i]<40) {


                math_gpa[i] = 1.00;


            }


            else if (math_marks[i]>=40 && math_marks[i]<50) {


                math_gpa[i] = 2.00;


            }


            else if (math_marks[i]>=50 && math_marks[i]<60) {


                math_gpa[i] = 3.00;


            }


            else if(math_marks[i]>=60 && math_marks[i]<70) {


                math_gpa[i] = 3.50;


            }


            else if(math_marks[i]>=70 && math_marks[i]<80) {


                math_gpa[i] = 4.00;


            }


            else if (math_marks[i]>=80 && math_marks[i]<=100){


                math_gpa[i] = 5.00;



            }


        }


        printf("\tICT Marks:\t");


        scanf("%d", &ict_marks[i]);


        if(ict_marks[i]>=0 && ict_marks[i]<=100 ){


                if( ict_marks[i] < 33 ) {


                ict_gpa[i] = 0.00;


                }


               if(ict_marks[i]>=33 && ict_marks[i]<40) {


                ict_gpa[i] = 1.00;


            }


            else if (ict_marks[i]>=40 && ict_marks[i]<50) {


                ict_gpa[i] = 2.00;


            }
           else if (ict_marks[i]>=50 && ict_marks[i]<60) {


                ict_gpa[i] = 3.00;
           }


            else if(ict_marks[i]>=60 && ict_marks[i]<70) {


                ict_gpa[i] = 3.50;
            }


            else if(ict_marks[i]>=70 && ict_marks[i]<80) {


                ict_gpa[i] = 4.00;


            }


            else if (ict_marks[i]>=80 && ict_marks[i]<=100){


                ict_gpa[i] = 5.00;

            }
        }
        printf("\n");
        total_marks[i] = bn_marks[i] + en_marks[i] + phy_marks[i] + che_marks[i] + bio_marks[i] + math_marks[i] + ict_marks[i];
        printf("Total Marks is:\t\t %0.2lf\n", total_marks[i]);
        avg_marks[i] = total_marks[i] / 7;
        printf("Average Marks:\t\t %0.2lf\n", avg_marks[i]);
        printf("\n");
        printf("\t\t--GRADE SHEET--\n");
        printf("\n");
        printf("\tBangla GP:\t%0.2lf\n", bn_gpa[i]);
        printf("\tEnglish GP:\t%0.2lf\n", en_gpa[i]);
        printf("\tPhysics GP:\t%0.2lf\n", phy_gpa[i]);
        printf("\tChemistry GP:\t%0.2lf\n", che_gpa[i]);
        printf("\tBiology GP:\t%0.2lf\n", bio_gpa[i]);
        printf("\tMath GP:\t%0.2lf\n", math_gpa[i]);
        printf("\tICT GP:\t\t%0.2lf\n", ict_gpa[i]);
        printf("\n");
        if(bn_gpa[i] > 0.00 && en_gpa[i] > 0.00 && phy_gpa[i] > 0.00 && che_gpa[i] > 0.00 && bio_gpa[i] > 0.00 && ict_gpa[i] > 0.00) {



            if( math_gpa[i] >= 2.00) {


                grand_gpa[i] = (bn_gpa[i] + en_gpa[i] + phy_gpa[i] + che_gpa[i] + bio_gpa[i] + ict_gpa[i] + ( math_gpa[i] - 2.00 ))/6;


            }
            else if(math_gpa[i]<2.00) {


                grand_gpa[i] =( bn_gpa[i] + en_gpa[i] + phy_gpa[i] + che_gpa[i] + bio_gpa[i] > + ict_gpa[i]) / 6.00;
            }
        }
        else {
            grand_gpa[i] = 0.00;
        }
        printf("\tGRAND GPA is:\t%0.2lf\n", grand_gpa[i]);
        printf("\n");
        printf("=========================================\n");
        printf("\n");
        }
        for( i= 0; i< students; i++) {


            printf("Roll:\t%d\tGPA:\t[ %0.2lf ]\n", i+1, grand_gpa[i]);
        }
    printf("Press any key to exit.....");


    scanf("...");


    return 0;


}
