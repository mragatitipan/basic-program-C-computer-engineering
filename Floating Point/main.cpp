/****************************************/
/* Komputasi Numerik 2017 - Kelompok A  */
/* Alya Nurulita R. (151524001)         */
/* Andika Tri D. (151524002)            */
/* Anggastya DAHP (151524004)           */
/* Azri Aliva A. (151524005)            */
/* Debbie Ariyanti (151524006)          */
/****************************************/

#include<stdio.h>
#include<string.h>
#include<math.h>
#define SIZE 31

void initiateValue(char string[], int N){
    int index;
    for(index = 0; index < N; index++){
        string[index] = '0';
    }
    string[N] = '\0';
}

void clearString(char string[], int N){
    int index;
    for(index = 0; index <= N; index++){
        string[index] = '\0';
    }
}

void intToBinary(char bin[], int num){
    int i=0;

    if(num != 0){
        while(num != 0){
            bin[i] = '0' + (num%2);
            num /= 2;
            i++;
        }
        bin[i] = '\0';
    }
    else{
        bin[0] = '0';
        bin[1] = '\0';
    }

    strcpy(bin,strrev(bin));
}

void decToBinary(char bin[], float num){

    int i=1;
    bin[0] = '.';

    if(num != 0){
        while(num != 0){
            num *= 2;

            if(num >= 1)
                *(bin + i) = '1';
            else *(bin + i) = '0';
            i++;

            num -= floor(num);
        }
    }
    else{
        bin[1] = '0';
        bin[2] = '\0';
    }

}

void swap(char *a, char *b){
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void shiftPoint(char string[], int mantissa_length, int *exponent){
    int i;

    if(strcmp(string, "0.0") != 0 ){
        if(string[0] == '0'){
            i=1;
            char temp[strlen(string)];
            strcpy(temp, string);

            while(temp[i+1] != '1'){
                swap(&temp[i], &temp[i+1]);
                *exponent = *exponent - 1;
                i++;
            }
            swap(&temp[i], &temp[i+1]);
            *exponent = *exponent - 1;

            clearString(string, strlen(string));
            strncpy(string, temp + i, strlen(temp)-i);

        }
        else{
            for(i=mantissa_length; i > 1; i--){
                swap(&string[i], &string[i-1]);
                *exponent = *exponent + 1;
            }
        }
    }

}


int main(){

    float inp; int index;
    char mantissa[4], exponent[4], exp_sign, num_sign;

    printf("\nFLOATING POINT REPRESENTATION PROGRAM IN C (Unbiased Exponent)\n\nMasukkan sebuah angka desimal (basis 10): ");
    scanf("%f", &inp);

    initiateValue(mantissa, 3);
    initiateValue(exponent, 3);

    if(inp < 0){
        num_sign = '1';
    }
    else num_sign = '0';

    inp = fabs(inp);
    int inp_floor = floor(inp);
    float desimal = inp - inp_floor;

    char bin_float[2*SIZE], bin_int[SIZE], bin_dec[SIZE];
    intToBinary(bin_int, inp_floor);
    decToBinary(bin_dec, desimal);

    strcpy(bin_float, bin_int);
    strcat(bin_float, bin_dec);

    int ex=0;
    shiftPoint(bin_float, strlen(bin_int), &ex);

    if(ex < 0) exp_sign = '1';
    else exp_sign = '0';

    char temp_exp[4];

    intToBinary(temp_exp, abs(ex));

    for(index=0;index<strlen(temp_exp);index++){
        int index2 = 3-strlen(temp_exp) + index;
        exponent[index2] = temp_exp[index];
    }

    int N = strlen(bin_float)-2 <= 3 ? strlen(bin_float)-2 :  strlen(mantissa);

    for(index=0;index<N;index++){
        mantissa[index] = bin_float[2+index];
    }

    printf("\nRepresentasi floating point-nya adalah:\n\n");
    printf("| Number sign\t | Exponent sign | Mantissa\t | Exponent\t |\n");
    printf("| \t%c\t | \t%c\t | \t%s\t | \t%s\t |\n", num_sign, exp_sign, mantissa, exponent);
    printf("\n| %c | %c |", num_sign, exp_sign);
    for(index=0; index<strlen(mantissa); index++){
        printf(" %c |", mantissa[index]);
    }
    for(index=0; index<strlen(exponent); index++){
        printf(" %c |", exponent[index]);
    }
    printf("\n");

    return 0;
}
